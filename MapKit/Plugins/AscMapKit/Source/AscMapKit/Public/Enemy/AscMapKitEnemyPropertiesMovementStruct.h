#pragma once

// Ascentroid
#include "AscMapKit/Public/Enemy/AscMapKitEnemyPropertiesMovementCollisionStruct.h"
#include "AscMapKit/Public/Enemy/AscMapKitEnemyPropertiesMovementModeStruct.h"
#include "AscMapKit/Public/Enemy/AscMapKitEnemyPropertiesMovementSpeedStruct.h"
#include "AscMapKit/Public/Enemy/AscMapKitEnemyPropertiesMovementTurnRollStruct.h"

// Generated
#include "AscMapKitEnemyPropertiesMovementStruct.generated.h"

USTRUCT(Blueprintable, BlueprintType)
struct ASCMAPKIT_API FAscMapKitEnemyPropertiesMovementStruct
{
    GENERATED_BODY()

    // If checked, the enemy will not move from its original position.
    // This, essentially, disables pathfinding, but targeting and rotation will still function.
    // If checked, this supercedes *all* movement settings.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    bool DisablePathfinding;

    // The percentage in which an enemy will "stay" in its original position (or close to it).
    // The lower the number, the more likely the enemy will stay in original position.
    // The higher the number, the more likely the enemy will leave and travel away from its original position.
    // Not applicable to turrets or melee enemies. This will be ignored for those enemy types.
    // todo: this is not implemented yet
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    int32 StickinessPercentage;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    FAscMapKitEnemyPropertiesMovementSpeedStruct Speed;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    FAscMapKitEnemyPropertiesMovementCollisionStruct Collision;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    FAscMapKitEnemyPropertiesMovementTurnRollStruct TurnRoll;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    FAscMapKitEnemyPropertiesMovementModeStruct Modes;
};