#pragma once

// UE
#include "Runtime/Engine/Classes/Components/TextRenderComponent.h"

// Ascentroid
#include "AscMapKitGuiInteractDisplayPropertiesStruct.h"
#include "AscMapKit/Public/Core/Global/AscMapKitBaseActor.h"

// Generated
#include "AscMapKitGuiInteractDisplayActor.generated.h"

//UCLASS(Blueprintable, HideCategories=("Activation", "Asset User Data", "Collision", "Cooking", "HLOD", "Input", "LOD", "Lighting", "Mobile", "Physics", "Rendering", "Replication", "Sprite", "Tags", "Virtual Texture"))
UCLASS(Blueprintable)
class ASCMAPKIT_API AAscMapKitGuiInteractDisplayActor : public AAscMapKitBaseActor
{
    GENERATED_BODY()

public:
    AAscMapKitGuiInteractDisplayActor();

    static FAscMapKitGuiInteractDisplayPropertiesStruct GetMapKitDefaults();

    // Edit the majority of the map kit actor properties here.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame, Category="Ascentroid")
    FAscMapKitGuiInteractDisplayPropertiesStruct MapKit;

    UPROPERTY()
    USceneComponent *EmptyRootComponent;

    UPROPERTY() // EditAnywhere, BlueprintReadWrite, SaveGame, Category="Ascentroid"
    UTextRenderComponent *TextRenderComponent;

    UPROPERTY() // EditAnywhere, BlueprintReadWrite, SaveGame, Category="Ascentroid"
    UStaticMeshComponent *UnderlineStaticMeshComponent;

    UPROPERTY()
    UMaterialInterface *PrimaryColorMaterial;

    UPROPERTY()
    UMaterialInstanceDynamic *PrimaryColorMaterialInstance;
    
    UPROPERTY()
    UMaterialInterface *UnderlineColorMaterial;

    UPROPERTY()
    UMaterialInstanceDynamic *UnderlineColorMaterialInstance;

    UFUNCTION()
    virtual void OnConstruction(const FTransform &Transform) override;

    UFUNCTION()
    virtual void BeginPlay() override;

    UFUNCTION()
    void UpdateColor();

#if WITH_EDITOR
    virtual void PostEditChangeProperty(struct FPropertyChangedEvent &PropertyChangedEvent) override;
#endif
};