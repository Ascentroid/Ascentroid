#pragma once

// Generated
#include "AscMapKitEnemyPropertiesMovementModeSlideRandomStruct.generated.h"

USTRUCT(Blueprintable, BlueprintType)
struct ASCMAPKIT_API FAscMapKitEnemyPropertiesMovementModeSlideRandomStruct
{
    GENERATED_BODY()

    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    bool Enable;

    // The percentage chance (0 to 100) for this mode to activate.
    // Default: 50. Change with caution and test extensively if you modify it!
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame, meta = (ClampMin = "0", ClampMax = "100"))
    int32 Chance;
    
    // A proximity check to target. If target distance <= value, the enemy will back away.
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

    // A proximity check to target. If distance < value, the back away location is re-calculated for the next execution.
    // Default: 300. Change with caution and test extensively if you modify it!
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame, meta = (ClampMin = "0.0", ClampMax = "1000.0"))
    float RecalculateDistanceThreshold;

    // When sliding random, a distance check to consider the motion as "complete". When reached, the enemy will change sliding directions.
    // Default: 100. Change with caution and test extensively if you modify it!
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame, meta = (ClampMin = "0.0", ClampMax = "1000.0"))
    float LocationReachedThreshold;
    
    // The amount of time given for the movement action to be considered "complete". The selection range is random between minimum and maximum.
    // Default: 4. Change with caution and test extensively if you modify it!
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame, meta = (ClampMin = "0.0", ClampMax = "1000.0"))
    float TimerMinimumSeconds;

    // The amount of time given for the movement action to be considered "complete". The selection range is random between minimum and maximum.
    // Default: 8. Change with caution and test extensively if you modify it!
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame, meta = (ClampMin = "0.0", ClampMax = "1000.0"))
    float TimerMaximumSeconds;

    // If the enemy collides with something, pause and then resume. The selection range is random between minimum and maximum.
    // Default: 0.1. Change with caution and test extensively if you modify it!
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame, meta = (ClampMin = "0.0", ClampMax = "1000.0"))
    float TimerPauseMinimumSeconds;

    // If the enemy collides with something, pause and then resume. The selection range is random between minimum and maximum.
    // Default: 0.3. Change with caution and test extensively if you modify it!
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame, meta = (ClampMin = "0.0", ClampMax = "1000.0"))
    float TimerPauseMaximumSeconds;
};