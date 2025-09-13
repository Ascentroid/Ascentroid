#pragma once

// Generated
#include "AscMapKitEnemyPropertiesBehaviorModeReinforcementStruct.generated.h"

USTRUCT(Blueprintable, BlueprintType)
struct ASCMAPKIT_API FAscMapKitEnemyPropertiesBehaviorModeReinforcementStruct
{
    GENERATED_BODY()

    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    bool Enable;

    // High threshold of a percentage of maximum/start shields to enter this mode. Example: 40% of 100 = 40 shields. 40% of 300 = 120 shields.
    // Make sure these numbers are higher than the thresholds for Retreat.
    // Shields <= High Threshold value. Shields > Low Threshold value.
    // See: Status ➜ Start Shields
    // Default: 40. Change with caution and test extensively if you modify it!
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame, meta = (ClampMin = "0", ClampMax = "100"))
    int32 MaximumShieldsPercentageHighThreshold;

    // High threshold of a percentage of maximum/start shields to enter this mode. Example: 30% of 100 = 30 shields. 30% of 300 = 90 shields.
    // Make sure these numbers are higher than the thresholds for Retreat.
    // Shields <= High Threshold value. Shields > Low Threshold value.
    // See: Status ➜ Start Shields
    // Default: 30. Change with caution and test extensively if you modify it!
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame, meta = (ClampMin = "0", ClampMax = "100"))
    int32 MaximumShieldsPercentageLowThreshold;
};