#pragma once

// UE
#include "Engine/Engine.h"
#include "Runtime/Engine/Classes/Components/ArrowComponent.h"
#include "Runtime/Engine/Classes/Components/BoxComponent.h"
#include "Runtime/Engine/Classes/Components/StaticMeshComponent.h"

// Ascentroid
#include "AscMapKit/Public/Navmap/AscMapKitNavmapCollisionBoxBoundsVector.h"

// Generated
#include "AscMapKitNavmapActor.generated.h"

UCLASS(HideCategories=("Activation", "Asset User Data", "Collision", "Cooking", "HLOD", "Input", "LOD", "Lighting", "Mobile", "Physics", "Rendering", "Replication", "Sprite", "Tags", "Virtual Texture"))
class ASCMAPKIT_API AAscMapKitNavmapActor : public AActor
{
    GENERATED_BODY()

public:
    AAscMapKitNavmapActor();

    UFUNCTION()
    virtual void OnConstruction(const FTransform &Transform) override;
    
    // This box represents the size the navmap area should cover.
        // * Be sure to encompass the size of your level object(s) as closely as possible, otherwise navmap processing will be less performant during runtime.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame, Category="Ascentroid - Collision", DisplayName="Collision Box Bounds")
    FAscMapKitNavmapCollisionBoxBoundsVector BoxBounds;

    UPROPERTY()
    USceneComponent *EmptyRootComponent;
    
    UPROPERTY()
    UBoxComponent *Box;

#if WITH_EDITOR
    virtual bool ShouldTickIfViewportsOnly() const override { return true; }

    virtual void Tick(float DeltaTime) override;
    
    virtual void PostEditChangeProperty(FPropertyChangedEvent &PropertyChangedEvent) override;
#endif

private:
    UPROPERTY()
    bool bIsBoxBoundsInitialized;

    UPROPERTY()
    bool bNeedsScaleReset;
};