#pragma once

// Ascentroid
#include "AscMapKit/Public/Core/Global/AscMapKitPropertiesCustomMaterialStruct.h"
#include "AscMapKit/Public/Core/Global/AscMapKitPropertiesMaterialInfoStruct.h"
#include "AscMapKit/Public/Door/AscMapKitDoorPlayerInteractBoundingBox.h"

// Generated
#include "AscMapKitDoorPropertiesNonDestructibleStruct.generated.h"

USTRUCT(Blueprintable, BlueprintType)
struct ASCMAPKIT_API FAscMapKitDoorPropertiesNonDestructibleStruct
{
    GENERATED_BODY()

    // Display the player interact bounding box extent in the editor.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    bool ShowPlayerInteractBoundingBoxExtent;
    
    // The game runtime player interact collision size of this door.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    FVector PlayerInteractBoundingBoxExtent;

    // If for any reason the collision for the door needs to be disabled when it opens, check this option.
    // * UE4 does not currently have a way to disable separate body collision for a skeletal mesh. It might be coming in the future.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    bool DisableEntireCollisionOnOpen;

    // If "Disable Entire Collision On Open" is checked, this property value will delay the collision changes in second(s).
    // * If set to zero (or less), the changes will occur immediately.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    float DisableEntireCollisionOnOpenDelaySeconds;

    // If this is unchecked and no bone names are provided for "Toggle Collision Bone Names", the game runtime will automatically try to detect and behave upon collision toggling on bone names containing "DoorMotion" (case sensitive).
    // * If "Disable Entire Collision On Open" is checked, it will take precedence over this setting.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    bool DisableDefaultToggleCollisionBoneNames;

    // If "Disable Default Toggle Collision Bone Names" is checked, this property value will delay the collision changes in second(s).
    // * If set to zero (or less), the changes will occur immediately.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    float DisableDefaultToggleCollisionBoneNamesDelaySeconds;

    // Provide a list of bone names to toggle collision for when the door opens (disables collision on these bones), and closes (enables collision on these bones).
    // * If no bone names are provided, the game runtime will automatically try to detect and behave upon bone names containing "DoorMotion" (case sensitive).
    // * To disable this, check "Disable Default Toggle Collision Bone Names".
    // * The values provided here are case sensitive.
    // * Currently, only box shapes are supported. This may change in the future.
    // * If "Disable Entire Collision On Open" is checked, it will take precendence over this setting.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    TArray<FString> ToggleCollisionBoneNames;

    // The skeletal mesh material information (in case you want to override anything, please use this list data).
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
    TArray<FAscMapKitPropertiesMaterialInfoStruct> MaterialInfo;

    // If you need to override skeletal mesh materials, you can do it here.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    TArray<FAscMapKitPropertiesCustomMaterialStruct> OverrideMaterials;

    // todo: for custom only, update documentation later
    // The animation blueprint used for the door. The parent class must be UAscMapKitDoorAnimInstance.
    // * todo: See online documentation for more details.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    UClass *AnimationBlueprintClass;

    // todo: for custom only, update documentation later
    // The skeletal mesh for the door. This must have a physics asset, otherwise collision will not work. This is your responsibility to setup. The scale must also be correct.
    // * todo: See online documentation for more details.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    USkeletalMesh *SkeletalMesh;
};