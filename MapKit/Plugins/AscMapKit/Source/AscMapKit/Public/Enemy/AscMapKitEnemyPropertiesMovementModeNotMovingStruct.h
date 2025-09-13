#pragma once

// Generated
#include "AscMapKitEnemyPropertiesMovementModeNotMovingStruct.generated.h"

USTRUCT(Blueprintable, BlueprintType)
struct ASCMAPKIT_API FAscMapKitEnemyPropertiesMovementModeNotMovingStruct
{
    GENERATED_BODY()

    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    bool Enable;
    
    // On a fixed timer, the game will check to see if an enemy has not been moving. This is a distance check since the enemy last moved. If distance <= value, the game will treat the enemy as "not moved".
    // Default: 500. Change with caution and test extensively if you modify it!
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame, meta = (ClampMin = "0.0", ClampMax = "999999.9999"))
    float DistanceCheck;

    // On a fixed timer, the game will check to see if an enemy has not been moving. If the number of times the distance check is greater than or equal to this value, the game will attempt to forcibly move the enemy.
    // Default: 5. Change with caution and test extensively if you modify it!
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame, meta = (ClampMin = "0", ClampMax = "1000"))
    int32 Count;

    // If the game attempts to fix an enemy that is not moving, an impulse is applied to try to fix them.
    // This is for the impulse strength.
    // It will generate a random value between this minimum and a maximum.
    // Default: 1000. Change with caution and test extensively if you modify it!
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame, meta = (ClampMin = "0.0", ClampMax = "999999.9999"))
    float ImpulseFixStrengthMinimum;

    // If the game attempts to fix an enemy that is not moving, an impulse is applied to try to fix them.
    // This is for the impulse strength.
    // It will generate a random value between this minimum and a maximum.
    // Default: 1500. Change with caution and test extensively if you modify it!
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame, meta = (ClampMin = "0.0", ClampMax = "999999.9999"))
    float ImpulseFixStrengthMaximum;

    // If the game attempts to fix an enemy that is not moving, an impulse is applied to try to fix them.
    // This is for the impulse amount.
    // It will generate a random value between this minimum and a maximum.
    // Default: 1. Change with caution and test extensively if you modify it!
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame, meta = (ClampMin = "0.0", ClampMax = "1000.0"))
    float ImpulseFixAmountMinimum;

    // If the game attempts to fix an enemy that is not moving, an impulse is applied to try to fix them.
    // This is for the impulse amount.
    // It will generate a random value between this minimum and a maximum.
    // Default: 3. Change with caution and test extensively if you modify it!
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame, meta = (ClampMin = "0.0", ClampMax = "1000.0"))
    float ImpulseFixAmountMaximum;

    // If the game attempts to fix an enemy that is not moving, an impulse is applied to try to fix them.
    // This is for the impulse radius.
    // It will generate a random value between this minimum and a maximum.
    // Default: 150. Change with caution and test extensively if you modify it!
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame, meta = (ClampMin = "0.0", ClampMax = "999999.9999"))
    float ImpulseFixRadiusMinimum;

    // If the game attempts to fix an enemy that is not moving, an impulse is applied to try to fix them.
    // This is for the impulse radius.
    // It will generate a random value between this minimum and a maximum.
    // Default: 250. Change with caution and test extensively if you modify it!
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame, meta = (ClampMin = "0.0", ClampMax = "999999.9999"))
    float ImpulseFixRadiusMaximum;

    // If the game attempts to fix an enemy that is not moving, an impulse is applied to try to fix them.
    // This is for the impulse location offset.
    // It will generate a random value between this minimum and a maximum.
    // Default: -200. Change with caution and test extensively if you modify it!
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame, meta = (ClampMin = "-999999.9999", ClampMax = "999999.9999"))
    float OffsetMinimum;

    // If the game attempts to fix an enemy that is not moving, an impulse is applied to try to fix them.
    // This is for the impulse location offset.
    // It will generate a random value between this minimum and a maximum.
    // Default: 200. Change with caution and test extensively if you modify it!
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame, meta = (ClampMin = "-999999.9999", ClampMax = "999999.9999"))
    float OffsetMaximum;
};