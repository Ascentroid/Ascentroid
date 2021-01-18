#pragma once

// Generated
#include "AscMapKitEnvironmentAreaPropertiesPlayerMovementModifierStruct.generated.h"

USTRUCT(Blueprintable, BlueprintType)
struct ASCMAPKIT_API FAscMapKitEnvironmentAreaPropertiesPlayerMovementModifierStruct
{
	GENERATED_BODY()

	// Check to enable player movement modifiers (such as slowing down, or speeding up, players).
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    bool Enable;

	// A factor amount which is multiplied against the player's default velocity game runtime speed.
	// * For example: 0.5 would be half of the player's default velocity game runtime speed.
	// * Another example: 2.0 would double the player's default velocity game runtime speed.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    float VelocityFactor;

	// A factor amount which is multiplied against the player's default boost game runtime speed.
	// * For example: 0.5 would be half of the player's default boost game runtime speed.
	// * Another example: 2.0 would double the player's default boost game runtime speed.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    float BoostFactor;

	// A factor amount which is multiplied against the player's default rotation game runtime speed.
	// * For example: 0.5 would be half of the player's default rotation game runtime speed.
	// * Another example: 2.0 would double the player's default rotation game runtime speed.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    float RotationFactor;
};