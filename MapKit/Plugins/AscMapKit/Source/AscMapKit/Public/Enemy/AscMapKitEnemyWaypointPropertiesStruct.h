#pragma once

// Generated
#include "AscMapKitEnemyWaypointPropertiesStruct.generated.h"

// todo: I don't know what kind of properties to put here yet

USTRUCT(Blueprintable, BlueprintType)
struct ASCMAPKIT_API FAscMapKitEnemyWaypointPropertiesStruct
{
    GENERATED_BODY()
    
    // Used by the game runtime to identify the enemy type.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    bool Hide;

    // Used by the game runtime to identify the enemy type.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    bool Snipe;
};