#include "AscMapKit/Public/Powerup/AscMapKitPowerupActor.h"

AAscMapKitPowerupActor::AAscMapKitPowerupActor()
{
    EmptyRootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("EmptyRootComponent"));

    RootComponent = EmptyRootComponent;

    BillboardComponent = CreateDefaultSubobject<UAscMapKitPowerupBillboardComponent>(TEXT("BillboardComponent"));
    BillboardComponent->AttachToComponent(RootComponent, FAttachmentTransformRules::KeepRelativeTransform);
    BillboardComponent->SetSprite(nullptr);

    // todo: @reminder: keep defaults in sync with game actor
    // todo: map kit defaults go here

#if !(UE_BUILD_SHIPPING)
    BillboardComponent->SetHiddenInGame(false);
#endif

#if WITH_EDITORONLY_DATA
    BillboardComponent->SetEditorScale(8.f);
#endif
}

void AAscMapKitPowerupActor::OnConstruction(const FTransform &Transform)
{
    Super::OnConstruction(Transform);

#if WITH_EDITOR
    if (BillboardComponent != nullptr)
        BillboardComponent->EditorUpdatePowerupType(MapKit.PowerupType);
#endif
}

void AAscMapKitPowerupActor::BeginPlay()
{
    Super::BeginPlay();

#if !(UE_BUILD_SHIPPING)
    if (BillboardComponent && BillboardComponent->CurrentTexture != nullptr)
        BillboardComponent->SetSprite(BillboardComponent->CurrentTexture);
#endif
}

#if WITH_EDITOR
void AAscMapKitPowerupActor::PostEditChangeProperty(struct FPropertyChangedEvent &PropertyChangedEvent)
{
    Super::PostEditChangeProperty(PropertyChangedEvent);

    if (PropertyChangedEvent.GetPropertyName() == TEXT("PowerupType") && BillboardComponent != nullptr)
    {
        BillboardComponent->EditorUpdatePowerupType(MapKit.PowerupType);
    }
}
#endif