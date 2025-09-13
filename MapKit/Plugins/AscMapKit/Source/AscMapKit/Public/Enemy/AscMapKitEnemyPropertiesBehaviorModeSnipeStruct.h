#pragma once

// Generated
#include "AscMapKitEnemyPropertiesBehaviorModeSnipeStruct.generated.h"

USTRUCT(Blueprintable, BlueprintType)
struct ASCMAPKIT_API FAscMapKitEnemyPropertiesBehaviorModeSnipeStruct
{
    GENERATED_BODY()

    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    bool Enable;
    
    // Proximity check to nearby enemies. If <= value, the other enemy is considered to be nearby.
    // Default: 6000. Change with caution and test extensively if you modify it!
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame, meta = (ClampMin = "0.0", ClampMax = "999999.9999"))
    float NearbyEnemyDistance;

    // Proximity check to nearby enemies. If TotalApplicableEnemiesThreshold >= value && NearbyEnemyThreshold <= value, then the enemy will NOT go into Snipe mode.
    // This check ensures that some enemies remain within engagement proximity to the target(s).
    // Default: 10. Change with caution and test extensively if you modify it!
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame, meta = (ClampMin = "0", ClampMax = "1000"))
    int32 TotalApplicableEnemiesThreshold;

    // Proximity check to nearby enemies. If TotalApplicableEnemiesThreshold >= value && NearbyEnemyThreshold <= value, then the enemy will NOT go into Snipe mode.
    // This check ensures that some enemies remain within engagement proximity to the target(s).
    // Default: 3. Change with caution and test extensively if you modify it!
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame, meta = (ClampMin = "0", ClampMax = "1000"))
    int32 NearbyEnemyThreshold;
};