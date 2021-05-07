#pragma once

// Generated
#include "AscMapKitEnvironmentAreaPropertiesDestructibleChunkMovementModifierStruct.generated.h"

USTRUCT(Blueprintable, BlueprintType)
struct ASCMAPKIT_API FAscMapKitEnvironmentAreaPropertiesDestructibleChunkMovementModifierStruct
{
	GENERATED_BODY()

	// Check to enable destructible chunk/piece movement modifiers (such as slowing down, or speeding up, chunk/pieces).
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    bool Enable;

	// A factor amount which is multiplied against the destructible chunk/piece's velocity game runtime speed.
	// * For example: 0.5 would be half of the destructible chunk/piece's default velocity game runtime speed.
	// * Another example: 2.0 would double the destructible chunk/piece's default velocity game runtime speed.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    float Factor;
};