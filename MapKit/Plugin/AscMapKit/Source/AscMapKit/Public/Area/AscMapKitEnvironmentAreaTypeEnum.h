#pragma once

// Generated
#include "AscMapKitEnvironmentAreaTypeEnum.generated.h"

UENUM()
enum class EAscMapKitEnvironmentAreaTypeEnum : uint8
{
    Unknown = 0,
    Acid,
    Electric,
    Lava,
    PowerStationWithoutEffects UMETA(DisplayName = "Power Station without Effects"),
    PowerStationWithEffects UMETA(DisplayName = "Power Station with Effects"),
    Water
};