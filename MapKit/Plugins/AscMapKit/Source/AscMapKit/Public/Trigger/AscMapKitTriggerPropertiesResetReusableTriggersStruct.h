#pragma once

// Ascentroid
#include "AscMapKit/Public/Trigger/AscMapKitTriggerPropertiesEnemyGeneratorStruct.h"
#include "AscMapKit/Public/Trigger/AscMapKitTriggerPropertiesResetReusableTriggersRuleStruct.h"

// Generated
#include "AscMapKitTriggerPropertiesResetReusableTriggersStruct.generated.h"

USTRUCT(Blueprintable, BlueprintType)
struct ASCMAPKIT_API FAscMapKitTriggerPropertiesResetReusableTriggersStruct
{
    GENERATED_BODY()

    // Check this if you want the trigger to reset triggers.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    bool Enable;

    // A delay in seconds before the triggers are reset.
    // * This is helpful in case you have effects you want to execute before the operation is performed.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    float DelaySeconds;

    // A list of reset rules when this operation executes.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    TArray<FAscMapKitTriggerPropertiesResetReusableTriggersRuleStruct> ResetRules;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    FAscMapKitTriggerPropertiesEnemyGeneratorStruct EnemyGenerator;

    // Check this if you want to show a HUD message after all of the trigger rules are executed.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    bool ShowHudMessage;

    // If you want to provide a custom HUD message, use this field.
    // * If left empty, the game will generate a message at runtime.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    FString CustomHudMessage;
};