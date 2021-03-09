#pragma once

// UE4
#include "Runtime/Engine/Classes/Components/StaticMeshComponent.h"

// Generated
#include "AscMapKitDecorActor.generated.h"

UCLASS(HideCategories=("Activation", "Actor", "Asset User Data", "Collision", "Cooking", "HLOD", "Input", "LOD", "Lighting", "Mobile", "Physics", "Rendering", "Replication", "Sprite", "Tags", "Virtual Texture"))
class ASCMAPKIT_API AAscMapKitDecorActor : public AActor
{
    GENERATED_BODY()

public:
    AAscMapKitDecorActor();

    UPROPERTY()
    USceneComponent *EmptyRootComponent;

    // Use this property to set the static mesh for this actor.
    // * This actor is ignored/invisible for ship autoleveling detection.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    UStaticMeshComponent *StaticMeshComponent;
};