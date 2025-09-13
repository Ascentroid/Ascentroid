#pragma once

// UE
#include "Runtime/Engine/Classes/Components/PostProcessComponent.h"
#include "Runtime/Engine/Classes/GameFramework/PlayerStart.h"

// Ascentroid
#include "AscMapKit/Public/Core/Global/AscMapKitBaseActor.h"

// Generated
#include "AscMapKitDefaultPostProcessActor.generated.h"

UCLASS(Blueprintable, HideCategories=("Activation", "Asset User Data", "Collision", "Cooking", "HLOD", "Input", "LOD", "Lighting", "Mobile", "Physics", "Rendering", "Replication", "Sprite", "Tags", "Virtual Texture"))
class ASCMAPKIT_API AAscMapKitDefaultPostProcessActor : public AAscMapKitBaseActor
{
    GENERATED_BODY()

public:
    AAscMapKitDefaultPostProcessActor(const FObjectInitializer &ObjectInitializer);

    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame, Category="Ascentroid")
    UPostProcessComponent *PostProcessComponent;
};