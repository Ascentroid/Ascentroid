#pragma once

// Ascentroid
#include "AscMapKit/Public/Enemy/AscMapKitEnemyPropertiesPowerupDropStruct.h"

// Generated
#include "AscMapKitEnemyPropertiesPowerupStruct.generated.h"

USTRUCT(Blueprintable, BlueprintType)
struct ASCMAPKIT_API FAscMapKitEnemyPropertiesPowerupStruct
{
    GENERATED_BODY()

    // By default, the game runtime will drop power powerups (depending on the game difficulty and other settings).
    // If this is checked, it will disable the default game runtime behavior.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    bool DisableDefaultPowerDrops;

    // By default, the game runtime will drop shield powerups (depending on the game difficulty and other settings).
    // If this is checked, it will disable the default game runtime behavior.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    bool DisableDefaultShieldDrops;

    // If this enemy should drop specific types of powerups, configure them here.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    TArray<FAscMapKitEnemyPropertiesPowerupDropStruct> DropPowerupTypes;
};