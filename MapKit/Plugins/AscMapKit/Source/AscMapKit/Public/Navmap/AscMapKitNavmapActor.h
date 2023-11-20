#pragma once

// UE
#include "Engine/Engine.h"
#include "Runtime/Engine/Classes/Components/ArrowComponent.h"
#include "Runtime/Engine/Classes/Components/BoxComponent.h"
#include "Runtime/Engine/Classes/Components/StaticMeshComponent.h"

// Generated
#include "AscMapKitNavmapActor.generated.h"

UCLASS(HideCategories=("Activation", "Asset User Data", "Collision", "Cooking", "HLOD", "Input", "LOD", "Lighting", "Mobile", "Physics", "Rendering", "Replication", "Sprite", "Tags", "Virtual Texture"))
class ASCMAPKIT_API AAscMapKitNavmapActor : public AActor
{
    GENERATED_BODY()

public:
    AAscMapKitNavmapActor();

    // This box represents the size the navmap area should cover.
    // * Be sure to encompass the size of your level object(s) as closely as possible, otherwise navmap processing will be less performant during runtime.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Ascentroid")
    UBoxComponent *Box;

    UPROPERTY()
    USceneComponent *EmptyRootComponent;
};