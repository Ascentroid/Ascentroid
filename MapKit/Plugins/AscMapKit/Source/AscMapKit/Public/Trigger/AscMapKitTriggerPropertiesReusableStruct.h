#pragma once

// Ascentroid
#include "AscMapKit/Public/Trigger/AscMapKitTriggerReusableStateEnum.h"
#include "AscMapKit/Public/Trigger/AscMapKitTriggerPropertiesReusableRuleStruct.h"
#include "AscMapKit/Public/Trigger/AscMapKitTriggerPropertiesReusableMaterialsStruct.h"

// Generated
#include "AscMapKitTriggerPropertiesReusableStruct.generated.h"

USTRUCT(Blueprintable, BlueprintType)
struct ASCMAPKIT_API FAscMapKitTriggerPropertiesReusableStruct
{
    GENERATED_BODY()

    // Check this if you want the trigger to reusable.
    // * If enabled, only active static mesh components will be used. Inactive mesh components will only be used if a trigger is not reusable.
    // todo: confirm if this is how we want to handle this, though
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    bool Enable;

    // The current state of the reusable trigger.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    EAscMapKitTriggerReusableStateEnum CurrentState;

    // The execution rules for this reusable trigger.
    // * You should set this up in the order they are expected to perform a state transition.
    // * For example: 1) Unused -> 2) Used -> 3) Inactive
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    TArray<FAscMapKitTriggerPropertiesReusableRuleStruct> Rules;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    FAscMapKitTriggerPropertiesReusableMaterialsStruct Materials;

    // If enabled, the inactive static mesh will be used when the trigger state changes to Inactive. It will also use the associated material.
    // If not enabled, only the associated material will be applied. The active static mesh will remain visible.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    bool OnInactiveUseStaticMesh;

    // If enabled, the deactivate sound will be played when this trigger state is transitioned to inactive.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    bool OnInactivePlayDeactivateSound;

    // If enabled, the deactivated sound will be played when this trigger is used while in an inactive state.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    bool OnInactivePlayMessageSound;

    // Check this if you want to show a HUD message when all rules are complete.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    bool ShowHudMessageWhenAllRulesComplete;

    // If you want to provide a custom HUD message, use this field.
    // * If left empty, the game will generate a message at runtime.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    FString CustomHudMessageWhenAllRulesComplete;

    UPROPERTY(SaveGame)
    EAscMapKitTriggerReusableStateEnum OriginalState;
    
    UPROPERTY(SaveGame)
    bool AllRulesComplete;
};