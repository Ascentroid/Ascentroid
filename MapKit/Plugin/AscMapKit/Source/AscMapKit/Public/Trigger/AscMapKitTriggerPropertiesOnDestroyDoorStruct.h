#pragma once

// Generated
#include "AscMapKitTriggerPropertiesOnDestroyDoorStruct.generated.h"

USTRUCT(Blueprintable, BlueprintType)
struct ASCMAPKIT_API FAscMapKitTriggerPropertiesOnDestroyDoorStruct
{
    GENERATED_BODY()

    // Check this if you want the trigger to destroy destructible door(s).
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    bool Enable;

    // A delay in seconds before the destructible door(s) are destroyed.
    // * This is helpful in case you have effects you want to execute before the operation is performed.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    float DelaySeconds;

    // A list of destructible door IDs that should be destroyed when this operation executes.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    TArray<FString> DoorIdsToDestroy;

    // Check this if you want to show a HUD message when the trigger destroys destructible door(s).
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    bool ShowHudMessage;

    // If you want to provide a custom HUD message, use this field.
    // * If left empty, the game will generate a message at runtime.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    FString CustomHudMessage;
};