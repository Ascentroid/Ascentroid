#include "AscMapKit/Public/Powerup/AscMapKitPowerupActor.h"

AAscMapKitPowerupActor::AAscMapKitPowerupActor()
{
    EmptyRootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("EmptyRootComponent"));
    EmptyRootComponent->SetMobility(EComponentMobility::Movable);

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
        BillboardComponent->EditorUpdatePowerupType(MapKit);
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

    if (BillboardComponent != nullptr)
    {
        if (PropertyChangedEvent.GetPropertyName() == TEXT("PowerupType") ||
            PropertyChangedEvent.GetPropertyName() == TEXT("UseCustomEditorSprite") ||
            PropertyChangedEvent.GetPropertyName() == TEXT("CustomEditorSprite"))
        {
            BillboardComponent->EditorUpdatePowerupType(MapKit);
        }
    }
}
#endif