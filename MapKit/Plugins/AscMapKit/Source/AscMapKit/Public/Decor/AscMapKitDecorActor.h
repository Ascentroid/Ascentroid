#pragma once

// UE
#include "Runtime/Engine/Classes/Components/StaticMeshComponent.h"

// Ascentroid
#include "AscMapKit/Public/Core/Global/AscMapKitBaseActor.h"
#include "AscMapKit/Public/Decor/AscMapKitDecorPropertiesStruct.h"

// Generated
#include "AscMapKitDecorActor.generated.h"

UCLASS(Blueprintable, HideCategories=("Activation", "Asset User Data", "Collision", "Cooking", "HLOD", "Input", "LOD", "Lighting", "Mobile", "Physics", "Rendering", "Replication", "Sprite", "Tags", "Virtual Texture"))
class ASCMAPKIT_API AAscMapKitDecorActor : public AAscMapKitBaseActor
{
    GENERATED_BODY()

public:
    AAscMapKitDecorActor();

    static FAscMapKitDecorPropertiesStruct GetMapKitDefaults();
    
    // Edit the majority of the map kit actor properties here.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame, Category="Ascentroid")
    FAscMapKitDecorPropertiesStruct MapKit;
    
    UPROPERTY()
    USceneComponent *EmptyRootComponent;

    // Use this property to set the static mesh for this actor.
    // * This actor is ignored/invisible for ship autoleveling detection.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    UStaticMeshComponent *StaticMeshComponent;

    // Use this property to set the destructible static mesh destroyed state for this actor.
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    UStaticMeshComponent *StaticMeshDestroyedComponent;
};