#include "AscMapKit/Public/Door/AscMapKitDoorActor.h"
#include "Runtime/CoreUObject/Public/UObject/ConstructorHelpers.h"

AAscMapKitDoorActor::AAscMapKitDoorActor()
{
    const ConstructorHelpers::FObjectFinder<UStaticMesh> CubeStaticMeshRef(TEXT("StaticMesh'/Engine/BasicShapes/Cube.Cube'"));
    const ConstructorHelpers::FObjectFinder<UMaterialInterface> Animated20x20mBasic001MaterialRef(TEXT("Material'/AscMapKit/Editor/Materials/Doors/M_Editor_Door_Animated_20x20m_Basic_001.M_Editor_Door_Animated_20x20m_Basic_001'"));
    const ConstructorHelpers::FObjectFinder<UMaterialInterface> Animated20x20mBasic002MaterialRef(TEXT("Material'/AscMapKit/Editor/Materials/Doors/M_Editor_Door_Animated_20x20m_Basic_002.M_Editor_Door_Animated_20x20m_Basic_002'"));
    const ConstructorHelpers::FObjectFinder<UMaterialInterface> Animated20x20mBasic003MaterialRef(TEXT("Material'/AscMapKit/Editor/Materials/Doors/M_Editor_Door_Animated_20x20m_Basic_003.M_Editor_Door_Animated_20x20m_Basic_003'"));
    const ConstructorHelpers::FObjectFinder<UMaterialInterface> Animated20x20mBasic004MaterialRef(TEXT("Material'/AscMapKit/Editor/Materials/Doors/M_Editor_Door_Animated_20x20m_Basic_004.M_Editor_Door_Animated_20x20m_Basic_004'"));
    const ConstructorHelpers::FObjectFinder<UMaterialInterface> Animated20x20mSciFiDoorsDoor1MaterialRef(TEXT("Material'/AscMapKit/Editor/Materials/Doors/M_Editor_Door_Animated_20x20m_SciFiDoors_Door_1.M_Editor_Door_Animated_20x20m_SciFiDoors_Door_1'"));
    const ConstructorHelpers::FObjectFinder<UMaterialInterface> Animated20x20mSciFiDoorsDoor2MaterialRef(TEXT("Material'/AscMapKit/Editor/Materials/Doors/M_Editor_Door_Animated_20x20m_SciFiDoors_Door_2.M_Editor_Door_Animated_20x20m_SciFiDoors_Door_2'"));
    const ConstructorHelpers::FObjectFinder<UMaterialInterface> Animated20x20mSciFiDoorsDoor4MaterialRef(TEXT("Material'/AscMapKit/Editor/Materials/Doors/M_Editor_Door_Animated_20x20m_SciFiDoors_Door_4.M_Editor_Door_Animated_20x20m_SciFiDoors_Door_4'"));
    const ConstructorHelpers::FObjectFinder<UMaterialInterface> Animated20x20mSciFiPropsDoor1MaterialRef(TEXT("Material'/AscMapKit/Editor/Materials/Doors/M_Editor_Door_Animated_20x20m_SciFiProps_Door1.M_Editor_Door_Animated_20x20m_SciFiProps_Door1'"));
    const ConstructorHelpers::FObjectFinder<UMaterialInterface> Animated40x20mBasic001MaterialRef(TEXT("Material'/AscMapKit/Editor/Materials/Doors/M_Editor_Door_Animated_40x20m_Basic_001.M_Editor_Door_Animated_40x20m_Basic_001'"));
    const ConstructorHelpers::FObjectFinder<UMaterialInterface> Animated40x20mSciFiDoorsDoor3MaterialRef(TEXT("Material'/AscMapKit/Editor/Materials/Doors/M_Editor_Door_Animated_40x20m_SciFiDoors_Door3.M_Editor_Door_Animated_40x20m_SciFiDoors_Door3'"));
    const ConstructorHelpers::FObjectFinder<UMaterialInterface> Destructible20x20mBasic001MaterialRef(TEXT("Material'/AscMapKit/Editor/Materials/Doors/M_Editor_Door_Destructible_20x20m_Basic_001.M_Editor_Door_Destructible_20x20m_Basic_001'"));
    
    EmptyRootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("EmptyRootComponent"));
    EmptyRootComponent->SetMobility(EComponentMobility::Static);

    RootComponent = EmptyRootComponent;

    StaticMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComponent"));
    StaticMeshComponent->AttachToComponent(RootComponent, FAttachmentTransformRules::KeepRelativeTransform);
    StaticMeshComponent->SetRelativeScale3D(FVector(20.f, 2.f, 20.f));
    StaticMeshComponent->SetCollisionProfileName(TEXT("NoCollision"));

    if (CubeStaticMeshRef.Succeeded())
    {
        CubeStaticMesh = CubeStaticMeshRef.Object;
        StaticMeshComponent->SetStaticMesh(CubeStaticMesh);
    }

    if (Animated20x20mBasic001MaterialRef.Succeeded())
        Animated20x20mBasic001Material = Animated20x20mBasic001MaterialRef.Object;

    if (Animated20x20mBasic002MaterialRef.Succeeded())
        Animated20x20mBasic002Material = Animated20x20mBasic002MaterialRef.Object;

    if (Animated20x20mBasic003MaterialRef.Succeeded())
        Animated20x20mBasic003Material = Animated20x20mBasic003MaterialRef.Object;

    if (Animated20x20mBasic004MaterialRef.Succeeded())
        Animated20x20mBasic004Material = Animated20x20mBasic004MaterialRef.Object;

    if (Animated20x20mSciFiDoorsDoor1MaterialRef.Succeeded())
        Animated20x20mSciFiDoorsDoor1Material = Animated20x20mSciFiDoorsDoor1MaterialRef.Object;

    if (Animated20x20mSciFiDoorsDoor2MaterialRef.Succeeded())
        Animated20x20mSciFiDoorsDoor2Material = Animated20x20mSciFiDoorsDoor2MaterialRef.Object;

    if (Animated20x20mSciFiDoorsDoor4MaterialRef.Succeeded())
        Animated20x20mSciFiDoorsDoor4Material = Animated20x20mSciFiDoorsDoor4MaterialRef.Object;

    if (Animated20x20mSciFiPropsDoor1MaterialRef.Succeeded())
        Animated20x20mSciFiPropsDoor1Material = Animated20x20mSciFiPropsDoor1MaterialRef.Object;

    if (Animated40x20mBasic001MaterialRef.Succeeded())
        Animated40x20mBasic001Material = Animated40x20mBasic001MaterialRef.Object;
    
    if (Animated40x20mSciFiDoorsDoor3MaterialRef.Succeeded())
        Animated40x20mSciFiDoorsDoor3Material = Animated40x20mSciFiDoorsDoor3MaterialRef.Object;

    if (Destructible20x20mBasic001MaterialRef.Succeeded())
        Destructible20x20mBasic001Material = Destructible20x20mBasic001MaterialRef.Object;
    
    MapKit.Custom.NonDestructible.PlayerInteractBoundingBox = CreateDefaultSubobject<UAscMapKitDoorPlayerInteractBoundingBox>(TEXT("PlayerInteractBoundingBox"));
    MapKit.Custom.NonDestructible.PlayerInteractBoundingBox->AttachToComponent(RootComponent, FAttachmentTransformRules::KeepRelativeTransform);
    MapKit.Custom.NonDestructible.PlayerInteractBoundingBox->SetBoxExtent(FVector(1200.f, 1200.f, 1200.f));
    
    // todo: @reminder: keep defaults in sync with game actor

    MapKit.DisplayName = TEXT("Door");
    MapKit.Id = TEXT("001");
	
    MapKit.Status.CloseTimeoutSeconds = 4.f;

    MapKit.Lock.HasCode = true;
    MapKit.Lock.RandomizeCode = true;
    MapKit.Lock.OpenLockedDoorDelaySeconds = 0.4f;

    MapKit.Destructible.MaxShields = 300.f;
    MapKit.Destructible.LifetimeSeconds = 20.f;

    MapKit.Destructible.Shared.PlayerDamage.Enable = true;
    MapKit.Destructible.Shared.PlayerDamage.Amount = 3.f;
    MapKit.Destructible.Shared.PlayerDamage.DelaySeconds = 1.f;
    
    MapKit.Destructible.Shared.EnemyDamage.Enable = true;
    MapKit.Destructible.Shared.EnemyDamage.Amount = 3.f;
    MapKit.Destructible.Shared.EnemyDamage.DelaySeconds = 1.f;

    MapKit.Custom.NonDestructible.DisableEntireCollisionOnOpenDelaySeconds = 0.3f;
    MapKit.Custom.NonDestructible.DisableDefaultToggleCollisionBoneNamesDelaySeconds = 0.3f;

    MapKit.Custom.NonDestructible.PlayerInteractBoundingBoxExtent = FVector(1200.f, 1200.f, 1200.f);

#if !(UE_BUILD_SHIPPING)
    StaticMeshComponent->SetHiddenInGame(false);
    MapKit.Custom.NonDestructible.PlayerInteractBoundingBox->SetHiddenInGame(false);
#endif
}

void AAscMapKitDoorActor::OnConstruction(const FTransform &Transform)
{
    Super::OnConstruction(Transform);

#if WITH_EDITOR
    EditorUpdateDoorType(MapKit.DoorType);
    EditorUpdatePlayerInteractBoundingBoxExtent(MapKit.Custom.NonDestructible.PlayerInteractBoundingBoxExtent);
#endif
}

void AAscMapKitDoorActor::BeginPlay()
{
    Super::BeginPlay();
}

#if WITH_EDITOR
void AAscMapKitDoorActor::PostEditChangeProperty(struct FPropertyChangedEvent &PropertyChangedEvent)
{
    Super::PostEditChangeProperty(PropertyChangedEvent);

    if (PropertyChangedEvent.GetPropertyName() == TEXT("DoorType"))
        EditorUpdateDoorType(MapKit.DoorType);
    else if (PropertyChangedEvent.GetPropertyName() == TEXT("PlayerInteractBoundingBoxExtent"))
        EditorUpdatePlayerInteractBoundingBoxExtent(MapKit.Custom.NonDestructible.PlayerInteractBoundingBoxExtent);
}

void AAscMapKitDoorActor::EditorUpdateDoorType(const EAscMapKitDoorTypeEnum DoorType)
{
    UMaterialInterface *UseMaterial = nullptr;
    
    auto UseShape = FVector(20.f, 2.f, 20.f);
    
    // todo: @reminder: update this as new doors are created
    switch (DoorType)
    {
        case EAscMapKitDoorTypeEnum::Animated20x20mBasic001:
            UseMaterial = Animated20x20mBasic001Material;
            break;
        case EAscMapKitDoorTypeEnum::Animated20x20mBasic002:
            UseMaterial = Animated20x20mBasic002Material;
            break;
        case EAscMapKitDoorTypeEnum::Animated20x20mBasic003:
            UseMaterial = Animated20x20mBasic003Material;
            break;
        case EAscMapKitDoorTypeEnum::Animated20x20mBasic004:
            UseMaterial = Animated20x20mBasic004Material;
            break;
        case EAscMapKitDoorTypeEnum::Animated20x20mSciFiDoorsDoor1:
            UseMaterial = Animated20x20mSciFiDoorsDoor1Material;
            break;
        case EAscMapKitDoorTypeEnum::Animated20x20mSciFiDoorsDoor2:
            UseMaterial = Animated20x20mSciFiDoorsDoor2Material;
            break;
        case EAscMapKitDoorTypeEnum::Animated20x20mSciFiDoorsDoor4:
            UseMaterial = Animated20x20mSciFiDoorsDoor4Material;
            break;
        case EAscMapKitDoorTypeEnum::Animated20x20mSciFiPropsDoor1:
            UseMaterial = Animated20x20mSciFiPropsDoor1Material;
            break;
        case EAscMapKitDoorTypeEnum::Animated40x20mBasic001:
            UseMaterial = Animated40x20mBasic001Material;
            UseShape = FVector(40.f, 2.f, 20.f);
            break;
        case EAscMapKitDoorTypeEnum::Animated40x20mSciFiDoorsDoor3:
            UseMaterial = Animated40x20mSciFiDoorsDoor3Material;
            UseShape = FVector(40.f, 2.f, 20.f);
            break;
        case EAscMapKitDoorTypeEnum::Destructible20x20mBasic001:
            UseMaterial = Destructible20x20mBasic001Material;
            break;
    }

    if (DoorType == EAscMapKitDoorTypeEnum::Custom && MapKit.Custom.StaticMeshPreview != nullptr)
    {
        StaticMeshComponent->SetStaticMesh(MapKit.Custom.StaticMeshPreview);
        StaticMeshComponent->SetRelativeTransform(MapKit.Custom.StaticMeshPreviewRelativeTransform);

        if (MapKit.Custom.StaticMeshPreviewMaterial != nullptr)
            StaticMeshComponent->SetMaterial(0, MapKit.Custom.StaticMeshPreviewMaterial);
    }
    else
    {
        StaticMeshComponent->SetStaticMesh(CubeStaticMesh);
        StaticMeshComponent->SetMaterial(0, UseMaterial);
        StaticMeshComponent->SetRelativeScale3D(UseShape);
    }
}

void AAscMapKitDoorActor::EditorUpdatePlayerInteractBoundingBoxExtent(const FVector Arg)
{
    MapKit.Custom.NonDestructible.PlayerInteractBoundingBox->SetBoxExtent(Arg);
}
#endif