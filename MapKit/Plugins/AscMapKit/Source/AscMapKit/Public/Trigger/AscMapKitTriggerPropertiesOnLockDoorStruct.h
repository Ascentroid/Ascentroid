#pragma once

// Generated
#include "AscMapKitTriggerPropertiesOnLockDoorStruct.generated.h"

USTRUCT(Blueprintable, BlueprintType)
struct ASCMAPKIT_API FAscMapKitTriggerPropertiesOnLockDoorStruct
{
    GENERATED_BODY()

    // Check this if you want the trigger to lock door(s).
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    bool Enable;

    // A delay in seconds before the door(s) are locked.
    // * This is helpful in case you have effects you want to execute before the operation is performed.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    float DelaySeconds;

    // A list of door IDs that should be locked when this operation executes.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    TArray<FString> DoorIdsToLock;

    // If checked, the door will close immediately as it is locked.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    bool CloseDoorWhenLocked;
    
    // Check this if you want to show a HUD message when the trigger locks door(s).
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    bool ShowHudMessage;

    // If you want to provide a custom HUD message, use this field.
    // * If left empty, the game will generate a message at runtime.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    FString CustomHudMessage;
};