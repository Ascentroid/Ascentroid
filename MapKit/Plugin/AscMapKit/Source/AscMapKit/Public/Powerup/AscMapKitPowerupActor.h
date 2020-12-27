#pragma once

// UE4
#include "Runtime/Engine/Classes/Components/ArrowComponent.h"
#include "Runtime/Engine/Classes/Components/BoxComponent.h"
#include "Runtime/Engine/Classes/Components/StaticMeshComponent.h"

// Ascentroid
#include "AscMapKit/Public/Powerup/AscMapKitPowerupBillboardComponent.h"
#include "AscMapKit/Public/Powerup/AscMapKitPowerupPropertiesStruct.h"

// Generated
#include "AscMapKitPowerupActor.generated.h"

UCLASS(HideCategories=("Activation", "Actor", "Asset User Data", "Collision", "Cooking", "HLOD", "Input", "LOD", "Lighting", "Mobile", "Physics", "Rendering", "Replication", "Sprite", "Tags", "Virtual Texture"))
class ASCMAPKIT_API AAscMapKitPowerupActor : public AActor
{
    GENERATED_BODY()

public:
    AAscMapKitPowerupActor();

    // Edit the majority of the map kit actor properties here.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame, Category="Ascentroid")
    FAscMapKitPowerupPropertiesStruct MapKit;

    UPROPERTY()
    USceneComponent *EmptyRootComponent;

    UPROPERTY()
    UAscMapKitPowerupBillboardComponent *BillboardComponent;

    UFUNCTION()
    void OnConstruction(const FTransform &Transform) override;

    UFUNCTION()
    void BeginPlay() override;

#if WITH_EDITOR
    virtual void PostEditChangeProperty(struct FPropertyChangedEvent &PropertyChangedEvent) override;
#endif
};