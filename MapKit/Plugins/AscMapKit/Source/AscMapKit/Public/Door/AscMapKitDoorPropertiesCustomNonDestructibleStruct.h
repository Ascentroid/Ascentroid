#pragma once

// UE4
#include "Runtime/Engine/Classes/Engine/SkeletalMesh.h"

// Ascentroid
#include "AscMapKit/Public/Door/AscMapKitDoorPlayerInteractBoundingBox.h"

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
};