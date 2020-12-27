#pragma once

// Generated
#include "AscMapKitEnvironmentAreaPropertiesSplashDamageStruct.generated.h"

USTRUCT(Blueprintable, BlueprintType)
struct ASCMAPKIT_API FAscMapKitEnvironmentAreaPropertiesSplashDamageStruct
{
	GENERATED_BODY()

	// If checked, projectiles will cause splash damage when they overlap the environment area.
	UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
	bool Enable;

	// The amount of damage the splash damage does.
	UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
	float Amount;

	// The radius for the splash damage.
	UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
	float Radius;

	// The strength for the splash damage.
	UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    float Strength;

	// Multiplies the strength by this amount.
	// * Optional: will default to 1 if set to 0 or less.
	UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    float Modifier;
};