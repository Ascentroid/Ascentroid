#include "AscMapKit/Public/Navmap/AscMapKitNavmapActor.h"

AAscMapKitNavmapActor::AAscMapKitNavmapActor()
{
    EmptyRootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("EmptyRootComponent"));

    RootComponent = EmptyRootComponent;

    Box = CreateDefaultSubobject<UBoxComponent>(TEXT("Box"));
    Box->AttachToComponent(RootComponent, FAttachmentTransformRules::KeepRelativeTransform);
    Box->SetRelativeLocation(FVector(0.f, 0.f, 0.f));
    Box->SetBoxExtent(FVector(1000.f, 1000.f, 1000.f));
    Box->SetCollisionEnabled(ECollisionEnabled::NoCollision);
    Box->SetCollisionProfileName(TEXT("NoCollision"));
    Box->SetWalkableSlopeOverride(FWalkableSlopeOverride(WalkableSlope_Unwalkable, 0.f));
    Box->CanCharacterStepUpOn = ECB_No;
    Box->SetIsReplicated(false);
}