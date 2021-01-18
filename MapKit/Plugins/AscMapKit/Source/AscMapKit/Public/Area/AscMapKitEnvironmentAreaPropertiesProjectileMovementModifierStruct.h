#pragma once

// Generated
#include "AscMapKitEnvironmentAreaPropertiesProjectileMovementModifierStruct.generated.h"

USTRUCT(Blueprintable, BlueprintType)
struct ASCMAPKIT_API FAscMapKitEnvironmentAreaPropertiesProjectileMovementModifierStruct
{
	GENERATED_BODY()

	// Check to enable projectile movement modifiers (such as slowing down, or speeding up, projectiles).
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    bool Enable;

	// A factor amount which is multiplied against the projectile's velocity game runtime speed.
	// * For example: 0.5 would be half of the projectile's default velocity game runtime speed.
	// * Another example: 2.0 would double the projectile's default velocity game runtime speed.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    float Factor;
};