#include "AscMapKit/Public/Door/AscMapKitDoorActor.h"

// UE
#include "Runtime/Engine/Classes/Kismet/KismetSystemLibrary.h"

// Ascentroid
#include "AscMapKit/Public/Core/Global/AscMapKitPropertiesMaterialInfoStruct.h"
#include "AscMapKit/Public/Core/Global/AscMapKitGlobals.h"
#include "AscMapKit/Public/Core/Util/AscMapKitUtil.h"

AAscMapKitDoorActor::AAscMapKitDoorActor()
{
#if WITH_EDITOR && !UE_BUILD_SHIPPING
    PrimaryActorTick.bCanEverTick = true;
    PrimaryActorTick.bStartWithTickEnabled = true;
#else
    PrimaryActorTick.bCanEverTick = false;
    PrimaryActorTick.bStartWithTickEnabled = false;
    PrimaryActorTick.bAllowTickOnDedicatedServer = false;
#endif

    const ConstructorHelpers::FObjectFinder<UStaticMesh> CubeStaticMeshRef(TEXT("StaticMesh'/Engine/BasicShapes/Cube.Cube'"));

    EmptyRootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("EmptyRootComponent"));
    EmptyRootComponent->SetMobility(EComponentMobility::Static);

    RootComponent = EmptyRootComponent;

    StaticMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComponent"));
    StaticMeshComponent->AttachToComponent(RootComponent, FAttachmentTransformRules::KeepRelativeTransform);
    StaticMeshComponent->SetRelativeScale3D(FVector(1.f, 1.f, 1.f));
    StaticMeshComponent->SetCollisionProfileName(TEXT("NoCollision"));
    StaticMeshComponent->LightmapType = ELightmapType::ForceSurface; // note: necessary, otherwise lightmaps won't bake!!

    if (CubeStaticMeshRef.Succeeded())
    {
        CubeStaticMesh = CubeStaticMeshRef.Object;
        StaticMeshComponent->SetStaticMesh(CubeStaticMesh);
    }

    SkeletalMeshComponent = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("SkeletalMeshComponent"));
    SkeletalMeshComponent->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
    SkeletalMeshComponent->SetCollisionProfileName(TEXT("BlockAll"));
    SkeletalMeshComponent->AttachToComponent(RootComponent, FAttachmentTransformRules::KeepRelativeTransform);

    PlayerInteractBoundingBox = CreateDefaultSubobject<UAscMapKitDoorPlayerInteractBoundingBox>(TEXT("PlayerInteractBoundingBox"));
    PlayerInteractBoundingBox->AttachToComponent(RootComponent, FAttachmentTransformRules::KeepRelativeTransform);
    PlayerInteractBoundingBox->SetBoxExtent(FVector(1200.f, 1200.f, 1200.f));
    PlayerInteractBoundingBox->SetVisibility(false, true);
    PlayerInteractBoundingBox->SetHiddenInGame(true);

    // todo: @reminder: keep defaults in sync with game actor

    MapKit = GetMapKitDefaults();

#if !UE_BUILD_SHIPPING
    StaticMeshComponent->SetHiddenInGame(false);

    if (PlayerInteractBoundingBox)
        PlayerInteractBoundingBox->SetHiddenInGame(false);
#endif
}

FAscMapKitDoorPropertiesStruct AAscMapKitDoorActor::GetMapKitDefaults()
{
    auto Result = FAscMapKitDoorPropertiesStruct();

    Result.DisplayName = TEXT("Door");
    Result.Id = TEXT("001");

    Result.Status.CloseTimeoutSeconds = 4.f;
    Result.Status.CheckIntervalSeconds = 1.f;

    Result.Lock.OpenLockedDoorDelaySeconds = 0.4f;

    Result.NonDestructible.DisableEntireCollisionOnOpen = true;
    Result.NonDestructible.DisableEntireCollisionOnOpenDelaySeconds = 0.f;
    Result.NonDestructible.DisableDefaultToggleCollisionBoneNamesDelaySeconds = 0.3f;

    Result.NonDestructible.PlayerInteractBoundingBoxExtent = FVector(1200.f, 1200.f, 1200.f);
    
    Result.Destructible.MaxShields = 300.f;
    Result.Destructible.LifetimeSeconds = 20.f;

    Result.Destructible.Shared.OverrideOnHitRadius = 5000.f;
    Result.Destructible.Shared.OverrideOnHitImpulseStrength = 80000.f;

    Result.Destructible.Shared.PlayerDamage.Enable = true;
    Result.Destructible.Shared.PlayerDamage.Amount = 3.f;
    Result.Destructible.Shared.PlayerDamage.DelaySeconds = 1.f;
    Result.Destructible.Shared.PlayerDamage.ScaleByVelocityMin = 1.f;
    Result.Destructible.Shared.PlayerDamage.ScaleByVelocityMax = 4500.f;

    Result.Destructible.Shared.EnemyDamage.Enable = true;
    Result.Destructible.Shared.EnemyDamage.Amount = 3.f;
    Result.Destructible.Shared.EnemyDamage.DelaySeconds = 1.f;
    Result.Destructible.Shared.EnemyDamage.ScaleByVelocityMin = 1.f;
    Result.Destructible.Shared.EnemyDamage.ScaleByVelocityMax = 4500.f;

    Result.Destructible.Shared.AllowDestroyByProjectile = true;
    Result.Destructible.Shared.DestroyByProjectileStartShieldAmount = 30.f;

    Result.Destructible.Shared.ScaleOverTime = false;

    Result.Destructible.Shared.Disappear.Enable = true;
    Result.Destructible.Shared.Disappear.ChanceDisappearOnStart = 50;
    Result.Destructible.Shared.Disappear.IterationDelaySeconds = 0.3f;
    Result.Destructible.Shared.Disappear.DelaySecondsRangeMin = 0.3f;
    Result.Destructible.Shared.Disappear.DelaySecondsRangeMax = 0.5f;
    Result.Destructible.Shared.Disappear.EffectsDelaySeconds = 0.5f;
    
    return Result;
}

void AAscMapKitDoorActor::OnConstruction(const FTransform &Transform)
{
    Super::OnConstruction(Transform);
}

void AAscMapKitDoorActor::BeginPlay()
{
    Super::BeginPlay();
}

#if WITH_EDITOR
void AAscMapKitDoorActor::PostInitializeComponents()
{
    Super::PostInitializeComponents();

    if (!GIsEditor)
        return;

    //UAscMapKitUtil::Log(TEXT("PostInitializeComponents()")); // @debug

    EditorUpdateDoorType(MapKit.DoorType);
    EditorUpdatePlayerInteractBoundingBoxExtent(MapKit.NonDestructible.PlayerInteractBoundingBoxExtent);
    EditorUpdateMaterialInfo();

    if (MapKit.NonDestructible.ShowPlayerInteractBoundingBoxExtent)
    {
        PlayerInteractBoundingBox->SetVisibility(true, true);
        PlayerInteractBoundingBox->SetHiddenInGame(false);
    }
}

void AAscMapKitDoorActor::Tick(const float DeltaTime)
{
    Super::Tick(DeltaTime);

    if (GetActorScale().X != 1.f || GetActorScale().Y != 1.f || GetActorScale().Z != 1.f)
        bNeedsScaleReset = true;

    if (bNeedsScaleReset)
    {
        GEngine->AddOnScreenDebugMessage(-1, 20.f, FColor::Red, FString::Printf(TEXT("Error: Scale modification is NOT supported by door actors! Sorry, it corrupts the door collision physics. If you need special door scaling, please build a custom door tailored to your requirements. %s"), *GetHumanReadableName()));

        // todo: @reminder: see function comments
        //ConvertScaleToBoxExtent();

        GetRootComponent()->UpdateComponentToWorld();
        GetRootComponent()->MarkRenderStateDirty();

        SetActorRelativeScale3D(FVector(1.f, 1.f, 1.f));
        SetActorScale3D(FVector(1.f, 1.f, 1.f));

        bNeedsScaleReset = false;
    }
}

void AAscMapKitDoorActor::PostLoad()
{
    Super::PostLoad();

    if (!GIsEditor)
        return;
    
    EditorUpdateMaterialInfo();
}

void AAscMapKitDoorActor::PostRegisterAllComponents()
{
    Super::PostRegisterAllComponents();

    if (!GIsEditor)
        return;
    
    EditorUpdateMaterialInfo();
}

void AAscMapKitDoorActor::PostEditUndo()
{
    Super::PostEditUndo();

    if (!GIsEditor)
        return;
    
    EditorUpdateMaterialInfo();
}

void AAscMapKitDoorActor::PostEditChangeProperty(struct FPropertyChangedEvent &PropertyChangedEvent)
{
    Super::PostEditChangeProperty(PropertyChangedEvent);

    if (!GIsEditor)
        return;

    if (PropertyChangedEvent.Property == nullptr || PropertyChangedEvent.MemberProperty == nullptr)
        return;

    const auto TransactionContext = FString::Printf(TEXT("%s::%hc"), *GetClass()->GetName(), *__FUNCTION__);
    const auto TransactionIndex = UKismetSystemLibrary::BeginTransaction(TransactionContext, FText::FromString(FString::Printf(TEXT("Modify %s"), *GetHumanReadableName())), nullptr);

    const auto PropertyName = PropertyChangedEvent.GetPropertyName();
    const auto MemberDisplayName = PropertyChangedEvent.MemberProperty->GetDisplayNameText().ToString();

    //UAscMapKitUtil::Log(TEXT("PostEditChangeProperty()")); // @debug
    //UAscMapKitUtil::Log(PropertyName.ToString()); // @debug

    auto bModified = false;
    
    if (MemberDisplayName.Contains(TEXT("Scale")) && (PropertyName == TEXT("X") || PropertyName == TEXT("Y") || PropertyName == TEXT("Z")))
    {
        bNeedsScaleReset = true;
        bModified = true;
    }
    else if (PropertyName == TEXT("ShowPlayerInteractBoundingBoxExtent"))
    {
        if (PlayerInteractBoundingBox)
        {
            PlayerInteractBoundingBox->SetVisibility(!PlayerInteractBoundingBox->GetVisibleFlag(), true);
            PlayerInteractBoundingBox->SetHiddenInGame(!PlayerInteractBoundingBox->bHiddenInGame);
            bModified = true;
        }
    }
    else if (PropertyName == TEXT("DoorType"))
    {
        EditorUpdateDoorType(MapKit.DoorType);
        bModified = true;
    }
    else if (PropertyName == TEXT("SkeletalMesh") || PropertyName == TEXT("AnimationBlueprintClass"))
    {
        EditorUpdateDoorCustom();
        bModified = true;
    }

    const auto &CurrentPlayerInteract = MapKit.NonDestructible.PlayerInteractBoundingBoxExtent;

    if (CachedPlayerInteractExtent.IsZero() || CurrentPlayerInteract != CachedPlayerInteractExtent)
    {
        EditorUpdatePlayerInteractBoundingBoxExtent(CurrentPlayerInteract);
        bModified = true;
    }

    EditorUpdateMaterialInfo();

    if (bModified)
    {
        PostEditChange();
        Modify();
        MarkPackageDirty();

        GetRootComponent()->UpdateComponentToWorld();
        GetRootComponent()->MarkRenderStateDirty();

        ReregisterAllComponents();

        UKismetSystemLibrary::TransactObject(this);
        UKismetSystemLibrary::EndTransaction();
    }
    else
        UKismetSystemLibrary::CancelTransaction(TransactionIndex);
}

void AAscMapKitDoorActor::EditorUpdateDoorType(const EAscMapKitDoorTypeEnum DoorType)
{
    if (!GIsEditor)
        return;
    
    //UAscMapKitUtil::Log(TEXT("EditorUpdateDoorType()")); // @debug

    const auto DoorDataAsset = UAscMapKitGlobals::GetDoorDataAsset();
    const auto DoorData = DoorDataAsset->Get(DoorType);

    if (DoorType != EAscMapKitDoorTypeEnum::None && DoorType != EAscMapKitDoorTypeEnum::Custom && DoorType != DoorData.DoorType)
    {
        UAscMapKitUtil::Log(TEXT("Door type is not configured in door data asset!"));
        return;
    }

    // reset
    MapKit.NonDestructible.PlayerInteractBoundingBoxExtent = FVector(1200.f, 1200.f, 1200.f);

    // reset
    MapKit.Destructible.Enable = false;
    MapKit.Destructible.Shared.DestructibleClass = nullptr;

    // reset
    if (StaticMeshComponent)
    {
        StaticMeshComponent->SetStaticMesh(nullptr);
        StaticMeshComponent->SetVisibility(false, true);
    }

    // reset
    if (SkeletalMeshComponent)
    {
        SkeletalMeshComponent->SetAnimationMode(EAnimationMode::AnimationSingleNode);
        SkeletalMeshComponent->SetAnimInstanceClass(nullptr);
        SkeletalMeshComponent->SetSkeletalMesh(nullptr);
        SkeletalMeshComponent->SetVisibility(false, true);
    }

    // reset
    MapKit.NonDestructible.AnimationBlueprintClass = nullptr;
    MapKit.NonDestructible.SkeletalMesh = nullptr;

    // reset
    MapKit.Destructible.StaticMesh = nullptr;
    MapKit.Destructible.StaticMeshDestroyed = nullptr;

    const auto bIsDestructible = DoorData.bIsDestructible;

    if (!DoorData.PlayerInteractBoundingBoxExtent.IsZero())
    {
        MapKit.NonDestructible.PlayerInteractBoundingBoxExtent = DoorData.PlayerInteractBoundingBoxExtent;
        EditorUpdatePlayerInteractBoundingBoxExtent(DoorData.PlayerInteractBoundingBoxExtent);
    }
    
    if (DoorType != EAscMapKitDoorTypeEnum::None && DoorType != EAscMapKitDoorTypeEnum::Custom)
    {
        if (!bIsDestructible)
        {
            if (StaticMeshComponent && DoorData.bForceUseStaticMesh && DoorData.StaticMesh)
            {
                StaticMeshComponent->SetStaticMesh(DoorData.StaticMesh);
                StaticMeshComponent->SetVisibility(true, true);

                MapKit.Destructible.StaticMesh = DoorData.StaticMesh;
            }
            else if (SkeletalMeshComponent && DoorData.SkeletalMesh)
            {
                if (DoorData.AnimationBlueprint)
                {
                    SkeletalMeshComponent->SetAnimationMode(EAnimationMode::AnimationBlueprint);
                    SkeletalMeshComponent->SetAnimInstanceClass(DoorData.AnimationBlueprint);
                }

                SkeletalMeshComponent->SetSkeletalMesh(DoorData.SkeletalMesh);
                SkeletalMeshComponent->SetVisibility(true, true);

                MapKit.NonDestructible.AnimationBlueprintClass = DoorData.AnimationBlueprint;
                MapKit.NonDestructible.SkeletalMesh = DoorData.SkeletalMesh;
            }
        }
        else
        {
            // todo: @reminder: @wtf: did I plan on allowing skeletal mesh doors to also be destructible (ComponentType)???
            MapKit.Destructible.Enable = true;
            MapKit.Destructible.Shared.ComponentType = EAscMapKitDestructibleComponentTypeEnum::StaticMesh;

            if (DoorData.DestructibleAnimationBlueprint)
                MapKit.Destructible.Shared.DestructibleClass = DoorData.DestructibleAnimationBlueprint;

            if (StaticMeshComponent)
            {
                if (DoorData.StaticMesh)
                    MapKit.Destructible.StaticMesh = DoorData.StaticMesh;

                if (DoorData.StaticMeshDestroyed)
                {
                    StaticMeshComponent->SetStaticMesh(DoorData.StaticMeshDestroyed);
                    StaticMeshComponent->SetVisibility(true, true);

                    MapKit.Destructible.StaticMeshDestroyed = DoorData.StaticMeshDestroyed;
                }

                // note: if the component mesh was not set, it means there was no StaticMeshDestroyed, so set it to StaticMesh
                if (!StaticMeshComponent->GetStaticMesh() && DoorData.StaticMesh)
                {
                    StaticMeshComponent->SetStaticMesh(DoorData.StaticMesh);
                    StaticMeshComponent->SetVisibility(true, true);
                }
            }
        }
    }
    else if (DoorType == EAscMapKitDoorTypeEnum::Custom)
    {
        // todo: if the map kit property values are set, update the corresponding components
        if (!bIsDestructible)
        {
            // todo: non-destructible
            // todo: what on MapKit to update?
        }
        else
        {
            // todo: destructible
            // todo: what on MapKit to update?
        }
    }
}

void AAscMapKitDoorActor::EditorUpdateDoorCustom()
{
    if (!GIsEditor)
        return;
    
    Modify();

    MapKit.DoorType = EAscMapKitDoorTypeEnum::Custom;

    const auto PropertyName = GET_MEMBER_NAME_CHECKED(AAscMapKitDoorActor, MapKit);
    const auto MapKitProperty = FindFProperty<FProperty>(StaticClass(), PropertyName);

    if (MapKitProperty)
    {
        FPropertyChangedEvent PropertyChangedEvent(MapKitProperty);
        PostEditChangeProperty(PropertyChangedEvent);
    }
    else
        UAscMapKitUtil::Log(FString::Printf(TEXT("Unable to find property! %s"), *PropertyName.ToString()));
}

void AAscMapKitDoorActor::EditorUpdatePlayerInteractBoundingBoxExtent(const FVector Arg)
{
    if (!GIsEditor)
        return;
    
    if (PlayerInteractBoundingBox)
    {
        PlayerInteractBoundingBox->SetBoxExtent(Arg);
        CachedPlayerInteractExtent = Arg;
    }
}

void AAscMapKitDoorActor::EditorUpdateMaterialInfo()
{
    MapKit.NonDestructible.MaterialInfo.Empty();
    MapKit.Destructible.MaterialInfo.Empty();
    MapKit.Destructible.MaterialInfoDestroyed.Empty();

    if (SkeletalMeshComponent && SkeletalMeshComponent->SkeletalMesh)
    {
        const auto Mesh = SkeletalMeshComponent->SkeletalMesh;

        for (int32 i = 0; i < Mesh->Materials.Num(); i++)
        {
            FAscMapKitPropertiesMaterialInfoStruct Info;
            Info.MaterialIndex = i;
            Info.SlotName = Mesh->Materials[i].MaterialSlotName.ToString();
            Info.Material = SkeletalMeshComponent->GetMaterial(i);

            MapKit.NonDestructible.MaterialInfo.Add(Info);
        }
    }

    if (StaticMeshComponent && StaticMeshComponent->GetStaticMesh())
    {
        for (int32 i = 0; i < StaticMeshComponent->GetNumMaterials(); ++i)
        {
            FAscMapKitPropertiesMaterialInfoStruct Info;
            Info.MaterialIndex = i;
            Info.Material = StaticMeshComponent->GetMaterial(i);

            if (const auto MeshAsset = StaticMeshComponent->GetStaticMesh())
            {
                if (MeshAsset->StaticMaterials.IsValidIndex(i))
                {
                    const auto StaticMaterial = MeshAsset->StaticMaterials[i];
                    Info.Material = StaticMaterial.MaterialInterface;
                    Info.SlotName = StaticMaterial.MaterialSlotName.ToString();
                }
            }
            
            MapKit.Destructible.MaterialInfo.Add(Info);
        }
    }

    if (MapKit.Destructible.StaticMeshDestroyed)
    {
        for (int32 i = 0; i < MapKit.Destructible.StaticMeshDestroyed->StaticMaterials.Num(); ++i)
        {
            const auto StaticMaterial = MapKit.Destructible.StaticMeshDestroyed->StaticMaterials[i];
            
            FAscMapKitPropertiesMaterialInfoStruct Info;
            Info.MaterialIndex = i;
            Info.Material = StaticMaterial.MaterialInterface;
            Info.SlotName = StaticMaterial.MaterialSlotName.ToString();
            
            MapKit.Destructible.MaterialInfo.Add(Info);
        }
    }
}
#endif