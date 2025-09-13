#pragma once

// Ascentroid
#include "AscMapKit/Public/Enemy/AscMapKitEnemyPropertiesMovementSpeedMeleeStruct.h"
#include "AscMapKit/Public/Enemy/AscMapKitEnemyPropertiesMovementSpeedToggleStruct.h"

// Generated
#include "AscMapKitEnemyPropertiesMovementSpeedStruct.generated.h"

USTRUCT(Blueprintable, BlueprintType)
struct ASCMAPKIT_API FAscMapKitEnemyPropertiesMovementSpeedStruct
{
    GENERATED_BODY()

    // The enemy will be forced to a maximum movement speed.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame, meta = (ClampMin = "0.0", ClampMax = "999999.9999"))
    float MaxSpeed;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    FAscMapKitEnemyPropertiesMovementSpeedToggleStruct Toggle;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    FAscMapKitEnemyPropertiesMovementSpeedMeleeStruct Melee;
};