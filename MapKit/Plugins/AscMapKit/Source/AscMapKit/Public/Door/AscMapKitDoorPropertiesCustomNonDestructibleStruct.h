#pragma once

// UE4
#include "Runtime/Engine/Classes/Engine/SkeletalMesh.h"

// Ascentroid
#include "AscMapKit/Public/Door/AscMapKitDoorPlayerInteractBoundingBox.h"
#include "AscMapKit/Public/Door/AscMapKitDoorPropertiesCustomMaterialStruct.h"

// Generated
#include "AscMapKitDoorPropertiesCustomNonDestructibleStruct.generated.h"

USTRUCT(Blueprintable, BlueprintType)
struct ASCMAPKIT_API FAscMapKitDoorPropertiesCustomNonDestructibleStruct
{
    GENERATED_BODY()

    // The game runtime player interact collision size of this door. This is to give you an idea of the player interact bounding box dimensions.
    // * This is purely for editor visual assistance. To change the size, edit the "Player Interact Bounding Box Extent" (the next property).
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
    UAscMapKitDoorPlayerInteractBoundingBox *PlayerInteractBoundingBox;

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

    // If this is unchecked and no bone names are provided for "Toggle Collision Bone Names", the game runtime will automatically try to detect and behave upon collision toggling on bone names "DoorLeft" and "DoorRight".
    // * If "Disable Entire Collision On Open" is checked, it will take precedence over this setting.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    bool DisableDefaultToggleCollisionBoneNames;

    // If "Disable Default Toggle Collision Bone Names" is checked, this property value will delay the collision changes in second(s).
    // * If set to zero (or less), the changes will occur immediately.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    float DisableDefaultToggleCollisionBoneNamesDelaySeconds;

    // Provide a list of bone names to toggle collision for when the door opens (disables collision on these bones), and closes (enables collision on these bones).
    // * If no bone names are provided, the game runtime will automatically try to detect and behave upon bone names "DoorLeft" and "DoorRight".
    // * To disable this, check "Disable Default Toggle Collision Bone Names".
    // * The values provided here are case sensitive.
    // * Currently, only box shapes are supported. This may change in the future.
    // * If "Disable Entire Collision On Open" is checked, it will take precendence over this setting.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    TArray<FString> ToggleCollisionBoneNames;
    
    // The animation blueprint used for the door. The parent class must be UAscMapKitDoorAnimInstance.
    // * todo: See online documentation for more details.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    UClass *AnimationBlueprintClass;

    // The skeletal mesh for the door. This must have a physics asset, otherwise collision will not work. This is your responsibility to setup. The scale must also be correct.
    // * todo: See online documentation for more details.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    USkeletalMesh *SkeletalMesh;

    // If you need to modify the skeletal mesh transform, you can do it here.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    FTransform SkeletalMeshRelativeTransform;

    // If you need to override skeletal mesh materials, you can do it here.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    TArray<FAscMapKitDoorPropertiesCustomMaterialStruct> OverrideMaterials;
};