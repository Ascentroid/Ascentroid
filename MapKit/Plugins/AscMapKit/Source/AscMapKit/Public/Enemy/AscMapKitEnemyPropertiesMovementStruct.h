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

    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    FAscMapKitEnemyPropertiesMovementSpeedStruct Speed;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    FAscMapKitEnemyPropertiesMovementCollisionStruct Collision;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    FAscMapKitEnemyPropertiesMovementTurnRollStruct TurnRoll;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    FAscMapKitEnemyPropertiesMovementModeStruct Modes;
};