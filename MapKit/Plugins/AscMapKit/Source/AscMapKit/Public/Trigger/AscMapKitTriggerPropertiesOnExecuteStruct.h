#pragma once

// Generated
#include "AscMapKitTriggerPropertiesOnExecuteStruct.generated.h"

USTRUCT(Blueprintable, BlueprintType)
struct ASCMAPKIT_API FAscMapKitTriggerPropertiesOnExecuteStruct
{
    GENERATED_BODY()

    // The number of times this trigger must be executed before it will be activated and subsequently become inactive.
    // * Less than or equal to zero = infinite execution. Execution will run every time the trigger is activated.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    int32 ExecuteMaxCount;

    // Check this if you want to show a HUD message when the trigger is activated.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    bool ShowHudMessage;

    // If you want to provide a custom HUD message, use this field.
    // * If left empty, the game will generate a message at runtime.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    FString CustomHudMessage;
};