#pragma once

// Ascentroid
#include "AscMapKit/Public/Enemy/AscMapKitEnemyPropertiesBehaviorModeAggressiveStruct.h"
#include "AscMapKit/Public/Enemy/AscMapKitEnemyPropertiesBehaviorModePatrolStruct.h"
#include "AscMapKit/Public/Enemy/AscMapKitEnemyPropertiesBehaviorModeReinforcementStruct.h"
#include "AscMapKit/Public/Enemy/AscMapKitEnemyPropertiesBehaviorModeRetreatStruct.h"
#include "AscMapKit/Public/Enemy/AscMapKitEnemyPropertiesBehaviorModeSnipeStruct.h"

// Generated
#include "AscMapKitEnemyPropertiesBehaviorModeStruct.generated.h"

USTRUCT(Blueprintable, BlueprintType)
struct ASCMAPKIT_API FAscMapKitEnemyPropertiesBehaviorModeStruct
{
    GENERATED_BODY()

    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    FAscMapKitEnemyPropertiesBehaviorModeAggressiveStruct Aggressive;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    FAscMapKitEnemyPropertiesBehaviorModePatrolStruct Patrol;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    FAscMapKitEnemyPropertiesBehaviorModeReinforcementStruct Reinforcement;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    FAscMapKitEnemyPropertiesBehaviorModeRetreatStruct Retreat;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    FAscMapKitEnemyPropertiesBehaviorModeSnipeStruct Snipe;
};