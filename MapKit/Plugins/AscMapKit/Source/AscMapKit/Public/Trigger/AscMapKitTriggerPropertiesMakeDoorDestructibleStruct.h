#pragma once

// Generated
#include "AscMapKitTriggerPropertiesMakeDoorDestructibleStruct.generated.h"

USTRUCT(Blueprintable, BlueprintType)
struct ASCMAPKIT_API FAscMapKitTriggerPropertiesMakeDoorDestructibleStruct
{
    GENERATED_BODY()

    // Check this if you want the trigger to make indestructible door(s) destructible.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    bool Enable;

    // A delay in seconds before the door(s) are made destructible.
    // * This is helpful in case you have effects you want to execute before the operation is performed.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    float DelaySeconds;

    // A list of indestructible door IDs that should be made destructible when this operation executes.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    TArray<FString> DoorIdsToMakeDestructible;

    // Check this if you want to show a HUD message when the trigger makes the door(s) destructible.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    bool ShowHudMessage;

    // If you want to provide a custom HUD message, use this field.
    // * If left empty, the game will generate a message at runtime.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    FString CustomHudMessage;
};