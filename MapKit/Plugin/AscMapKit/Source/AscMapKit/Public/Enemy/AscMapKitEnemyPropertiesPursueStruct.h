#pragma once

// Generated
#include "AscMapKitEnemyPropertiesPursueStruct.generated.h"

USTRUCT(Blueprintable, BlueprintType)
struct ASCMAPKIT_API FAscMapKitEnemyPropertiesPursueStruct
{
    GENERATED_BODY()

    // The distance for a player to be within range for pursue behavior to engage.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    float TargetDistanceMinimum;

    // The distance for a player to be out of range for pursue behavior to disengage.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    float TargetDistanceMaximum;
};