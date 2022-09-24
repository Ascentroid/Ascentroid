#pragma once

// Ascentroid
#include "AscMapKit/Public/Destructible/AscMapKitDestructiblePropertiesStruct.h"
#include "AscMapKit/Public/Enemy/AscMapKitEnemyDefaultGameRuntimeBoundingBox.h"
#include "AscMapKit/Public/Enemy/AscMapKitEnemyPropertiesColorsStruct.h"
#include "AscMapKit/Public/Enemy/AscMapKitEnemyPropertiesDodgeStruct.h"
#include "AscMapKit/Public/Enemy/AscMapKitEnemyPropertiesHowlersStruct.h"
#include "AscMapKit/Public/Enemy/AscMapKitEnemyPropertiesMeleeStruct.h"
#include "AscMapKit/Public/Enemy/AscMapKitEnemyPropertiesOtherEffectsStruct.h"
#include "AscMapKit/Public/Enemy/AscMapKitEnemyPropertiesPointsStruct.h"
#include "AscMapKit/Public/Enemy/AscMapKitEnemyPropertiesPowerupStruct.h"
#include "AscMapKit/Public/Enemy/AscMapKitEnemyPropertiesPursueStruct.h"
#include "AscMapKit/Public/Enemy/AscMapKitEnemyPropertiesSplashDamageStruct.h"
#include "AscMapKit/Public/Enemy/AscMapKitEnemyPropertiesStatusStruct.h"
#include "AscMapKit/Public/Enemy/AscMapKitEnemyPropertiesStunStruct.h"
#include "AscMapKit/Public/Enemy/AscMapKitEnemyPropertiesTargetingStruct.h"
#include "AscMapKit/Public/Enemy/AscMapKitEnemyPropertiesTurretStruct.h"
#include "AscMapKit/Public/Enemy/AscMapKitEnemyPropertiesWeaponsStruct.h"
#include "AscMapKit/Public/Enemy/AscMapKitEnemyTypeEnum.h"

// Generated
#include "AscMapKitEnemyPropertiesStruct.generated.h"

USTRUCT(Blueprintable, BlueprintType)
struct ASCMAPKIT_API FAscMapKitEnemyPropertiesStruct
{
    GENERATED_BODY()

    // The game runtime default collision size of this enemy. This is to give you an idea of the default enemy bounding box dimensions.
    // * We cannot distribute the 3D mesh data in the map kit because the majority of them are commercially licensed art assets.
    // * Manually changing these values will have no effect on the game runtime. This is purely for editor visual assistance.
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
    UAscMapKitEnemyDefaultGameRuntimeBoundingBox *DefaultGameRuntimeBoundingBox;

    // Used by the game runtime to identify the enemy type.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    EAscMapKitEnemyTypeEnum EnemyType;

    // Used by the game runtime to display the enemy name.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    FString DisplayName;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    FAscMapKitEnemyPropertiesStatusStruct Status;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    FAscMapKitEnemyPropertiesColorsStruct Colors;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    FAscMapKitDestructiblePropertiesStruct Destructible;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    FAscMapKitEnemyPropertiesMeleeStruct Melee;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    FAscMapKitEnemyPropertiesTurretStruct Turret;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    FAscMapKitEnemyPropertiesWeaponsStruct Weapons;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    FAscMapKitEnemyPropertiesPointsStruct Points;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    FAscMapKitEnemyPropertiesTargetingStruct Targeting;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    FAscMapKitEnemyPropertiesPursueStruct Pursue;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    FAscMapKitEnemyPropertiesDodgeStruct Dodge;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    FAscMapKitEnemyPropertiesStunStruct Stun;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    FAscMapKitEnemyPropertiesSplashDamageStruct SplashDamage;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    FAscMapKitEnemyPropertiesHowlersStruct Howlers;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    FAscMapKitEnemyPropertiesPowerupStruct Powerups;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    FAscMapKitEnemyPropertiesOtherEffectsStruct OtherEffects;
};