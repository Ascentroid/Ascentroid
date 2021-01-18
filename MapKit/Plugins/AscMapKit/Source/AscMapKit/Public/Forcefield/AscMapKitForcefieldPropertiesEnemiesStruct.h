#pragma once

// Generated
#include "AscMapKitForcefieldPropertiesEnemiesStruct.generated.h"

USTRUCT(Blueprintable, BlueprintType)
struct ASCMAPKIT_API FAscMapKitForcefieldPropertiesEnemiesStruct
{
    GENERATED_BODY()

	// If enabled, the forcefield will reflect enemy primary projectiles.
	UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    bool ReflectProjectiles;

	// How much damage is applied to enemies when they collide with the forcefield.
	UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    float DamageAmount;

	// Apply a delay, in seconds, before damaging the enemy after the initial time they run into a forcefield.
	// * This is helpful in case you don't want the enemy to get damaged repeatedly while they are continually running into the forcefield.
	UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    float DamageDelay;

	// If checked, an impulse radius will be applied to the enemy when they collide with the forcefield.
	UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    bool EnableImpulse;

	// How large the impulse radius is when applied to the enemy when they collide with the forcefield.
	UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    float ImpulseRadius;

	// How much impulse is applied to the enemy when they collide with the forcefield.
	UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    float ImpulseStrength;
};