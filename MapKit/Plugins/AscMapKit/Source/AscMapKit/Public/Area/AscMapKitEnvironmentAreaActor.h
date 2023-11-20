#pragma once

// UE
#include "Engine/Engine.h"
#include "Runtime/Engine/Classes/Components/ArrowComponent.h"
#include "Runtime/Engine/Classes/Components/BoxComponent.h"
#include "Runtime/Engine/Classes/Components/StaticMeshComponent.h"

// Ascentroid
#include "AscMapKit/Public/Area/AscMapKitEnvironmentAreaBillboardComponent.h"
#include "AscMapKit/Public/Area/AscMapKitEnvironmentAreaPropertiesStruct.h"

// Generated
#include "AscMapKitEnvironmentAreaActor.generated.h"

UCLASS(HideCategories=("Activation", "Asset User Data", "Collision", "Cooking", "HLOD", "Input", "LOD", "Lighting", "Mobile", "Physics", "Rendering", "Replication", "Sprite", "Tags", "Virtual Texture"))
class ASCMAPKIT_API AAscMapKitEnvironmentAreaActor : public AActor
{
    GENERATED_BODY()

public:
    AAscMapKitEnvironmentAreaActor();

    // Edit the majority of the map kit actor properties here.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame, Category="Ascentroid")
    FAscMapKitEnvironmentAreaPropertiesStruct MapKit;

    // If you selected a map kit collision type of "Box", specify the size of the box in the "Shape -> Box Extent" property.
    // * Only the "Shape -> Box Extent" property is used at runtime.
    // * All other properties are ignored.
    // * These are configured as components in the map kit so you can visualize the collision in the editor.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Ascentroid|Components|Collision")
    UBoxComponent *Box;

    // If you selected a map kit collision type of "Static Mesh", specify the static mesh in the "Static Mesh" property.
    // * Only the "Static Mesh" property is used at runtime.
    // * All other properties are ignored.
    // * These are configured as components in the map kit so you can visualize the collision in the editor.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Ascentroid|Components|Collision")
    UStaticMeshComponent *StaticMesh;

    UPROPERTY()
    USceneComponent *EmptyRootComponent;
    
    UPROPERTY()
    UArrowComponent *ArrowComponent;

    UPROPERTY()
    UAscMapKitEnvironmentAreaBillboardComponent *BillboardComponent;

    virtual void OnConstruction(const FTransform &Transform) override;

#if WITH_EDITOR
    virtual void PostInitializeComponents() override;
    
    virtual void PostEditChangeProperty(struct FPropertyChangedEvent &PropertyChangedEvent) override;
#endif
};