#pragma once

// Ascentroid
#include "AscMapKit/Public/Trigger/AscMapKitTriggerDefaultGameRuntimeBoundingBox.h"
#include "AscMapKit/Public/Trigger/AscMapKitTriggerPropertiesCustomStruct.h"
#include "AscMapKit/Public/Trigger/AscMapKitTriggerPropertiesEnemyGeneratorStruct.h"
#include "AscMapKit/Public/Trigger/AscMapKitTriggerPropertiesInvisibleStruct.h"
#include "AscMapKit/Public/Trigger/AscMapKitTriggerPropertiesMakeDoorDestructibleStruct.h"
#include "AscMapKit/Public/Trigger/AscMapKitTriggerPropertiesMakeDoorIndestructibleStruct.h"
#include "AscMapKit/Public/Trigger/AscMapKitTriggerPropertiesOnCloseDoorStruct.h"
#include "AscMapKit/Public/Trigger/AscMapKitTriggerPropertiesOnDestroyDoorStruct.h"
#include "AscMapKit/Public/Trigger/AscMapKitTriggerPropertiesOnExecuteStruct.h"
#include "AscMapKit/Public/Trigger/AscMapKitTriggerPropertiesOnForcefieldChangeStruct.h"
#include "AscMapKit/Public/Trigger/AscMapKitTriggerPropertiesOnInactiveStruct.h"
#include "AscMapKit/Public/Trigger/AscMapKitTriggerPropertiesOnLockDoorStruct.h"
#include "AscMapKit/Public/Trigger/AscMapKitTriggerPropertiesOnOpenDoorStruct.h"
#include "AscMapKit/Public/Trigger/AscMapKitTriggerPropertiesOnUnlockDoorStruct.h"
#include "AscMapKit/Public/Trigger/AscMapKitTriggerPropertiesOtherEffectsStruct.h"
#include "AscMapKit/Public/Trigger/AscMapKitTriggerPropertiesResetReusableTriggersStruct.h"
#include "AscMapKit/Public/Trigger/AscMapKitTriggerPropertiesReusableStruct.h"
#include "AscMapKit/Public/Trigger/AscMapKitTriggerTypeEnum.h"

// Generated
#include "AscMapKitTriggerPropertiesStruct.generated.h"

USTRUCT(Blueprintable, BlueprintType)
struct ASCMAPKIT_API FAscMapKitTriggerPropertiesStruct
{
    GENERATED_BODY()

    // The game runtime default collision size of this trigger. This is to give you an idea of the default trigger bounding box dimensions.
    // * We cannot distribute the 3D mesh data in the map kit because the majority of them are commercially licensed art assets.
    // * Manually changing these values will have no effect on the game runtime. This is purely for editor visual assistance.
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
    UAscMapKitTriggerDefaultGameRuntimeBoundingBox *DefaultGameRuntimeBoundingBox;
    
    // Used by the game runtime to identify the trigger type.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    EAscMapKitTriggerTypeEnum TriggerType;

    // Used by the game runtime to display the trigger name. This is used for HUD messages.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    FString DisplayName;

    // Used by the game runtime to identify this trigger. This is required and must be unique per trigger.
    // * If trigger IDs are not set, or not unique, the game logs should provide an error message.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    FString Id;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    FAscMapKitTriggerPropertiesReusableStruct Reusable;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    FAscMapKitTriggerPropertiesResetReusableTriggersStruct ResetReusableTriggers;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    FAscMapKitTriggerPropertiesInvisibleStruct Invisible;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    FAscMapKitTriggerPropertiesOnExecuteStruct OnExecute;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    FAscMapKitTriggerPropertiesOnInactiveStruct OnInactive;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    FAscMapKitTriggerPropertiesOnForcefieldChangeStruct OnForcefieldChange;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    FAscMapKitTriggerPropertiesOnLockDoorStruct OnLockDoor;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    FAscMapKitTriggerPropertiesOnUnlockDoorStruct OnUnlockDoor;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    FAscMapKitTriggerPropertiesOnOpenDoorStruct OnOpenDoor;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    FAscMapKitTriggerPropertiesOnCloseDoorStruct OnCloseDoor;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    FAscMapKitTriggerPropertiesOnDestroyDoorStruct OnDestroyDoor;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    FAscMapKitTriggerPropertiesMakeDoorDestructibleStruct MakeDoorDestructible;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    FAscMapKitTriggerPropertiesMakeDoorIndestructibleStruct MakeDoorIndestructible;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    FAscMapKitTriggerPropertiesOtherEffectsStruct OtherEffects;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    FAscMapKitTriggerPropertiesCustomStruct Custom;
};