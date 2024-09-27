#pragma once

// Ascentroid
#include "AscMapKit/Public/Projectile/AscMapKitProjWeapTypeEnum.h"

// Generated
#include "AscMapKitEnemyPropertiesWeaponStruct.generated.h"

USTRUCT(Blueprintable, BlueprintType)
struct ASCMAPKIT_API FAscMapKitEnemyPropertiesWeaponStruct
{
    GENERATED_BODY()

    // todo
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    EAscMapKitProjWeapTypeEnum WeaponType;

    // todo
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    int32 WeaponStrengthLevel;

    // todo
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    int32 ChanceToFire;
};