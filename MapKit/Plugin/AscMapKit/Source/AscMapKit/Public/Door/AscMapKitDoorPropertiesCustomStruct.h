#pragma once

// Ascentroid
#include "AscMapKit/Public/Door/AscMapKitDoorPropertiesCustomDestructibleStruct.h"
#include "AscMapKit/Public/Door/AscMapKitDoorPropertiesCustomNonDestructibleStruct.h"

// Generated
#include "AscMapKitDoorPropertiesCustomStruct.generated.h"

USTRUCT(Blueprintable, BlueprintType)
struct ASCMAPKIT_API FAscMapKitDoorPropertiesCustomStruct
{
    GENERATED_BODY()

    // An optional static mesh component, used only for previewing the door in the map editor.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    UStaticMesh *StaticMeshPreview;

    // If you need to modify the static mesh preview transform, you can do it here.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    FTransform StaticMeshPreviewRelativeTransform;

    // An optional static mesh material, used only for previewing the door in the map editor.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    UMaterialInterface *StaticMeshPreviewMaterial;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    FAscMapKitDoorPropertiesCustomNonDestructibleStruct NonDestructible;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    FAscMapKitDoorPropertiesCustomDestructibleStruct Destructible;
};