#pragma once

// UE
#include "Engine/Engine.h"
#include "Runtime/Engine/Classes/Components/ArrowComponent.h"
#include "Runtime/Engine/Classes/Components/BoxComponent.h"
#include "Runtime/Engine/Classes/Components/StaticMeshComponent.h"

// Ascentroid
#include "AscMapKit/Public/Area/AscMapKitEnvironmentAreaBillboardComponent.h"
#include "AscMapKit/Public/Area/AscMapKitEnvironmentAreaPropertiesStruct.h"
#include "AscMapKit/Public/Core/Global/AscMapKitBaseActor.h"

// Generated
#include "AscMapKitEnvironmentAreaActor.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnEnemyGeneratorActivated);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnEnemyGeneratorDeactivated);

UCLASS(Blueprintable, HideCategories=("Activation", "Asset User Data", "Collision", "Cooking", "HLOD", "Input", "LOD", "Lighting", "Mobile", "Physics", "Rendering", "Replication", "Sprite", "Tags", "Virtual Texture"))
class ASCMAPKIT_API AAscMapKitEnvironmentAreaActor : public AAscMapKitBaseActor
{
    GENERATED_BODY()

public:
    AAscMapKitEnvironmentAreaActor();

    static FAscMapKitEnvironmentAreaPropertiesStruct GetMapKitDefaults(UPostProcessComponent *InPostProcessComponent);
    
    // Edit the majority of the map kit actor properties here.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame, Category="Ascentroid")
    FAscMapKitEnvironmentAreaPropertiesStruct MapKit;

    // If you selected a map kit collision type of "Box", specify the size of the box in the "Shape -> Box Extent" property.
    // * Only the "Shape -> Box Extent" property is used at runtime.
    // * All other properties are ignored.
    // * These are configured as components in the map kit so you can visualize the collision in the editor.
    UPROPERTY()
    UBoxComponent *Box;

    // If you selected a map kit collision type of "Static Mesh", specify the static mesh in the "Static Mesh" property.
    // * Only the "Static Mesh" property is used at runtime.
    // * All other properties are ignored.
    // * These are configured as components in the map kit so you can visualize the collision in the editor.
    UPROPERTY()
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

    virtual bool ShouldTickIfViewportsOnly() const override { return true; }

    virtual void Tick(float DeltaTime) override;

    UFUNCTION()
    void ConvertScaleToBoxExtent();

    virtual void PostEditChangeProperty(FPropertyChangedEvent &PropertyChangedEvent) override;
#endif

    UPROPERTY(BlueprintAssignable)
    FOnEnemyGeneratorActivated OnEnemyGeneratorActivated;
    
    UPROPERTY(BlueprintAssignable)
    FOnEnemyGeneratorDeactivated OnEnemyGeneratorDeactivated;

private:
    UPROPERTY()
    UPostProcessComponent *PostProcessComponentInternal;
    
    UPROPERTY()
    bool bIsBoxBoundsInitialized;

    UPROPERTY()
    bool bNeedsScaleReset;
};