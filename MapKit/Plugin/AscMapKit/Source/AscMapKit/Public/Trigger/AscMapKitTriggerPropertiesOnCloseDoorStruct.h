#pragma once

// Generated
#include "AscMapKitTriggerPropertiesOnCloseDoorStruct.generated.h"

USTRUCT(Blueprintable, BlueprintType)
struct ASCMAPKIT_API FAscMapKitTriggerPropertiesOnCloseDoorStruct
{
    GENERATED_BODY()

    // Check this if you want the trigger to close door(s).
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    bool Enable;

    // A delay in seconds before the door(s) are closed.
    // * This is helpful in case you have effects you want to execute before the operation is performed.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    float DelaySeconds;

    // A list of door IDs that should be closed when this operation executes.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    TArray<FString> DoorIdsToClose;
    
    // Check this if you want to show a HUD message when the trigger closes door(s).
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    bool ShowHudMessage;

    // If you want to provide a custom HUD message, use this field.
    // * If left empty, the game will generate a message at runtime.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    FString CustomHudMessage;
};