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

    // Interval in seconds to check if a door should be kept open or not. If not, it will close.
    // This can be adjusted if you want your door to stay open/close faster than usual.
    // Note: This value cannot be less than or equal to zero. If it is, the door will never close.
    // Note: Caution against using very small values here. It could cause terrible performance problems!
    // Note: You may have to experiment with this value when adjusting "Close Timeout Seconds", too.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    float CheckIntervalSeconds;
};