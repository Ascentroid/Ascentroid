#pragma once

// UE
#include "Runtime/Engine/Classes/Components/ArrowComponent.h"
#include "Runtime/Engine/Classes/Components/StaticMeshComponent.h"

// Ascentroid
#include "AscMapKit/Public/Core/Global/AscMapKitBaseActor.h"
#include "AscMapKit/Public/Data/AscTriggerDataAsset.h"
#include "AscMapKit/Public/Trigger/AscMapKitTriggerPropertiesStruct.h"
#include "AscMapKit/Public/Trigger/AscMapKitTriggerTypeEnum.h"

// Generated
#include "AscMapKitTriggerActor.generated.h"

UCLASS(Blueprintable, HideCategories=("Activation", "Asset User Data", "Collision", "Cooking", "HLOD", "Input", "LOD", "Lighting", "Mobile", "Physics", "Rendering", "Replication", "Sprite", "Tags", "Virtual Texture"))
class ASCMAPKIT_API AAscMapKitTriggerActor : public AAscMapKitBaseActor
{
    GENERATED_BODY()

public:
    AAscMapKitTriggerActor();

    static FAscMapKitTriggerPropertiesStruct GetMapKitDefaults(UAscMapKitTriggerDefaultGameRuntimeBoundingBox *InDefaultGameRuntimeBoundingBox);

    // Edit the majority of the map kit actor properties here.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame, Category="Ascentroid")
    FAscMapKitTriggerPropertiesStruct MapKit;
    
    // If you selected a map kit collision type of "Box", specify the size of the box in the "Shape -> Box Extent" property.
    // * Only the "Shape -> Box Extent" property is used at runtime.
    // * All other properties are ignored.
    // * These are configured as components in the map kit so you can visualize the collision in the editor.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Ascentroid|Components|Collision")
    UBoxComponent *InvisibleTriggerCollisionBox;
    
    UPROPERTY()
    USceneComponent *EmptyRootComponent;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame, Category="Ascentroid")
    UStaticMeshComponent *ActiveStaticMeshComponent;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame, Category="Ascentroid")
    UStaticMeshComponent *InactiveStaticMeshComponent;

    UPROPERTY()
    UMaterialInterface *PrimaryColorMaterial;
    
    UPROPERTY()
    UMaterialInstanceDynamic *PrimaryColorMaterialInstance;

    UFUNCTION()
    void OnConstruction(const FTransform &Transform) override;

    UFUNCTION()
    void BeginPlay() override;

#if WITH_EDITOR
    virtual void PostEditChangeProperty(struct FPropertyChangedEvent &PropertyChangedEvent) override;

    void EditorUpdateTriggerType(EAscMapKitTriggerTypeEnum TriggerType);
#endif

    UFUNCTION(BlueprintNativeEvent, Category="Ascentroid")
    void OnDeactivate();

    UFUNCTION()
    virtual void OnDeactivate_Implementation();
    
private:
    UPROPERTY()
    UAscMapKitTriggerDefaultGameRuntimeBoundingBox *DefaultGameRuntimeBoundingBoxInternal;
    
    UPROPERTY()
    UAscTriggerDataAsset *TriggerDataAsset;
};