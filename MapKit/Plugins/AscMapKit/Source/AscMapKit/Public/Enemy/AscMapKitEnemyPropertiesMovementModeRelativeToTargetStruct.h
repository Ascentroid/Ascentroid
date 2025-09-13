#pragma once

// Generated
#include "AscMapKitEnemyPropertiesMovementModeRelativeToTargetStruct.generated.h"

USTRUCT(Blueprintable, BlueprintType)
struct ASCMAPKIT_API FAscMapKitEnemyPropertiesMovementModeRelativeToTargetStruct
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

    // When moving, the game will randomly select a random offset relative to the target forward vector. The selection range is random between minimum and maximum.
    // Default: 3000. Change with caution and test extensively if you modify it!
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame, meta = (ClampMin = "0.0", ClampMax = "999999.9999"))
    float OffsetMinimum;

    // When moving, the game will randomly select a random offset relative to the target forward vector. The selection range is random between minimum and maximum.
    // Default: 4000. Change with caution and test extensively if you modify it!
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame, meta = (ClampMin = "0.0", ClampMax = "999999.9999"))
    float OffsetMaximum;

    // The amount of time given for the movement action to be considered "complete". The selection range is random between minimum and maximum.
    // Default: 0.5. Change with caution and test extensively if you modify it!
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame, meta = (ClampMin = "0.0", ClampMax = "1000.0"))
    float TimerMinimumSeconds;

    // The amount of time given for the movement action to be considered "complete". The selection range is random between minimum and maximum.
    // Default: 1. Change with caution and test extensively if you modify it!
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame, meta = (ClampMin = "0.0", ClampMax = "1000.0"))
    float TimerMaximumSeconds;
};