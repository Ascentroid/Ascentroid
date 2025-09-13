#pragma once

// Ascentroid
#include "AscMapKit/Public/Core/Global/AscMapKitBaseActor.h"
#include "AscMapKit/Public/Destructible/AscMapKitDestructiblePropertiesStruct.h"

// Generated
#include "AscMapKitDestructibleActor.generated.h"

UCLASS(Blueprintable, HideCategories=("Activation", "Asset User Data", "Collision", "Cooking", "HLOD", "Input", "LOD", "Lighting", "Mobile", "Physics", "Rendering", "Replication", "Sprite", "Tags", "Virtual Texture"))
class ASCMAPKIT_API AAscMapKitDestructibleActor : public AAscMapKitBaseActor
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