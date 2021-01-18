#pragma once

// Generated
#include "AscMapKitEnvironmentAreaPropertiesPowerupMovementModifierStruct.generated.h"

USTRUCT(Blueprintable, BlueprintType)
struct ASCMAPKIT_API FAscMapKitEnvironmentAreaPropertiesPowerupMovementModifierStruct
{
	GENERATED_BODY()

	// Check to enable powerup movement modifiers (such as slowing down, or speeding up, powerups).
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    bool Enable;

	// A factor amount which is multiplied against the powerup's rotation game runtime speed.
	// * For example: 0.5 would be half of the powerup's default rotation game runtime speed.
	// * Another example: 2.0 would double the powerup's default rotation game runtime speed.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    float Factor;
};