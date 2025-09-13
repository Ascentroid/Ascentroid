#pragma once

// Ascentroid
#include "AscMapKit/Public/Projectile/AscMapKitProjWeapTypeEnum.h"

// Generated
#include "AscMapKitEnemyPropertiesWeaponStruct.generated.h"

USTRUCT(Blueprintable, BlueprintType)
struct ASCMAPKIT_API FAscMapKitEnemyPropertiesWeaponStruct
{
    GENERATED_BODY()

    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    EAscMapKitProjWeapTypeEnum WeaponType;

    // Only applicable to weapons which have a strength level (lasers).
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame, meta = (ClampMin = "0", ClampMax = "6"))
    int32 WeaponStrengthLevel;

    // The percentage chance (0 to 100) for this weapon to fire.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame, meta = (ClampMin = "0", ClampMax = "100"))
    int32 ChanceToFire;
};