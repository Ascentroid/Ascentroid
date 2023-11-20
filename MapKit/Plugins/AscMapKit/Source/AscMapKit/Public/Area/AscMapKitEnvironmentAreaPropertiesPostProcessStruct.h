#pragma once

// UE
#include "Runtime/Engine/Classes/Components/PostProcessComponent.h"

// Generated
#include "AscMapKitEnvironmentAreaPropertiesPostProcessStruct.generated.h"

USTRUCT(Blueprintable, BlueprintType)
struct ASCMAPKIT_API FAscMapKitEnvironmentAreaPropertiesPostProcessStruct
{
	GENERATED_BODY()

	// Check to enable post process effects for the current player.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    bool EnableForPlayer;

	// You can edit any post process effects you would like on the entire component here.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    UPostProcessComponent *PostProcessComponent;
};