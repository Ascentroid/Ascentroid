#pragma once

#ifndef USE_PARTICLES_CASCADE
    #define USE_PARTICLES_CASCADE 1
#endif

// UE
#include "Runtime/Engine/Classes/Components/ArrowComponent.h"
#include "Runtime/Engine/Classes/Components/SkeletalMeshComponent.h"
#include "Runtime/Engine/Classes/Components/StaticMeshComponent.h"

// Ascentroid
#include "AscMapKit/Public/Core/Global/AscMapKitBaseActor.h"
#include "AscMapKit/Public/Fan/AscMapKitFanPropertiesStruct.h"

// Generated
#include "AscMapKitFanActor.generated.h"

UCLASS(Blueprintable, HideCategories=("Activation", "Asset User Data", "Collision", "Cooking", "HLOD", "Input", "LOD", "Lighting", "Mobile", "Physics", "Rendering", "Replication", "Sprite", "Tags", "Virtual Texture"))
class ASCMAPKIT_API AAscMapKitFanActor : public AAscMapKitBaseActor
{
    GENERATED_BODY()

public:
    AAscMapKitFanActor();

    static FAscMapKitFanPropertiesStruct GetMapKitDefaults();

    // Edit the majority of the map kit actor properties here.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame, Category="Ascentroid")
    FAscMapKitFanPropertiesStruct MapKit;

    UPROPERTY()
    USceneComponent *EmptyRootComponent;

    UPROPERTY()
    UArrowComponent *ArrowComponent;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    USkeletalMeshComponent *SkeletalMeshComponent;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    UStaticMeshComponent *StaticMeshComponent;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    UStaticMeshComponent *StaticMeshDestroyedComponent;

    UFUNCTION()
    virtual void OnConstruction(const FTransform &Transform) override;

    UFUNCTION()
    virtual void BeginPlay() override;

#if WITH_EDITOR
    //virtual void PostInitializeComponents() override;

    virtual void PostEditChangeProperty(FPropertyChangedEvent &PropertyChangedEvent) override;

    void EditorUpdateFan(const FString &PropertyName, const EAscMapKitFanTypeEnum &FanType);
#endif
};