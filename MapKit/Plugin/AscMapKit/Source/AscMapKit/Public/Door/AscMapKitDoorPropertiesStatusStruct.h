#pragma once

// Generated
#include "AscMapKitDoorPropertiesStatusStruct.generated.h"

USTRUCT(Blueprintable, BlueprintType)
struct ASCMAPKIT_API FAscMapKitDoorPropertiesStatusStruct
{
    GENERATED_BODY()

    // If checked, the door will be open when spawned at game runtime.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    bool IsOpen;

    // If checked, once the door is opened, it will stay open.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    bool KeepOpen;

    // Delay in seconds before an opened door will close itself.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    float CloseTimeoutSeconds;
};