#pragma once

// UE
#include "Runtime/Engine/Classes/Components/StaticMeshComponent.h"
#include "Runtime/Engine/Classes/GameFramework/PlayerStart.h"

// Generated
#include "AscMapKitPlayerStart.generated.h"

UCLASS(Blueprintable, HideCategories=("Activation", "Asset User Data", "Collision", "Cooking", "HLOD", "Input", "LOD", "Lighting", "Mobile", "Physics", "Rendering", "Replication", "Sprite", "Tags", "Virtual Texture"))
class ASCMAPKIT_API AAscMapKitPlayerStart : public APlayerStart
{
    GENERATED_BODY()

public:
    AAscMapKitPlayerStart(const FObjectInitializer &ObjectInitializer);

    void OnConstruction(const FTransform &Transform) override;

#if WITH_EDITORONLY_DATA
    UPROPERTY()
    UStaticMeshComponent *StaticMeshComponent;
#endif
};
