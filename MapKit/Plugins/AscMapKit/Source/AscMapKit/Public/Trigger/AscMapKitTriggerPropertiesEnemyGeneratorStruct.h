#pragma once

// Generated
#include "AscMapKitTriggerPropertiesEnemyGeneratorStruct.generated.h"

USTRUCT(Blueprintable, BlueprintType)
struct ASCMAPKIT_API FAscMapKitTriggerPropertiesEnemyGeneratorStruct
{
    GENERATED_BODY()

    // A list of environment area IDs for the enemy generators that should be disabled when this operation executes.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    TArray<FString> IdsToDisable;

    // A list of environment area IDs for the enemy generators that should be enabled when this operation executes.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    TArray<FString> IdsToEnable;
};