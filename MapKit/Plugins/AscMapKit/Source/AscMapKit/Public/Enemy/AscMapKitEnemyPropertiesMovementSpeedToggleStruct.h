#pragma once

// Generated
#include "AscMapKitEnemyPropertiesMovementSpeedToggleStruct.generated.h"

USTRUCT(Blueprintable, BlueprintType)
struct ASCMAPKIT_API FAscMapKitEnemyPropertiesMovementSpeedToggleStruct
{
    GENERATED_BODY()

    // If enabled, the enemy will speed up and slow down on a random interval.
    // Mutually exsluive to Speed ➜ Melee. Melee trumps Toggle (only if enemy Melee is enabled!).
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    bool Enable;

    // The amount of time when the game runtime toggles between regular speed and faster/variable speed. The selection range is random between minimum and maximum.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame, meta = (ClampMin = "0.0", ClampMax = "1000.0"))
    float IntervalMinimumSeconds;

    // The amount of time when the game runtime toggles between regular speed and faster/variable speed. The selection range is random between minimum and maximum.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame, meta = (ClampMin = "0.0", ClampMax = "1000.0"))
    float IntervalMaximumSeconds;

    // The multiplier applied to speed when the toggle is active. The selection range is random between minimum and maximum.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame, meta = (ClampMin = "0.0", ClampMax = "100.0"))
    float MultiplierTargetMinimum;

    // The multiplier applied to speed when the toggle is active. The selection range is random between minimum and maximum.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame, meta = (ClampMin = "0.0", ClampMax = "100.0"))
    float MultiplierTargetMaximum;

    // The interp speed applied when the toggle is active. The selection range is random between minimum and maximum.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame, meta = (ClampMin = "0.0", ClampMax = "100.0"))
    float MultiplierInterpSpeedMinimum;

    // The interp speed applied when the toggle is active. The selection range is random between minimum and maximum.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame, meta = (ClampMin = "0.0", ClampMax = "100.0"))
    float MultiplierInterpSpeedMaximum;

    // If enabled, the speed multiplier will be applied to the turn/roll (if that is also enabled).
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    bool ApplyToTurnRoll;

    // When the speed mulitiplier is being applied to turn/roll, this is another variable which can help with tuning.
    // Turn Roll Strength *= MultiplierTarget * [this value];
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame, meta = (ClampMin = "0.0", ClampMax = "100.0"))
    float TurnRollMultiplier;
};