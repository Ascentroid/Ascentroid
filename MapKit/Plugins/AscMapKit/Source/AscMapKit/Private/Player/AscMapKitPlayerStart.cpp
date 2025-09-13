#include "AscMapKit/Public/Player/AscMapKitPlayerStart.h"

// UE
#include "Runtime/CoreUObject/Public/UObject/ConstructorHelpers.h"
#include "Runtime/Engine/Classes/Components/ArrowComponent.h"

AAscMapKitPlayerStart::AAscMapKitPlayerStart(const FObjectInitializer &ObjectInitializer) : Super(ObjectInitializer)
{
#if WITH_EDITORONLY_DATA
    const ConstructorHelpers::FObjectFinder<UStaticMesh> PlayerStartStaticMeshRef(TEXT("StaticMesh'/AscMapKit/Editor/Meshes/Player/Ship/HT1/SM_Player_Ship_HT1.SM_Player_Ship_HT1'"));

    StaticMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComponent"));
    StaticMeshComponent->AttachToComponent(RootComponent, FAttachmentTransformRules::KeepRelativeTransform);
    StaticMeshComponent->SetRelativeRotation(FRotator(0.f, -90.f, 0.f));
    StaticMeshComponent->SetRelativeScale3D(FVector(1.f, 1.f, 1.f));
    StaticMeshComponent->SetCollisionProfileName(TEXT("NoCollision"));
    StaticMeshComponent->SetHiddenInGame(true, true);

    if (PlayerStartStaticMeshRef.Succeeded())
        StaticMeshComponent->SetStaticMesh(PlayerStartStaticMeshRef.Object);
#endif
}

void AAscMapKitPlayerStart::OnConstruction(const FTransform &Transform)
{
    Super::OnConstruction(Transform);

#if WITH_EDITORONLY_DATA
    if (GetArrowComponent() != nullptr)
    {
        GetArrowComponent()->ArrowColor = FColor::White;
        GetArrowComponent()->ArrowSize = 10.f;
    }
#endif
}
