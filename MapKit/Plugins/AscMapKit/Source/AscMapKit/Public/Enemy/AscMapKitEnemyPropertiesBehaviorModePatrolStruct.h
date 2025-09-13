#pragma once

// Generated
#include "AscMapKitEnemyPropertiesBehaviorModePatrolStruct.generated.h"

USTRUCT(Blueprintable, BlueprintType)
struct ASCMAPKIT_API FAscMapKitEnemyPropertiesBehaviorModePatrolStruct
{
    GENERATED_BODY()

    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    bool Enable;

    // A list of vectors in world space which the enemy will patrol to.
    // The list is linear: it will start with the first and proceed one at a time to the end. When it reaches the end, it will reverse direction.
    // A minimum of two vectors are needed, otherwise the enemy will not patrol and automatically switch to Normal mode.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    TArray<FVector> Locations;

    // If this is checked, when the last vector is reached, then the enemy will stop patrolling and will automatically switch to Normal mode.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    bool AutoEnd;
};