#pragma once

// Ascentroid
#include "AscMapKit/Public/Destructible/AscMapKitDestructiblePropertiesStruct.h"

// Generated
#include "AscMapKitDestructibleActor.generated.h"

UCLASS(HideCategories=("Activation", "Actor", "Asset User Data", "Collision", "Cooking", "HLOD", "Input", "LOD", "Lighting", "Mobile", "Physics", "Rendering", "Replication", "Sprite", "Tags", "Virtual Texture"))
class ASCMAPKIT_API AAscMapKitDestructibleActor : public AActor
{
    GENERATED_BODY()

public:
    AAscMapKitDestructibleActor();

    // Edit the majority of the map kit actor properties here.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame, Category="Ascentroid")
    FAscMapKitDestructiblePropertiesStruct MapKit;

    UPROPERTY()
    USceneComponent *EmptyRootComponent;

    UPROPERTY()
    AActor *Parent;
};