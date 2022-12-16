#pragma once

// UE4
#include "Runtime/Engine/Classes/Components/StaticMeshComponent.h"

// Ascentroid
#include "AscMapKit/Public/Door/AscMapKitDoorPropertiesStruct.h"

// Generated
#include "AscMapKitDoorActor.generated.h"

UCLASS(HideCategories=("Activation", "Asset User Data", "Collision", "Cooking", "HLOD", "Input", "LOD", "Lighting", "Mobile", "Physics", "Rendering", "Replication", "Sprite", "Tags", "Virtual Texture"))
class ASCMAPKIT_API AAscMapKitDoorActor : public AActor
{
    GENERATED_BODY()

public:
    AAscMapKitDoorActor();

    // Edit the majority of the map kit actor properties here.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame, Category="Ascentroid")
    FAscMapKitDoorPropertiesStruct MapKit;

    UPROPERTY()
    USceneComponent *EmptyRootComponent;

    UPROPERTY()
    UStaticMesh *CubeStaticMesh;
    
    UPROPERTY()
    UStaticMeshComponent *StaticMeshComponent;
    
    UFUNCTION()
    void OnConstruction(const FTransform &Transform) override;

    UFUNCTION()
    void BeginPlay() override;

#if WITH_EDITOR
    virtual void PostInitializeComponents() override;
    
    virtual void PostEditChangeProperty(struct FPropertyChangedEvent &PropertyChangedEvent) override;

    void EditorUpdateDoorType(EAscMapKitDoorTypeEnum DoorType);

    void EditorUpdatePlayerInteractBoundingBoxExtent(FVector Arg);
#endif

private:
    UPROPERTY()
    UMaterialInterface *Animated20x20mBasic001Material;

    UPROPERTY()
    UMaterialInterface *Animated20x20mBasic002Material;

    UPROPERTY()
    UMaterialInterface *Animated20x20mBasic003Material;

    UPROPERTY()
    UMaterialInterface *Animated20x20mBasic004Material;

    UPROPERTY()
    UMaterialInterface *Animated20x20mBasic005Material;

    UPROPERTY()
    UMaterialInterface *Animated20x20mSciFiDoorsDoor1Material;

    UPROPERTY()
    UMaterialInterface *Animated20x20mSciFiDoorsDoor2Material;

    UPROPERTY()
    UMaterialInterface *Animated20x20mSciFiDoorsDoor4Material;

    UPROPERTY()
    UMaterialInterface *Animated20x20mSciFiPropsDoor1Material;

    UPROPERTY()
    UMaterialInterface *Animated40x20mBasic001Material;

    UPROPERTY()
    UMaterialInterface *Animated40x20mSciFiDoorsDoor3Material;

    UPROPERTY()
    UMaterialInterface *Destructible20x20mBasic001Material;
};