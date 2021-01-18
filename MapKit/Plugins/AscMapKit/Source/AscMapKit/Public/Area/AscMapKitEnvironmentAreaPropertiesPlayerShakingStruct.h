#pragma once

// Generated
#include "AscMapKitEnvironmentAreaPropertiesPlayerShakingStruct.generated.h"

USTRUCT(Blueprintable, BlueprintType)
struct ASCMAPKIT_API FAscMapKitEnvironmentAreaPropertiesPlayerShakingStruct
{
	GENERATED_BODY()

	// Check to enable player shaking effects.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    bool Enable;

	// A factor amount which is multiplied against the player's rotation game runtime speed to apply the shaking effect.
	// * For example: 8 is a pretty good default for something like water.
	// * Increase the value to apply more shaking.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    float Factor;
};