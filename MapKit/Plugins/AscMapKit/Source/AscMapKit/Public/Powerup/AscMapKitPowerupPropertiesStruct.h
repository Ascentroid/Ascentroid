#pragma once

// Ascentroid
#include "AscMapKit/Public/Powerup/AscMapKitPowerupTypeEnum.h"

// Generated
#include "AscMapKitPowerupPropertiesStruct.generated.h"

USTRUCT(Blueprintable, BlueprintType)
struct ASCMAPKIT_API FAscMapKitPowerupPropertiesStruct
{
    GENERATED_BODY()

    // Used by the game runtime to identify the powerup type.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    EAscMapKitPowerupTypeEnum PowerupType;
};