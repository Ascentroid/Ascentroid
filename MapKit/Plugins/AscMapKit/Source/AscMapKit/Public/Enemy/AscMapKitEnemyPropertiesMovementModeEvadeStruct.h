#pragma once

// Generated
#include "AscMapKitEnemyPropertiesMovementModeEvadeStruct.generated.h"

USTRUCT(Blueprintable, BlueprintType)
struct ASCMAPKIT_API FAscMapKitEnemyPropertiesMovementModeEvadeStruct
{
    GENERATED_BODY()

    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    bool Enable;

    // The percentage chance (0 to 100) for this mode to activate.
    // Default: 50. Change with caution and test extensively if you modify it!
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame, meta = (ClampMin = "0", ClampMax = "100"))
    int32 Chance;
    
    // A proximity check to target. If target distance > value, this movement mode is stopped/canceled.
    // Default: 3200. Change with caution and test extensively if you modify it!
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame, meta = (ClampMin = "0.0", ClampMax = "999999.9999"))
    float DistanceCheck;
    
    // How far the enemy should slide left.
    // Default: -3200. Change with caution and test extensively if you modify it!
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame, meta = (ClampMin = "-999999.9999", ClampMax = "999999.9999"))
    float DirectionOffsetLeft;

    // How far the enemy should slide right.
    // Default: 3200. Change with caution and test extensively if you modify it!
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame, meta = (ClampMin = "-999999.9999", ClampMax = "999999.9999"))
    float DirectionOffsetRight;
    
    // How far the enemy should offset when moving randomly.
    // Default: 500. Change with caution and test extensively if you modify it!
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame, meta = (ClampMin = "0.0", ClampMax = "999999.9999"))
    float DirectionOffsetRandomMinimum;

    // How far the enemy should offset when moving randomly.
    // Default: 1000. Change with caution and test extensively if you modify it!
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame, meta = (ClampMin = "0.0", ClampMax = "999999.9999"))
    float DirectionOffsetRandomMaximum;
    
    // The amount of time given for the movement action to be considered "complete". The selection range is random between minimum and maximum.
    // Default: 4. Change with caution and test extensively if you modify it!
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame, meta = (ClampMin = "0.0", ClampMax = "1000.0"))
    float TimerMinimumSeconds;

    // The amount of time given for the movement action to be considered "complete". The selection range is random between minimum and maximum.
    // Default: 8. Change with caution and test extensively if you modify it!
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame, meta = (ClampMin = "0.0", ClampMax = "1000.0"))
    float TimerMaximumSeconds;
};