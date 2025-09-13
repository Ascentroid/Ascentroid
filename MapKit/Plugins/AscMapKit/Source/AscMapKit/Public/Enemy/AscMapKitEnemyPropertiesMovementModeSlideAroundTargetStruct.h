#pragma once

// Generated
#include "AscMapKitEnemyPropertiesMovementModeSlideAroundTargetStruct.generated.h"

USTRUCT(Blueprintable, BlueprintType)
struct ASCMAPKIT_API FAscMapKitEnemyPropertiesMovementModeSlideAroundTargetStruct
{
    GENERATED_BODY()

    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    bool Enable;

    // The percentage chance (0 to 100) for this mode to activate.
    // Default: 50. Change with caution and test extensively if you modify it!
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame, meta = (ClampMin = "0", ClampMax = "100"))
    int32 Chance;
    
    // A proximity check to target. If target distance > value, this movement mode is stopped/canceled.
    // Default: 6000. Change with caution and test extensively if you modify it!
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame, meta = (ClampMin = "0.0", ClampMax = "999999.9999"))
    float DistanceCheck;

    // A proximity check to target. If distance < value, the back away location is re-calculated for the next execution.
    // Default: 100. Change with caution and test extensively if you modify it!
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame, meta = (ClampMin = "0.0", ClampMax = "1000.0"))
    float RecalculateDistanceThreshold;

    // The amount of time given for the movement action to be considered "complete". The selection range is random between minimum and maximum.
    // Default: 4. Change with caution and test extensively if you modify it!
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame, meta = (ClampMin = "0.0", ClampMax = "1000.0"))
    float TimerMinimumSeconds;

    // The amount of time given for the movement action to be considered "complete". The selection range is random between minimum and maximum.
    // Default: 8. Change with caution and test extensively if you modify it!
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame, meta = (ClampMin = "0.0", ClampMax = "1000.0"))
    float TimerMaximumSeconds;

    // The proximity radius to slide around target.
    // Default: 6000. Change with caution and test extensively if you modify it!
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame, meta = (ClampMin = "0.0", ClampMax = "999999.9999"))
    float OrbitRadius;

    // The speed to slide around target.
    // Default: 50.333. Change with caution and test extensively if you modify it!
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame, meta = (ClampMin = "0.0", ClampMax = "1000.0"))
    float OrbitSpeed;

    // When sliding around target, a distance check to consider the motion as "complete". When reached, the enemy will change sliding directions.
    // Default: 300. Change with caution and test extensively if you modify it!
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame, meta = (ClampMin = "0.0", ClampMax = "999999.9999"))
    float LocationReachedThreshold;

    // If the enemy collides with something, pause and then resume. The selection range is random between minimum and maximum.
    // Default: 3. Change with caution and test extensively if you modify it!
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame, meta = (ClampMin = "0.0", ClampMax = "1000.0"))
    float TimerPauseMinimumSeconds;

    // If the enemy collides with something, pause and then resume. The selection range is random between minimum and maximum.
    // Default: 5. Change with caution and test extensively if you modify it!
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame, meta = (ClampMin = "0.0", ClampMax = "1000.0"))
    float TimerPauseMaximumSeconds;
};