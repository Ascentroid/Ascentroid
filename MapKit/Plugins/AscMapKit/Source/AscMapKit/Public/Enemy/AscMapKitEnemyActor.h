#pragma once

// UE
#include "Runtime/Engine/Classes/Components/ArrowComponent.h"
#include "Runtime/Engine/Classes/Components/BoxComponent.h"
#include "Runtime/Engine/Classes/Components/StaticMeshComponent.h"

// Ascentroid
#include "AscMapKit/Public/Core/Global/AscMapKitBaseActor.h"
#include "AscMapKit/Public/Enemy/AscMapKitEnemyBillboardComponent.h"
#include "AscMapKit/Public/Enemy/AscMapKitEnemyPropertiesStruct.h"

// Generated
#include "AscMapKitEnemyActor.generated.h"

UCLASS(Blueprintable, HideCategories=("Activation", "Asset User Data", "Collision", "Cooking", "HLOD", "Input", "LOD", "Lighting", "Mobile", "Physics", "Rendering", "Replication", "Sprite", "Tags", "Virtual Texture"))
class ASCMAPKIT_API AAscMapKitEnemyActor : public AAscMapKitBaseActor
{
    GENERATED_BODY()

public:
    AAscMapKitEnemyActor();

    static FAscMapKitEnemyPropertiesStruct GetMapKitDefaults();

    static int32 GetNumberOfSockets(const EAscMapKitEnemyTypeEnum EnemyType);

    // Edit the majority of the map kit actor properties here.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame, Category="Ascentroid")
    FAscMapKitEnemyPropertiesStruct MapKit;

    UPROPERTY()
    USceneComponent *EmptyRootComponent;
    
    UPROPERTY()
    UArrowComponent *ArrowComponent;

    UPROPERTY()
    UAscMapKitEnemyBillboardComponent *BillboardComponent;

    UPROPERTY()
    UStaticMeshComponent *PrimaryColorStaticMeshComponent;

    UPROPERTY()
    UStaticMeshComponent *EmitColorStaticMeshComponent;

    UPROPERTY()
    UMaterialInterface *PrimaryColorMaterial;
    
    UPROPERTY()
    UMaterialInstanceDynamic *PrimaryColorMaterialInstance;

    UPROPERTY()
    UMaterialInterface *EmitColorMaterial;
    
    UPROPERTY()
    UMaterialInstanceDynamic *EmitColorMaterialInstance;

    UFUNCTION()
    void OnConstruction(const FTransform &Transform) override;

    UFUNCTION()
    void BeginPlay() override;

#if WITH_EDITOR
    virtual void PostEditChangeProperty(struct FPropertyChangedEvent &PropertyChangedEvent) override;

    void EditorUpdateEnemyType(EAscMapKitEnemyTypeEnum EnemyType);

    void EditorUpdateWeaponSockets();
#endif
};