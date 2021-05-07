#include "AscMapKit/Public/Fan/AscMapKitFanActor.h"
#include "Runtime/CoreUObject/Public/UObject/ConstructorHelpers.h"

AAscMapKitFanActor::AAscMapKitFanActor()
{
    const ConstructorHelpers::FObjectFinder<UStaticMesh> Animated20x20mBasic001StaticMeshRef(TEXT("StaticMesh'/AscMapKit/Editor/Meshes/Fans/SM_Fan_Animated_20x20m_Basic_001.SM_Fan_Animated_20x20m_Basic_001'"));
    
    EmptyRootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("EmptyRootComponent"));
    EmptyRootComponent->SetMobility(EComponentMobility::Static);

    RootComponent = EmptyRootComponent;

    ArrowComponent = CreateDefaultSubobject<UArrowComponent>(TEXT("ArrowComponent"));
    ArrowComponent->AttachToComponent(RootComponent, FAttachmentTransformRules::KeepRelativeTransform);
    ArrowComponent->ArrowColor = FColor::White;
    ArrowComponent->ArrowSize = 10.f;
    
    StaticMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComponent"));
    StaticMeshComponent->AttachToComponent(RootComponent, FAttachmentTransformRules::KeepRelativeTransform);
    StaticMeshComponent->SetCollisionProfileName(TEXT("NoCollision"));

    if (Animated20x20mBasic001StaticMeshRef.Succeeded())
    {
        Animated20x20mBasic001StaticMesh = Animated20x20mBasic001StaticMeshRef.Object;
        StaticMeshComponent->SetStaticMesh(Animated20x20mBasic001StaticMesh);
    }

    // todo: @reminder: keep defaults in sync with game actor

    MapKit.DisplayName = TEXT("Fan");
    MapKit.AnimationSpeed = 1.f;

#if !(UE_BUILD_SHIPPING)
    StaticMeshComponent->SetHiddenInGame(false);
#endif
}

void AAscMapKitFanActor::OnConstruction(const FTransform &Transform)
{
    Super::OnConstruction(Transform);

#if !(UE_BUILD_SHIPPING)
    ArrowComponent->SetRelativeRotation(FRotator(0.f, 90.f, 0.f));
#endif

#if WITH_EDITOR
    EditorUpdateFanType(MapKit.FanType);
#endif
}

void AAscMapKitFanActor::BeginPlay()
{
    Super::BeginPlay();
}

#if WITH_EDITOR
void AAscMapKitFanActor::PostEditChangeProperty(struct FPropertyChangedEvent &PropertyChangedEvent)
{
    Super::PostEditChangeProperty(PropertyChangedEvent);

    if (PropertyChangedEvent.GetPropertyName() == TEXT("FanType"))
        EditorUpdateFanType(MapKit.FanType);
}

void AAscMapKitFanActor::EditorUpdateFanType(const EAscMapKitFanTypeEnum FanType)
{
    UStaticMesh *UseStaticMesh = nullptr;

    // todo: @reminder: update this as new fans are created
    switch (FanType)
    {
        case EAscMapKitFanTypeEnum::Animated20x20mBasic001:
            UseStaticMesh = Animated20x20mBasic001StaticMesh;
            break;
    }

    if (FanType == EAscMapKitFanTypeEnum::Custom && MapKit.Custom.StaticMeshPreview != nullptr)
    {
        StaticMeshComponent->SetStaticMesh(MapKit.Custom.StaticMeshPreview);
        StaticMeshComponent->SetRelativeTransform(MapKit.Custom.StaticMeshPreviewRelativeTransform);
    
        if (MapKit.Custom.StaticMeshPreviewMaterial != nullptr)
            StaticMeshComponent->SetMaterial(0, MapKit.Custom.StaticMeshPreviewMaterial);
    }
    else
    {
        StaticMeshComponent->SetStaticMesh(UseStaticMesh);
        StaticMeshComponent->SetMaterial(0, nullptr);
    }
}
#endif