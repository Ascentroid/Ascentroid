#pragma once

// Generated
#include "AscMapKitTriggerPropertiesResetReusableTriggersRuleStruct.generated.h"

USTRUCT(Blueprintable, BlueprintType)
struct ASCMAPKIT_API FAscMapKitTriggerPropertiesResetReusableTriggersRuleStruct
{
    GENERATED_BODY()

    // The trigger ID to reset.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    FString TriggerId;

    // If checked, the trigger will be reset to it's original state (all rules reset).
    // * The "Rule ID" entry will be ignored if this is checked, as well as any HUD message(s).
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    bool ResetToOriginalState;

    // The trigger rule ID to reset to.
    // * Any trigger rules after this rule will also be reset.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    FString RuleId;

    // Check this if you want to show a HUD message when the trigger is reset.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    bool ShowHudMessage;

    // If you want to provide a custom HUD message, use this field.
    // * If left empty, the game will generate a message at runtime.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    FString CustomHudMessage;
};