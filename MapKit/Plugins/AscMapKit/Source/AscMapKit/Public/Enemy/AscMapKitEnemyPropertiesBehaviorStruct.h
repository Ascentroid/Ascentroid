#pragma once

// Ascentroid
#include "AscMapKit/Public/Enemy/AscMapKitEnemyBehaviorModeEnum.h"
#include "AscMapKit/Public/Enemy/AscMapKitEnemyPropertiesBehaviorModeStruct.h"

// Generated
#include "AscMapKitEnemyPropertiesBehaviorStruct.generated.h"

USTRUCT(Blueprintable, BlueprintType)
struct ASCMAPKIT_API FAscMapKitEnemyPropertiesBehaviorStruct
{
    GENERATED_BODY()

    // The enemy will be in this mode when the game starts up.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    EAscMapKitEnemyBehaviorModeEnum InitialMode;

    // How long, in second(s), to reset the enemy to idle if nothing is keeping the enemy aware/active.
    // Idle enemies are good for performance, because it lowers the enemy tick rate in the game engine.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame, meta = (ClampMin = "0.0", ClampMax = "60.0"))
    float ResetToIdleSeconds;

    // If true, this enemy can open unlocked doors (either by bumping into it, or shooting it).
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    bool CanOpenUnlockedDoors;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    FAscMapKitEnemyPropertiesBehaviorModeStruct Modes;
};