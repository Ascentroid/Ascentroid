#pragma once

// Ascentroid
#include "AscMapKit/Public/Forcefield/AscMapKitForcefieldPropertiesAnimateStruct.h"
#include "AscMapKit/Public/Forcefield/AscMapKitForcefieldPropertiesEnemiesStruct.h"
#include "AscMapKit/Public/Forcefield/AscMapKitForcefieldPropertiesPlayersStruct.h"
#include "AscMapKit/Public/Forcefield/AscMapKitForcefieldPropertiesPulseStruct.h"
#include "AscMapKit/Public/Forcefield/AscMapKitForcefieldPropertiesOtherEffectsStruct.h"
#include "AscMapKit/Public/Forcefield/AscMapKitForcefieldPropertiesStaticMeshStruct.h"

// Generated
#include "AscMapKitForcefieldPropertiesStruct.generated.h"

USTRUCT(Blueprintable, BlueprintType)
struct ASCMAPKIT_API FAscMapKitForcefieldPropertiesStruct
{
    GENERATED_BODY()

    // If checked, this forcefield will be visible and enabled.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    bool Enable;

	// Used by the game runtime to display the forcefield name. This is used for HUD messages.
	UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    FString DisplayName;
	
	// Used by the game runtime to identify this forcefield. This is required and must be unique per forcefield.
	// * If forcefield IDs are not set, or not unique, the game logs should provide an error message.
	UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
	FString Id;
	
	// If enabled, the forcefield will reflect all primary projectiles, regardless of who/what shot them.
	// * This will override the player and enemy "Reflect Projectiles" settings.
	UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    bool ReflectAllProjectiles;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
	FAscMapKitForcefieldPropertiesStaticMeshStruct StaticMesh;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
	FAscMapKitForcefieldPropertiesAnimateStruct Animate;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
	FAscMapKitForcefieldPropertiesPlayersStruct Players;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    FAscMapKitForcefieldPropertiesEnemiesStruct Enemies;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
	FAscMapKitForcefieldPropertiesPulseStruct Pulse;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
	FAscMapKitForcefieldPropertiesOtherEffectsStruct OtherEffects;
};