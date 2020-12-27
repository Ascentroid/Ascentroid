#include "AscMapKit/Public/Trigger/AscMapKitTriggerActor.h"
#include "Runtime/CoreUObject/Public/UObject/ConstructorHelpers.h"

AAscMapKitTriggerActor::AAscMapKitTriggerActor()
{
    const ConstructorHelpers::FObjectFinder<UStaticMesh> CubeStaticMeshRef(TEXT("StaticMesh'/Engine/BasicShapes/Cube.Cube'"));

    EmptyRootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("EmptyRootComponent"));

    RootComponent = EmptyRootComponent;

    ArrowComponent = CreateDefaultSubobject<UArrowComponent>(TEXT("ArrowComponent"));
    ArrowComponent->AttachToComponent(RootComponent, FAttachmentTransformRules::KeepRelativeTransform);
    ArrowComponent->ArrowColor = FColor::White;
    ArrowComponent->ArrowSize = 10.f;

    BillboardComponent = CreateDefaultSubobject<UAscMapKitTriggerBillboardComponent>(TEXT("BillboardComponent"));
    BillboardComponent->AttachToComponent(RootComponent, FAttachmentTransformRules::KeepRelativeTransform);
    BillboardComponent->SetSprite(nullptr);
    
    StaticMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComponent"));
    StaticMeshComponent->AttachToComponent(RootComponent, FAttachmentTransformRules::KeepRelativeTransform);
    StaticMeshComponent->SetRelativeScale3D(FVector(1.f, 1.f, 1.f));
    StaticMeshComponent->SetCollisionProfileName(TEXT("NoCollision"));

    if (CubeStaticMeshRef.Succeeded())
        CubeStaticMesh = CubeStaticMeshRef.Object;

    InvisibleTriggerCollisionBox = CreateDefaultSubobject<UBoxComponent>(TEXT("Box"));
    InvisibleTriggerCollisionBox->AttachToComponent(RootComponent, FAttachmentTransformRules::KeepRelativeTransform);
    InvisibleTriggerCollisionBox->SetRelativeLocation(FVector(0.f, 0.f, 0.f));
    InvisibleTriggerCollisionBox->SetBoxExtent(FVector(1000.f, 1000.f, 1000.f));
    InvisibleTriggerCollisionBox->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
    InvisibleTriggerCollisionBox->SetCollisionProfileName(TEXT("TriggerInvisible")); // todo: need to create collision profile
    InvisibleTriggerCollisionBox->SetWalkableSlopeOverride(FWalkableSlopeOverride(WalkableSlope_Unwalkable, 0.f));
    InvisibleTriggerCollisionBox->CanCharacterStepUpOn = ECB_No;
    InvisibleTriggerCollisionBox->SetIsReplicated(false);

    InvisibleTriggerCollisionStaticMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMesh"));
    InvisibleTriggerCollisionStaticMesh->AttachToComponent(RootComponent, FAttachmentTransformRules::KeepRelativeTransform);
    InvisibleTriggerCollisionStaticMesh->CastShadow = false;
    InvisibleTriggerCollisionStaticMesh->bCastStaticShadow = false;
    InvisibleTriggerCollisionStaticMesh->bCastDynamicShadow = false;
    InvisibleTriggerCollisionStaticMesh->SetEnableGravity(false);
    InvisibleTriggerCollisionStaticMesh->SetNotifyRigidBodyCollision(true);
    InvisibleTriggerCollisionStaticMesh->SetGenerateOverlapEvents(true);
    InvisibleTriggerCollisionStaticMesh->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
    InvisibleTriggerCollisionStaticMesh->SetCollisionProfileName(TEXT("TriggerInvisible")); // todo: need to create collision profile
    InvisibleTriggerCollisionStaticMesh->SetWalkableSlopeOverride(FWalkableSlopeOverride(WalkableSlope_Unwalkable, 0.f));
    InvisibleTriggerCollisionStaticMesh->CanCharacterStepUpOn = ECB_No;
    InvisibleTriggerCollisionStaticMesh->SetIsReplicated(false);
    
    MapKit.DefaultGameRuntimeBoundingBox = CreateDefaultSubobject<UAscMapKitTriggerDefaultGameRuntimeBoundingBox>(TEXT("DefaultGameRuntimeBoundingBox"));
    MapKit.DefaultGameRuntimeBoundingBox->AttachToComponent(RootComponent, FAttachmentTransformRules::KeepRelativeTransform);
    MapKit.DefaultGameRuntimeBoundingBox->SetBoxExtent(FVector::ZeroVector);
    
    // todo: @reminder: keep defaults in sync with game actor

    MapKit.DisplayName = TEXT("Trigger");
    MapKit.Id = TEXT("001");

    MapKit.Invisible.CollisionType = EAscMapKitTriggerPropertiesInvisibleCollisionTypeEnum::Box;

    MapKit.Reusable.ShowHudMessageWhenAllRulesComplete = true;
    
    MapKit.OnExecute.ExecuteMaxCount = 1;
    MapKit.OnLockDoor.CloseDoorWhenLocked = true;

    MapKit.OnExecute.ShowHudMessage = true;
    MapKit.OnInactive.ShowHudMessage = true;
    MapKit.OnForcefieldChange.ShowDisableHudMessage = true;
    MapKit.OnForcefieldChange.ShowEnableHudMessage = true;
    MapKit.OnForcefieldChange.ShowDisablePulseHudMessage = true;
    MapKit.OnForcefieldChange.ShowEnablePulseHudMessage = true;
    MapKit.OnUnlockDoor.ShowHudMessage = true;
    MapKit.OnLockDoor.ShowHudMessage = true;
    MapKit.OnOpenDoor.ShowHudMessage = true;
    MapKit.OnCloseDoor.ShowHudMessage = true;
    MapKit.OnDestroyDoor.ShowHudMessage = true;
    MapKit.MakeDoorDestructible.ShowHudMessage = true;
    MapKit.MakeDoorIndestructible.ShowHudMessage = true;
    MapKit.ResetReusableTriggers.ShowHudMessage = true;

#if !(UE_BUILD_SHIPPING)
    ArrowComponent->SetHiddenInGame(false);
    BillboardComponent->SetHiddenInGame(false);
    StaticMeshComponent->SetHiddenInGame(false);
    MapKit.DefaultGameRuntimeBoundingBox->SetHiddenInGame(false);
#endif

#if WITH_EDITORONLY_DATA
    BillboardComponent->SetEditorScale(8.f);
#endif
}

void AAscMapKitTriggerActor::OnConstruction(const FTransform &Transform)
{
    Super::OnConstruction(Transform);

#if WITH_EDITOR
    if (BillboardComponent != nullptr)
        BillboardComponent->EditorUpdateTriggerType(MapKit.TriggerType);

    if (MapKit.DefaultGameRuntimeBoundingBox != nullptr)
        MapKit.DefaultGameRuntimeBoundingBox->EditorUpdateTriggerType(MapKit.TriggerType);
    
    EditorUpdateTriggerType(MapKit.TriggerType);
#endif

#if !(UE_BUILD_SHIPPING)
    ArrowComponent->SetRelativeRotation(FRotator(0.f, 180.f, 0.f)); // todo: confirm direction
#endif
}

void AAscMapKitTriggerActor::BeginPlay()
{
    Super::BeginPlay();

#if !(UE_BUILD_SHIPPING)
    if (BillboardComponent && BillboardComponent->CurrentTexture != nullptr)
        BillboardComponent->SetSprite(BillboardComponent->CurrentTexture);
#endif
}

#if WITH_EDITOR
void AAscMapKitTriggerActor::PostEditChangeProperty(struct FPropertyChangedEvent &PropertyChangedEvent)
{
    Super::PostEditChangeProperty(PropertyChangedEvent);

    if (PropertyChangedEvent.GetPropertyName() == TEXT("TriggerType"))
    {
        if (BillboardComponent != nullptr)
            BillboardComponent->EditorUpdateTriggerType(MapKit.TriggerType);

        if (MapKit.DefaultGameRuntimeBoundingBox != nullptr)
            MapKit.DefaultGameRuntimeBoundingBox->EditorUpdateTriggerType(MapKit.TriggerType);
        
        EditorUpdateTriggerType(MapKit.TriggerType);
    }
}

void AAscMapKitTriggerActor::EditorUpdateTriggerType(const EAscMapKitTriggerTypeEnum TriggerType)
{
    UMaterialInterface *UseMaterial = nullptr;

    if (TriggerType == EAscMapKitTriggerTypeEnum::Custom && MapKit.Custom.StaticMeshPreview != nullptr)
    {
        StaticMeshComponent->SetStaticMesh(MapKit.Custom.StaticMeshPreview);
        StaticMeshComponent->SetRelativeTransform(MapKit.Custom.StaticMeshPreviewRelativeTransform);

        if (MapKit.Custom.StaticMeshPreviewMaterial != nullptr)
            StaticMeshComponent->SetMaterial(0, MapKit.Custom.StaticMeshPreviewMaterial);
    }
    // else if (TriggerType == EAscMapKitTriggerTypeEnum::Invisible)
    // {
    //     // todo: anything to do?
    // }
    else
    {
        StaticMeshComponent->SetStaticMesh(nullptr);
        StaticMeshComponent->SetMaterial(0, UseMaterial);
    }
}
#endif