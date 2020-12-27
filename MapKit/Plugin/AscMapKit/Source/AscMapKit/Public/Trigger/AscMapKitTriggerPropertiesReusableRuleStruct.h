#pragma once

// Ascentroid
#include "AscMapKit/Public/Core/Constant/AscMapKitSoundClassEnum.h"
#include "AscMapKit/Public/Trigger/AscMapKitTriggerReusableStateEnum.h"

// Generated
#include "AscMapKitTriggerPropertiesReusableRuleStruct.generated.h"

USTRUCT(Blueprintable, BlueprintType)
struct ASCMAPKIT_API FAscMapKitTriggerPropertiesReusableRuleStruct
{
    GENERATED_BODY()

    // This ID must be unique per rule, per trigger.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    FString RuleId;
    
    // If the rule hasn't already been completed, and the current state is this.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    EAscMapKitTriggerReusableStateEnum FromState;

    // How many executions are required for this rule. Execution count is tracked internally and compared to this.
    // * Note: these rules will supercede the "On Execute -> Execute Max Count" setting (it will be ignored).
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    int32 ExecutionCountToNextState;

    // When the state and execution count match, the state will be transitioned to this.
    // * If the state is set to Inactive, the activation process will execute for this trigger, then immediately transition to the Inactive state.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    EAscMapKitTriggerReusableStateEnum ToState;

    // Check this if you want to show a HUD message when the rule is match.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    bool ShowHudMessage;

    // If you want to provide a custom HUD message, use this field.
    // * If left empty, the game will generate a message at runtime.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    FString CustomHudMessage;

    // If a sound cue is not provided, the default game asset will be used at runtime.
    // However, if you disable it here, then no sound cue will be used.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    bool DisableDefaultPlayTransitionStateSoundCue;

    // Specify a custom sound to play as when this trigger rule transitions state. Leave empty for game runtime default.
    // * For example: for an electronic beep sound.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    USoundBase *PlayTransitionStateSoundCue;

    // Specify a custom game runtime sound class for the transition sound. If set to "Default", it will use the game runtime default (sound class "SFX").
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    EAscMapKitSoundClassEnum PlayTransitionStateSoundCueSoundClass;
    
    UPROPERTY(SaveGame)
    int32 CurrentExecutionCount;
};