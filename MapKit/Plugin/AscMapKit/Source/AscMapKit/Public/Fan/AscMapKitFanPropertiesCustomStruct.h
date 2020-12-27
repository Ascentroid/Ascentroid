#pragma once

// Generated
#include "AscMapKitFanPropertiesCustomStruct.generated.h"

USTRUCT(Blueprintable, BlueprintType)
struct ASCMAPKIT_API FAscMapKitFanPropertiesCustomStruct
{
    GENERATED_BODY()

    // An optional static mesh component, used only for previewing the fan in the map editor.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    UStaticMesh *StaticMeshPreview;

    // If you need to modify the static mesh preview transform, you can do it here.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    FTransform StaticMeshPreviewRelativeTransform;

    // An optional static mesh material, used only for previewing the fan in the map editor.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    UMaterialInterface *StaticMeshPreviewMaterial;

    // The animation asset used for the fan.
    // * todo: See online documentation for more details.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    UAnimationAsset *AnimationAsset;

    // The skeletal mesh for the fan. This must have a physics asset, otherwise collision will not work. This is your responsibility to setup. The scale must also be correct.
    // * todo: See online documentation for more details.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    USkeletalMesh *SkeletalMesh;

    // If you need to modify the skeletal mesh transform, you can do it here.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    FTransform SkeletalMeshRelativeTransform;
};