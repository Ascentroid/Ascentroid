#pragma once

// Generated
#include "AscMapKitEnemyPropertiesHowlersStruct.generated.h"

USTRUCT(Blueprintable, BlueprintType)
struct ASCMAPKIT_API FAscMapKitEnemyPropertiesHowlersStruct
{
    GENERATED_BODY()

    // If enabled, this enemy will be attracted to Howlers.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    bool EnableAttraction;

    // The distance in which the enemy is attracted to a Howler, without the enemy being required to have a line of sight.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    float DistanceLineOfSightNotRequiredRadiusCheck;

    // The distance in which the enemy is attracted to a Howler, with the enemy being required to have a line of sight.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    float DistanceLineOfSightRequiredRadiusCheck;
};