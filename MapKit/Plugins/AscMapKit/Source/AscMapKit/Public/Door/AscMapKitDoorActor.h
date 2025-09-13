#pragma once

// UE
#include "Runtime/Engine/Classes/Components/StaticMeshComponent.h"

// Ascentroid
#include "AscMapKit/Public/Core/Global/AscMapKitBaseActor.h"
#include "AscMapKit/Public/Door/AscMapKitDoorPropertiesStruct.h"

// Generated
#include "AscMapKitDoorActor.generated.h"

UCLASS(Blueprintable, HideCategories=("Activation", "Asset User Data", "Collision", "Cooking", "HLOD", "Input", "LOD", "Lighting", "Mobile", "Physics", "Rendering", "Replication", "Sprite", "Tags", "Virtual Texture"))
class ASCMAPKIT_API AAscMapKitDoorActor : public AAscMapKitBaseActor
{
    GENERATED_BODY()

public:
    AAscMapKitDoorActor();

    static FAscMapKitDoorPropertiesStruct GetMapKitDefaults();
    
    // Edit the majority of the map kit actor properties here.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame, Category="Ascentroid")
    FAscMapKitDoorPropertiesStruct MapKit;

    UPROPERTY()
    USceneComponent *EmptyRootComponent;

    UPROPERTY()
    UStaticMesh *CubeStaticMesh;

    UPROPERTY(SaveGame)
    UStaticMeshComponent *StaticMeshComponent;

    UPROPERTY(SaveGame)
    USkeletalMeshComponent *SkeletalMeshComponent;

    UPROPERTY(SaveGame)
    UAscMapKitDoorPlayerInteractBoundingBox *PlayerInteractBoundingBox;
    
    UFUNCTION()
    void OnConstruction(const FTransform &Transform) override;

    UFUNCTION()
    void BeginPlay() override;

#if WITH_EDITOR
    virtual void PostInitializeComponents() override;
   
    virtual bool ShouldTickIfViewportsOnly() const override { return true; }

    virtual void Tick(float DeltaTime) override;

    // Called after the actor is deserialized when opening a map.
    virtual void PostLoad() override;

    // Called after components are registered, good if you need the skeletal mesh to exist.
    virtual void PostRegisterAllComponents() override;

    // Useful if map makers undo/redo changes -- keeps the list up to date:
    virtual void PostEditUndo() override;
    
    virtual void PostEditChangeProperty(struct FPropertyChangedEvent &PropertyChangedEvent) override;

    void EditorUpdateDoorType(EAscMapKitDoorTypeEnum DoorType);

    void EditorUpdateDoorCustom();

    void EditorUpdatePlayerInteractBoundingBoxExtent(FVector Arg);

    void EditorUpdateMaterialInfo();

    //UPROPERTY()
    FVector CachedPlayerInteractExtent;

    //UPROPERTY()
    bool bNeedsScaleReset;
#endif
};