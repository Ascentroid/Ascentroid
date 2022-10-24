#pragma once

// Ascentroid
#include "AscMapKit/Public/Core/Constant/AscMapKitDifficultyInt32Struct.h"
#include "AscMapKit/Public/Enemy/AscMapKitEnemyPropertiesWeaponStruct.h"

// Generated
#include "AscMapKitEnemyPropertiesWeaponsStruct.generated.h"

USTRUCT(Blueprintable, BlueprintType)
struct ASCMAPKIT_API FAscMapKitEnemyPropertiesWeaponsStruct
{
    GENERATED_BODY()

    // Every time the enemy attacks, this percentage value will be used to determine if the attack is a predictive trajectory.
    // * This does not apply to melee enemies.
    // * 0 to 100 (percent)
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    FAscMapKitDifficultyInt32Struct ChanceToAttackWithPrediction;

    // When the enemy uses attack prediction, it will calculate the attack target velocity and estimate lead/distance based on the trajectory.
    // It will also multiply a random range value to the distance calculation so that the prediction has some variety.
    // This is the minimum value for that range.
    // Example 1: 6000 [distance] * (RandomRange(0.25 [min], 0.75 [max]) = 0.33 [random selection]) = 1980
    // Example 2: 6000 [distance] * (RandomRange(0.25 [min], 0.75 [max]) = 0.45 [random selection]) = 2700
    // Example 3: 6000 [distance] * (RandomRange(0.25 [min], 0.75 [max]) = 0.7 [random selection]) = 4200
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    float AttackPredictionDistanceModMinimum;

    // When the enemy uses attack prediction, it will calculate the attack target velocity and estimate lead/distance based on the trajectory.
    // It will also multiply a random range value to the distance calculation so that the prediction has some variety.
    // This is the maximum value for that range.
    // Example 1: 6000 [distance] * (RandomRange(0.25 [min], 0.75 [max]) = 0.33 [random selection]) = 1980
    // Example 2: 6000 [distance] * (RandomRange(0.25 [min], 0.75 [max]) = 0.45 [random selection]) = 2700
    // Example 3: 6000 [distance] * (RandomRange(0.25 [min], 0.75 [max]) = 0.7 [random selection]) = 4200
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    float AttackPredictionDistanceModMaximum;
    
    // If the enemy has multiple weapon sockets, this percentage value will be used to determine the chance that the weapons fire simultaneously.
    // * This does not apply to melee enemies.
    // * 0 to 100 (percent)
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    FAscMapKitDifficultyInt32Struct ChanceToAttackWithMultipleWeapons;

    // How many times to attack when the chance to attack is triggered.
    // * This does not apply to melee enemies.
    // * This is in addition to the first attack. The first attack is always immediate (no delay).
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    FAscMapKitDifficultyInt32Struct AttackMultipleTimes;

    // The minimum range for how long to delay, in second(s), between multiple attacks (when the chance to attack is triggered).
    // * This does not apply to melee enemies.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    float AttackMultipleTimesMinimumDelaySeconds;

    // The maximum range for how long to delay, in second(s), between multiple attacks (when the chance to attack is triggered).
    // * This does not apply to melee enemies.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    float AttackMultipleTimesMaximumDelaySeconds;

    // * This does not apply to melee enemies.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    int32 NumberOfSockets;

    // Depending on how many weapon sockets are configured for this enemy, designate the number of weapon sockets and the weapon type for each here.
    // * This does not apply to melee enemies.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    TArray<FAscMapKitEnemyPropertiesWeaponStruct> Sockets;
};