#pragma once

// Ascentroid
#include "AscMapKit/Public/Core/Constant/AscMapKitDifficultyFloatStruct.h"

// Generated
#include "AscMapKitEnemyPropertiesStatusStruct.generated.h"

USTRUCT(Blueprintable, BlueprintType)
struct ASCMAPKIT_API FAscMapKitEnemyPropertiesStatusStruct
{
	GENERATED_BODY()
	
	// The enemy will not perform any functions. This includes movement, targeting, dodging; everything.
	UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    bool DisableCompletely;

	// The enemy will not attack, but will continue to perform all other functions.
	UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    bool DisableAttack;

	// The enemy will be permanently invincible. (todo: not implemented)
	UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    bool Invincible;

	// The enemy will be permanently concealed. (todo: not implemented)
	UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    bool Concealed;

	// The enemy will start with this amount of shields.
	UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    FAscMapKitDifficultyFloatStruct StartShields;

	// The enemy will be forced to a maximum movement speed.
	UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    float MaxSpeed;
};