#pragma once

// UE
#include "Runtime/Engine/Classes/Components/StaticMeshComponent.h"
#include "Runtime/Engine/Classes/Materials/MaterialInstanceDynamic.h"

// Ascentroid
#include "AscMapKit/Public/Forcefield/AscMapKitForcefieldPropertiesStruct.h"

// Generated
#include "AscMapKitForcefieldActor.generated.h"

UCLASS(HideCategories=("Activation", "Asset User Data", "Collision", "Cooking", "HLOD", "Input", "LOD", "Lighting", "Mobile", "Physics", "Rendering", "Replication", "Sprite", "Tags", "Virtual Texture"))
class ASCMAPKIT_API AAscMapKitForcefieldActor : public AActor
{
    GENERATED_BODY()

public:
    AAscMapKitForcefieldActor();

    // Edit the majority of the map kit actor properties here.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame, Category="Ascentroid")
    FAscMapKitForcefieldPropertiesStruct MapKit;

    UPROPERTY()
    USceneComponent *EmptyRootComponent;

    UPROPERTY()
    UStaticMeshComponent *StaticMeshComponent;

    UPROPERTY()
    UMaterialInterface *PrimaryColorMaterial;
    
    UPROPERTY()
    UMaterialInstanceDynamic *PrimaryColorMaterialInstance;
    
    UFUNCTION()
    void OnConstruction(const FTransform &Transform) override;

    UFUNCTION()
    void BeginPlay() override;

    UFUNCTION()
    void UpdateColor();

#if WITH_EDITOR
    virtual void PostEditChangeProperty(struct FPropertyChangedEvent &PropertyChangedEvent) override;
#endif
};