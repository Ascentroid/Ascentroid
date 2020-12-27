#pragma once

// Ascentroid
#include "AscMapKit/Public/Area/AscMapKitEnvironmentAreaPropertiesCollisionStruct.h"
#include "AscMapKit/Public/Area/AscMapKitEnvironmentAreaPropertiesDamageEnemiesStruct.h"
#include "AscMapKit/Public/Area/AscMapKitEnvironmentAreaPropertiesDamagePlayersStruct.h"
#include "AscMapKit/Public/Area/AscMapKitEnvironmentAreaPropertiesDamageSharedStruct.h"
#include "AscMapKit/Public/Area/AscMapKitEnvironmentAreaPropertiesEnemyMovementModifierStruct.h"
#include "AscMapKit/Public/Area/AscMapKitEnvironmentAreaPropertiesOtherEffects.h"
#include "AscMapKit/Public/Area/AscMapKitEnvironmentAreaPropertiesPlayerMovementModifierStruct.h"
#include "AscMapKit/Public/Area/AscMapKitEnvironmentAreaPropertiesPlayerShakingStruct.h"
#include "AscMapKit/Public/Area/AscMapKitEnvironmentAreaPropertiesPowerStationStruct.h"
#include "AscMapKit/Public/Area/AscMapKitEnvironmentAreaPropertiesPowerupMovementModifierStruct.h"
#include "AscMapKit/Public/Area/AscMapKitEnvironmentAreaPropertiesPostProcessStruct.h"
#include "AscMapKit/Public/Area/AscMapKitEnvironmentAreaPropertiesProjectileMovementModifierStruct.h"
#include "AscMapKit/Public/Area/AscMapKitEnvironmentAreaPropertiesSplashDamageStruct.h"
#include "AscMapKit/Public/Area/AscMapKitEnvironmentAreaPropertiesWaterDripsStruct.h"
#include "AscMapKit/Public/Area/AscMapKitEnvironmentAreaTypeEnum.h"

// Generated
#include "AscMapKitEnvironmentAreaPropertiesStruct.generated.h"

USTRUCT(Blueprintable, BlueprintType)
struct ASCMAPKIT_API FAscMapKitEnvironmentAreaPropertiesStruct
{
    GENERATED_BODY()

    // Optional. If you enter an environment area name here, it will be used for HUD messages.
    // This will also override the Damage Event Type (under Damage Shared) used for HUD messages.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    FString EnvironmentAreaName;
    
    // Used by the game runtime to identify the environment area type.
    // * If you specify "Power Station without Effects", the game runtime will force the environment area to behave as a Power Station, and will ignore any custom effects specified from other map kit properties.
    // * If you specify "Power Station with Effects", the game runtime will force the environment area to behave as a Power Station, but you can also apply custom effects specified from other map kit properties.
    // * If you selected a Power Station type, the Power Station option will auto-enable at runtime.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    EAscMapKitEnvironmentAreaTypeEnum EnvironmentAreaType;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    FAscMapKitEnvironmentAreaPropertiesCollisionStruct Collision;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    FAscMapKitEnvironmentAreaPropertiesPowerStationStruct PowerStation;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    FAscMapKitEnvironmentAreaPropertiesPostProcessStruct PostProcess;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    FAscMapKitEnvironmentAreaPropertiesWaterDripsStruct WaterDrips;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    FAscMapKitEnvironmentAreaPropertiesPlayerShakingStruct PlayerShaking;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    FAscMapKitEnvironmentAreaPropertiesPlayerMovementModifierStruct PlayerMovementModifier;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    FAscMapKitEnvironmentAreaPropertiesProjectileMovementModifierStruct ProjectileMovementModifier;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    FAscMapKitEnvironmentAreaPropertiesPowerupMovementModifierStruct PowerupMovementModifier;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    FAscMapKitEnvironmentAreaPropertiesEnemyMovementModifierStruct EnemyMovementModifier;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    FAscMapKitEnvironmentAreaPropertiesDamageSharedStruct DamageShared;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    FAscMapKitEnvironmentAreaPropertiesDamagePlayersStruct DamagePlayers;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    FAscMapKitEnvironmentAreaPropertiesDamageEnemiesStruct DamageEnemies;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    FAscMapKitEnvironmentAreaPropertiesSplashDamageStruct SplashDamage;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    FAscMapKitEnvironmentAreaPropertiesOtherEffects OtherEffects;
};