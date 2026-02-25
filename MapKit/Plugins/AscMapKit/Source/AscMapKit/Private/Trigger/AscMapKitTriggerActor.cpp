#include "AscMapKit/Public/Trigger/AscMapKitTriggerActor.h"

// UE
#include "Runtime/CoreUObject/Public/UObject/ConstructorHelpers.h"

// Ascentroid
#include "AscMapKit/Public/Core/Global/AscMapKitGlobals.h"

// Ascentroid
#include "AscMapKit/Public/Core/Util/AscMapKitUtil.h"

AAscMapKitTriggerActor::AAscMapKitTriggerActor()
{
    EmptyRootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("EmptyRootComponent"));
    EmptyRootComponent->SetMobility(EComponentMobility::Static);

    RootComponent = EmptyRootComponent;
    
    InvisibleTriggerCollisionBox = CreateDefaultSubobject<UBoxComponent>(TEXT("Box"));
    InvisibleTriggerCollisionBox->AttachToComponent(RootComponent, FAttachmentTransformRules::KeepRelativeTransform);
    InvisibleTriggerCollisionBox->SetRelativeLocation(FVector(0.f, 0.f, 0.f));
    InvisibleTriggerCollisionBox->SetBoxExtent(FVector(1000.f, 1000.f, 1000.f));
    InvisibleTriggerCollisionBox->SetGenerateOverlapEvents(true);
    InvisibleTriggerCollisionBox->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
    InvisibleTriggerCollisionBox->SetCollisionProfileName(TEXT("TriggerInvisible")); // todo: need to create collision profile
    InvisibleTriggerCollisionBox->SetWalkableSlopeOverride(FWalkableSlopeOverride(WalkableSlope_Unwalkable, 0.f));
    InvisibleTriggerCollisionBox->CanCharacterStepUpOn = ECB_No;
    InvisibleTriggerCollisionBox->SetIsReplicated(false);

    ActiveStaticMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ActiveStaticMeshComponent"));
    ActiveStaticMeshComponent->AttachToComponent(RootComponent, FAttachmentTransformRules::KeepRelativeTransform);
    ActiveStaticMeshComponent->SetRelativeScale3D(FVector(1.f, 1.f, 1.f));
    ActiveStaticMeshComponent->SetSimulatePhysics(false);
    ActiveStaticMeshComponent->SetEnableGravity(false);
    ActiveStaticMeshComponent->CastShadow = false;
    ActiveStaticMeshComponent->bCastDynamicShadow = false;
    ActiveStaticMeshComponent->SetNotifyRigidBodyCollision(true);
    ActiveStaticMeshComponent->SetGenerateOverlapEvents(true);
    ActiveStaticMeshComponent->SetWalkableSlopeOverride(FWalkableSlopeOverride(WalkableSlope_Unwalkable, 0.f));
    ActiveStaticMeshComponent->CanCharacterStepUpOn = ECB_No;
    ActiveStaticMeshComponent->SetCollisionEnabled(ECollisionEnabled::NoCollision);
    ActiveStaticMeshComponent->SetCollisionProfileName(TEXT("NoCollision"));

    InactiveStaticMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("InactiveStaticMeshComponent"));
    InactiveStaticMeshComponent->AttachToComponent(RootComponent, FAttachmentTransformRules::KeepRelativeTransform);
    InactiveStaticMeshComponent->SetRelativeScale3D(FVector(1.f, 1.f, 1.f));
    InactiveStaticMeshComponent->CastShadow = false;
    InactiveStaticMeshComponent->bCastDynamicShadow = false;
    InactiveStaticMeshComponent->SetNotifyRigidBodyCollision(true);
    InactiveStaticMeshComponent->SetGenerateOverlapEvents(true);
    InactiveStaticMeshComponent->SetWalkableSlopeOverride(FWalkableSlopeOverride(WalkableSlope_Unwalkable, 0.f));
    InactiveStaticMeshComponent->CanCharacterStepUpOn = ECB_No;
    InactiveStaticMeshComponent->SetCollisionEnabled(ECollisionEnabled::NoCollision);
    InactiveStaticMeshComponent->SetCollisionProfileName(TEXT("NoCollision"));
    InactiveStaticMeshComponent->SetVisibility(false, true);
    
    DefaultGameRuntimeBoundingBoxInternal = CreateDefaultSubobject<UAscMapKitTriggerDefaultGameRuntimeBoundingBox>(TEXT("DefaultGameRuntimeBoundingBox"));
    DefaultGameRuntimeBoundingBoxInternal->AttachToComponent(RootComponent, FAttachmentTransformRules::KeepRelativeTransform);
    DefaultGameRuntimeBoundingBoxInternal->SetBoxExtent(FVector::ZeroVector);
    
    MapKit = GetMapKitDefaults(DefaultGameRuntimeBoundingBoxInternal);

#if !UE_BUILD_SHIPPING
    ActiveStaticMeshComponent->SetHiddenInGame(false);
    DefaultGameRuntimeBoundingBoxInternal->SetHiddenInGame(false);
#endif
}

FAscMapKitTriggerPropertiesStruct AAscMapKitTriggerActor::GetMapKitDefaults(UAscMapKitTriggerDefaultGameRuntimeBoundingBox *InDefaultGameRuntimeBoundingBox)
{
    auto Result = FAscMapKitTriggerPropertiesStruct();

    Result.DefaultGameRuntimeBoundingBox = InDefaultGameRuntimeBoundingBox;

    Result.DisplayName = TEXT("Trigger");
    Result.Id = TEXT("001");

    Result.Invisible.CollisionType = EAscMapKitTriggerPropertiesInvisibleCollisionTypeEnum::Box;

    Result.Reusable.ShowHudMessageWhenAllRulesComplete = true;
    
    Result.OnExecute.ExecuteMaxCount = 1;

    Result.OnShowActors.FadeDelaySeconds = 0.1f;
    Result.OnShowActors.DelaySeconds = 0.5f;

    Result.OnHideActors.FadeDelaySeconds = 0.1f;
    Result.OnHideActors.DelaySeconds = 0.5f;

    Result.OnLockDoor.CloseDoorWhenLocked = true;

    Result.OnExecute.ShowHudMessage = true;
    Result.OnInactive.ShowHudMessage = true;
    Result.OnForcefieldChange.ShowDisableHudMessage = true;
    Result.OnForcefieldChange.ShowEnableHudMessage = true;
    Result.OnForcefieldChange.ShowDisablePulseHudMessage = true;
    Result.OnForcefieldChange.ShowEnablePulseHudMessage = true;
    Result.OnUnlockDoor.ShowHudMessage = true;
    Result.OnLockDoor.ShowHudMessage = true;
    Result.OnOpenDoor.ShowHudMessage = true;
    Result.OnCloseDoor.ShowHudMessage = true;
    Result.OnDestroyDoor.ShowHudMessage = true;
    Result.MakeDoorDestructible.ShowHudMessage = true;
    Result.MakeDoorIndestructible.ShowHudMessage = true;
    Result.ResetReusableTriggers.ShowHudMessage = true;
    
    return Result;
}

void AAscMapKitTriggerActor::OnConstruction(const FTransform &Transform)
{
    Super::OnConstruction(Transform);

#if WITH_EDITOR
    if (MapKit.DefaultGameRuntimeBoundingBox != nullptr)
        MapKit.DefaultGameRuntimeBoundingBox->EditorUpdateTriggerType(MapKit.TriggerType);
    
    EditorUpdateTriggerType(MapKit.TriggerType);
#endif
}

void AAscMapKitTriggerActor::BeginPlay()
{
    Super::BeginPlay();
}

#if WITH_EDITOR
void AAscMapKitTriggerActor::PostEditChangeProperty(struct FPropertyChangedEvent &PropertyChangedEvent)
{
    Super::PostEditChangeProperty(PropertyChangedEvent);

    if (PropertyChangedEvent.GetPropertyName() == TEXT("TriggerType"))
    {
        if (MapKit.DefaultGameRuntimeBoundingBox != nullptr)
            MapKit.DefaultGameRuntimeBoundingBox->EditorUpdateTriggerType(MapKit.TriggerType);
        
        EditorUpdateTriggerType(MapKit.TriggerType);
    }
}

void AAscMapKitTriggerActor::EditorUpdateTriggerType(const EAscMapKitTriggerTypeEnum TriggerType)
{
    if (!TriggerDataAsset)
        TriggerDataAsset = UAscMapKitGlobals::GetTriggerDataAsset();
    
    if (TriggerDataAsset)
    {
        if (ActiveStaticMeshComponent)
            ActiveStaticMeshComponent->SetStaticMesh(nullptr);
        
        if (InactiveStaticMeshComponent)
            InactiveStaticMeshComponent->SetStaticMesh(nullptr);
        
        if (TriggerType != EAscMapKitTriggerTypeEnum::None && TriggerType != EAscMapKitTriggerTypeEnum::Invisible)
        {
            const auto TriggerData = TriggerDataAsset->Get(TriggerType);
            
            if (ActiveStaticMeshComponent && TriggerData.ActiveStaticMesh)
                ActiveStaticMeshComponent->SetStaticMesh(TriggerData.ActiveStaticMesh);
    
            if (InactiveStaticMeshComponent && TriggerData.InactiveStaticMesh)
                InactiveStaticMeshComponent->SetStaticMesh(TriggerData.InactiveStaticMesh);
        }
    }
    
    if (ActiveStaticMeshComponent)
    {
        ActiveStaticMeshComponent->Modify();
        ActiveStaticMeshComponent->PostEditChange();
    }
    
    if (InactiveStaticMeshComponent)
    {
        InactiveStaticMeshComponent->Modify();
        InactiveStaticMeshComponent->PostEditChange();
    }

    Modify();
    PostEditChange();

    MarkPackageDirty();
}
#endif

void AAscMapKitTriggerActor::OnDeactivate_Implementation()
{
    UAscMapKitUtil::Log(FString::Printf(TEXT("OnDeactivate_Implementation(): %s"), *GetHumanReadableName()));
}