#pragma once

// Generated
#include "AscMapKitEnemyPropertiesPursueStruct.generated.h"

USTRUCT(Blueprintable, BlueprintType)
struct ASCMAPKIT_API FAscMapKitEnemyPropertiesPursueStruct
{
    GENERATED_BODY()

    // The distance for a player to be within range for pursue behavior to engage.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame, meta = (ClampMin = "0.0", ClampMax = "999999.9999"))
    float TargetDistanceMinimum;

    // A threshold distance in which the enemy will attempt to stop within this range. It will select Target Distance Minimum + FRandom(-Threshold, Threshold). Ignored if zero.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame, meta = (ClampMin = "0.0", ClampMax = "999999.9999"))
    float TargetDistanceMinimumThreshold;

    // The distance for a player to be out of range for pursue behavior to disengage.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame, meta = (ClampMin = "0.0", ClampMax = "999999.9999"))
    float TargetDistanceMaximum;

    // A threshold distance in which the enemy will attempt to stop within this range. It will select Target Distance Maximum + FRandom(-Threshold, Threshold). Ignored if zero.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame, meta = (ClampMin = "0.0", ClampMax = "999999.9999"))
    float TargetDistanceMaximumThreshold;
};