#pragma once

// Generated
#include "AscMapKitForcefieldPropertiesPlayersStruct.generated.h"

USTRUCT(Blueprintable, BlueprintType)
struct ASCMAPKIT_API FAscMapKitForcefieldPropertiesPlayersStruct
{
    GENERATED_BODY()

	// If enabled, the forcefield will reflect player primary projectiles.
	UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
	bool ReflectProjectiles;

	// How much damage is applied to players when they collide with the forcefield.
	UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
	float DamageAmount;

	// Apply a delay, in seconds, before damaging the player after the initial time they run into a forcefield.
	// * This is helpful in case you don't want the player to get damaged repeatedly while they are continually running into the forcefield.
	UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    float DamageDelay;

	// If checked, an impulse radius will be applied to the player when they collide with the forcefield.
	UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    bool EnableImpulse;

	// How large the impulse radius is when applied to the player when they collide with the forcefield.
	UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
	float ImpulseRadius;

	// How much impulse is applied to the player when they collide with the forcefield.
	UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
	float ImpulseStrength;
};