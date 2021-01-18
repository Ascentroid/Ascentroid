#pragma once

// Ascentroid
#include "AscMapKit/Public/Core/Constant/AscMapKitDifficultyInt32Struct.h"
#include "AscMapKit/Public/Enemy/AscMapKitEnemyPropertiesWeaponStruct.h"

// Generated
#include "AscMapKitEnemyPropertiesWeaponsStruct.generated.h"

USTRUCT(Blueprintable, BlueprintType)
struct ASCMAPKIT_API FAscMapKitEnemyPropertiesWeaponsStruct
{
    GENERATED_BODY()

    // If the enemy has multiple weapon sockets, this percentage value will be used to determine the chance that the weapons fire simultaneously.
    // * 0 to 100 (percent)
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    FAscMapKitDifficultyInt32Struct ChanceToAttackWithMultipleWeapons;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, SaveGame)
    int32 NumberOfSockets;

    // Depending on how many weapon sockets are configured for this enemy, designate the number of weapon sockets and the weapon type for each here.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    TArray<FAscMapKitEnemyPropertiesWeaponStruct> Sockets;
};
