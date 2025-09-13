#pragma once

// Generated
#include "AscMapKitEnvironmentAreaTypeEnum.generated.h"

UENUM()
enum class EAscMapKitEnvironmentAreaTypeEnum : uint8
{
    Unknown = 0 UMETA(DisplayName = "Unknown"),
    Acid UMETA(DisplayName = "Acid"),
    Electric UMETA(DisplayName = "Electric"),
    EnemyGenerator UMETA(DisplayName = "Enemy Generator"),
    Lava UMETA(DisplayName = "Lava"),
    Liquid UMETA(DisplayName = "Liquid"),
    PowerStationWithoutEffects UMETA(DisplayName = "Power Station without Effects"),
    PowerStationWithEffects UMETA(DisplayName = "Power Station with Effects"),
    Sludge UMETA(DisplayName = "Sludge"),
    ShieldStationWithoutEffects UMETA(DisplayName = "Shield Station without Effects"),
    ShieldStationWithEffects UMETA(DisplayName = "Shield Station with Effects")
};