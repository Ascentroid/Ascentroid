#pragma once

// Generated
#include "AscMapKitEnemyPropertiesDodgeStruct.generated.h"

USTRUCT(Blueprintable, BlueprintType)
struct ASCMAPKIT_API FAscMapKitEnemyPropertiesDodgeStruct
{
    GENERATED_BODY()

    // If enabled, this enemy will attempt to dodge incoming player fire.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    bool Enable;

    // On tick, the radius in which the enemy will attempt to identify incoming player fire.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame, meta = (ClampMin = "0.0", ClampMax = "999999.9999"))
    float DistanceRadiusCheck;

    // A percent value in which the enemy may, or may not, dodge. The higher the value, the higher the chance the enemy will dodge.
    // 0 to 100 (percent)
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame, meta = (ClampMin = "0", ClampMax = "100"))
    int32 Chance;

    // The minimum rate at which the chance of dodging calculation is executed. The higher the value, the more often the chance calculation is run.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame, meta = (ClampMin = "0.0", ClampMax = "1000.0"))
    float ChanceCalculationRateMin;

    // The maximum rate at which the chance of dodging calculation is executed. The higher the value, the more often the chance calculation is run.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame, meta = (ClampMin = "0.0", ClampMax = "1000.0"))
    float ChanceCalculationRateMax;

    // The minimum distance in which an incoming projectile could be for dodging to engage.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame, meta = (ClampMin = "0.0", ClampMax = "999999.9999"))
    float DistanceMin;

    // The maximum distance in which an incoming projectile could be for dodging to engage.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame, meta = (ClampMin = "0.0", ClampMax = "999999.9999"))
    float DistanceMax;

    // A randomized offset range (-value, value) to add to the enemy dodge location calculation. The larger the range, the more variety in the resulting dodge location.
    // Please provide a value greater than zero (0).
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame, meta = (ClampMin = "0.0", ClampMax = "999999.9999"))
    float Offset;
};