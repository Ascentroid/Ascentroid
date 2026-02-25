#pragma once

// Generated
#include "AscMapKitDoorPropertiesLockStruct.generated.h"

USTRUCT(Blueprintable, BlueprintType)
struct ASCMAPKIT_API FAscMapKitDoorPropertiesLockStruct
{
    GENERATED_BODY()

    // If checked, this door will be locked.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    bool IsLocked;

    // If checked, the door will allow the player to interact and enter a lock code.
    // * For example: if you have a trigger that unlocks a door without a code, you will want to uncheck this option.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    bool HasCode;

    // If checked, the door lock code will be randomized per campaign game start.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    bool RandomizeCode;

    // If "Randomize Code" is not checked, this value is required. This will be a permanent value used for the door lock code.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    FString Code;

    // If this door code should be associated to any display(s), add the display IDs here.
    // At runtime, the game will automatically populate the codes on the display(s) when necessary.
    // If the door code is different than the display code text, the display value will be overridden by the door code populated/generated here.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    TArray<FString> DisplayIds;

    // A delay in seconds before a door that is just unlocked actually becomes unlocked.
    // * For example: you may want to delay the unlock status in order for a long sound effect to finish playing.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    float OpenLockedDoorDelaySeconds;
};