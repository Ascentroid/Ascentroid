#pragma once

// Generated
#include "AscMapKitEnemyPropertiesBehaviorModeRetreatStruct.generated.h"

USTRUCT(Blueprintable, BlueprintType)
struct ASCMAPKIT_API FAscMapKitEnemyPropertiesBehaviorModeRetreatStruct
{
    GENERATED_BODY()

    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    bool Enable;

    // Threshold of a percentage of maximum/start shields to enter this mode. Example: 30% of 100 = 30 shields. 30% of 300 = 90 shields.
    // Make sure these numbers are lower than the thresholds for Reinforcement.
    // Shields <= Threshold value.
    // See: Status ➜ Start Shields
    // Default: 30. Change with caution and test extensively if you modify it!
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame, meta = (ClampMin = "0", ClampMax = "100"))
    int32 MaximumShieldsPercentageThreshold;
};