#pragma once

// Ascentroid
#include "AscMapKit/Public/Door/AscMapKitDoorTypeEnum.h"
#include "AscMapKit/Public/Door/AscMapKitDoorPropertiesDestructibleStruct.h"
#include "AscMapKit/Public/Door/AscMapKitDoorPropertiesLockStruct.h"
#include "AscMapKit/Public/Door/AscMapKitDoorPropertiesNonDestructibleStruct.h"
#include "AscMapKit/Public/Door/AscMapKitDoorPropertiesSecretStruct.h"
#include "AscMapKit/Public/Door/AscMapKitDoorPropertiesStatusStruct.h"
#include "AscMapKit/Public/Door/AscMapKitDoorPropertiesOtherEffectsStruct.h"

// Generated
#include "AscMapKitDoorPropertiesStruct.generated.h"

USTRUCT(Blueprintable, BlueprintType)
struct ASCMAPKIT_API FAscMapKitDoorPropertiesStruct
{
    GENERATED_BODY()

    // Used by the game runtime to identify the door type.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    EAscMapKitDoorTypeEnum DoorType;

    // Used by the game runtime to display the door name. This is used for HUD messages.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    FString DisplayName;
    
    // Used by the game runtime to identify this door. This is required and must be unique per door.
    // * If door IDs are not set, or not unique, the game logs should provide an error message.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    FString Id;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    FAscMapKitDoorPropertiesStatusStruct Status;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    FAscMapKitDoorPropertiesLockStruct Lock;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    FAscMapKitDoorPropertiesSecretStruct Secret;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    FAscMapKitDoorPropertiesNonDestructibleStruct NonDestructible;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    FAscMapKitDoorPropertiesDestructibleStruct Destructible;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    FAscMapKitDoorPropertiesOtherEffectsStruct OtherEffects;
};