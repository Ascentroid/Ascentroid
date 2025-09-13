#pragma once

// UE
#include "Runtime/Engine/Classes/Components/ArrowComponent.h"

// Ascentroid
#include "AscMapKit/Public/Core/Global/AscMapKitBaseActor.h"
#include "AscMapKit/Public/Enemy/AscMapKitEnemyBillboardComponent.h"
#include "AscMapKit/Public/Enemy/AscMapKitEnemyWaypointPropertiesStruct.h"

// Generated
#include "AscMapKitEnemyWaypointActor.generated.h"

UCLASS(Blueprintable, HideCategories=("Activation", "Asset User Data", "Collision", "Cooking", "HLOD", "Input", "LOD", "Lighting", "Mobile", "Physics", "Rendering", "Replication", "Sprite", "Tags", "Virtual Texture"))
class ASCMAPKIT_API AAscMapKitEnemyWaypointActor : public AAscMapKitBaseActor
{
    GENERATED_BODY()

public:
    AAscMapKitEnemyWaypointActor();

    // Edit the majority of the map kit actor properties here.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame, Category="Ascentroid")
    FAscMapKitEnemyWaypointPropertiesStruct MapKit;

    UPROPERTY()
    USceneComponent *EmptyRootComponent;
    
    UPROPERTY()
    UAscMapKitEnemyBillboardComponent *BillboardComponent;

    UFUNCTION()
    void BeginPlay() override;

#if WITH_EDITOR
    virtual void PostEditChangeProperty(FPropertyChangedEvent &PropertyChangedEvent) override;
#endif
    
private:
    UPROPERTY()
    UTexture2D *BillboardTexture;
};