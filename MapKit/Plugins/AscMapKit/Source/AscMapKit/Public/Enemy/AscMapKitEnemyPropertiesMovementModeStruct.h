#pragma once

// Ascentroid
#include "AscMapKit/Public/Enemy/AscMapKitEnemyPropertiesMovementModeBackAwayFromTargetStruct.h"
#include "AscMapKit/Public/Enemy/AscMapKitEnemyPropertiesMovementModeEvadeStruct.h"
#include "AscMapKit/Public/Enemy/AscMapKitEnemyPropertiesMovementModeNormalStruct.h"
#include "AscMapKit/Public/Enemy/AscMapKitEnemyPropertiesMovementModeNotMovingStruct.h"
#include "AscMapKit/Public/Enemy/AscMapKitEnemyPropertiesMovementModeRelativeToTargetStruct.h"
#include "AscMapKit/Public/Enemy/AscMapKitEnemyPropertiesMovementModeSlideAroundTargetStruct.h"
#include "AscMapKit/Public/Enemy/AscMapKitEnemyPropertiesMovementModeSlideRandomStruct.h"

// Generated
#include "AscMapKitEnemyPropertiesMovementModeStruct.generated.h"

USTRUCT(Blueprintable, BlueprintType)
struct ASCMAPKIT_API FAscMapKitEnemyPropertiesMovementModeStruct
{
    GENERATED_BODY()

    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    FAscMapKitEnemyPropertiesMovementModeNotMovingStruct NotMoving;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    FAscMapKitEnemyPropertiesMovementModeNormalStruct Normal;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    FAscMapKitEnemyPropertiesMovementModeRelativeToTargetStruct RelativeToTarget;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    FAscMapKitEnemyPropertiesMovementModeBackAwayFromTargetStruct BackAwayFromTarget;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    FAscMapKitEnemyPropertiesMovementModeSlideAroundTargetStruct SlideAroundTarget;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    FAscMapKitEnemyPropertiesMovementModeSlideRandomStruct SlideRandom;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    FAscMapKitEnemyPropertiesMovementModeEvadeStruct Evade;
};