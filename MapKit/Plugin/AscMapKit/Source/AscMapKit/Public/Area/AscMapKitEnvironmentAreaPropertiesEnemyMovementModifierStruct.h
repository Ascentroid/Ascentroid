#pragma once

// Generated
#include "AscMapKitEnvironmentAreaPropertiesEnemyMovementModifierStruct.generated.h"

USTRUCT(Blueprintable, BlueprintType)
struct ASCMAPKIT_API FAscMapKitEnvironmentAreaPropertiesEnemyMovementModifierStruct
{
	GENERATED_BODY()

	// Check to enable enemy movement modifiers (such as slowing down, or speeding up, enemies).
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    bool Enable;

	// A factor amount which is multiplied against the enemy's maximum game runtime speed.
	// * For example: 0.5 would be half of the enemy's default maximum game runtime speed.
	// * Another example: 2.0 would double the enemy's default maximum game runtime speed.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    float MaxSpeedFactor;
};