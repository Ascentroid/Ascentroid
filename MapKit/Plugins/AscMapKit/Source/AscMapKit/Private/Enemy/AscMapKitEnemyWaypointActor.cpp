#include "AscMapKit/Public/Enemy/AscMapKitEnemyWaypointActor.h"

AAscMapKitEnemyWaypointActor::AAscMapKitEnemyWaypointActor()
{
    const ConstructorHelpers::FObjectFinder<UTexture2D> BillboardTextureRef(TEXT("Texture2D'/AscMapKit/Editor/Sprites/Enemy/T_Editor_Sprites_Enemy_Waypoint.T_Editor_Sprites_Enemy_Waypoint'"));

    if (BillboardTextureRef.Succeeded())
        BillboardTexture = BillboardTextureRef.Object;

    EmptyRootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("EmptyRootComponent"));
    EmptyRootComponent->SetMobility(EComponentMobility::Movable);

    RootComponent = EmptyRootComponent;

    BillboardComponent = CreateDefaultSubobject<UAscMapKitEnemyBillboardComponent>(TEXT("BillboardComponent"));
    BillboardComponent->AttachToComponent(RootComponent, FAttachmentTransformRules::KeepRelativeTransform);
    BillboardComponent->SetSprite(BillboardTexture);
    BillboardComponent->SetHiddenInGame(true);

    // todo: @reminder: keep defaults in sync with game actor

#if WITH_EDITORONLY_DATA
    BillboardComponent->SetEditorScale(16.f);
#endif
}

void AAscMapKitEnemyWaypointActor::BeginPlay()
{
    Super::BeginPlay();

#if !UE_BUILD_SHIPPING
    if (BillboardComponent && BillboardComponent->CurrentTexture != nullptr)
        BillboardComponent->SetSprite(BillboardComponent->CurrentTexture);
#endif
}

#if WITH_EDITOR
void AAscMapKitEnemyWaypointActor::PostEditChangeProperty(struct FPropertyChangedEvent &PropertyChangedEvent)
{
    Super::PostEditChangeProperty(PropertyChangedEvent);

    if (PropertyChangedEvent.GetPropertyName() == TEXT("PropertyName") && BillboardComponent != nullptr)
    {
    }
}
#endif