#pragma once

// UE4
#include "Runtime/Engine/Classes/Components/ArrowComponent.h"
#include "Runtime/Engine/Classes/Components/StaticMeshComponent.h"

// Ascentroid
#include "AscMapKit/Public/Trigger/AscMapKitTriggerBillboardComponent.h"
#include "AscMapKit/Public/Trigger/AscMapKitTriggerPropertiesStruct.h"
#include "AscMapKit/Public/Trigger/AscMapKitTriggerTypeEnum.h"

// Generated
#include "AscMapKitTriggerActor.generated.h"

UCLASS(HideCategories=("Activation", "Asset User Data", "Collision", "Cooking", "HLOD", "Input", "LOD", "Lighting", "Mobile", "Physics", "Rendering", "Replication", "Sprite", "Tags", "Virtual Texture"))
class ASCMAPKIT_API AAscMapKitTriggerActor : public AActor
{
    GENERATED_BODY()

public:
    AAscMapKitTriggerActor();

    // Edit the majority of the map kit actor properties here.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame, Category="Ascentroid")
    FAscMapKitTriggerPropertiesStruct MapKit;
    
    // If you selected a map kit collision type of "Box", specify the size of the box in the "Shape -> Box Extent" property.
    // * Only the "Shape -> Box Extent" property is used at runtime.
    // * All other properties are ignored.
    // * These are configured as components in the map kit so you can visualize the collision in the editor.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Ascentroid|Components|Collision")
    UBoxComponent *InvisibleTriggerCollisionBox;

    // If you selected a map kit collision type of "Static Mesh", specify the static mesh in the "Static Mesh" property.
    // * Only the "Static Mesh" property is used at runtime.
    // * All other properties are ignored.
    // * These are configured as components in the map kit so you can visualize the collision in the editor.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Ascentroid|Components|Collision")
    UStaticMeshComponent *InvisibleTriggerCollisionStaticMesh;
    
    UPROPERTY()
    USceneComponent *EmptyRootComponent;

    UPROPERTY()
    UArrowComponent *ArrowComponent;

    UPROPERTY()
    UAscMapKitTriggerBillboardComponent *BillboardComponent;
    
    UPROPERTY()
    UStaticMesh *CubeStaticMesh;

    UPROPERTY()
    UStaticMeshComponent *StaticMeshComponent;

    UFUNCTION()
    void OnConstruction(const FTransform &Transform) override;

    UFUNCTION()
    void BeginPlay() override;

#if WITH_EDITOR
    virtual void PostEditChangeProperty(struct FPropertyChangedEvent &PropertyChangedEvent) override;

    void EditorUpdateTriggerType(EAscMapKitTriggerTypeEnum TriggerType);
#endif

    UFUNCTION(BlueprintImplementableEvent, Category="Ascentroid")
    void OnDeactivate();
};