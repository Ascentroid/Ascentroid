#pragma once

// Ascentroid
#include "AscMapKit/Public/Powerup/AscMapKitPowerupTypeEnum.h"

// Generated
#include "AscMapKitEnemyPropertiesPowerupDropStruct.generated.h"

USTRUCT(Blueprintable, BlueprintType)
struct ASCMAPKIT_API FAscMapKitEnemyPropertiesPowerupDropStruct
{
    GENERATED_BODY()

    // The powerup type to drop.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    EAscMapKitPowerupTypeEnum PowerupType;

    // The amount/number of this powerup type to drop. Singles will be converted to packs, if applicable.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    int32 Amount;
};