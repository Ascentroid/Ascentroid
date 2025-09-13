#pragma once

// Ascentroid
#include "AscMapKit/Public/Door/AscMapKitDoorPropertiesCustomDestructibleStruct.h"
#include "AscMapKit/Public/Door/AscMapKitDoorPropertiesCustomNonDestructibleStruct.h"

// Generated
#include "AscMapKitDoorPropertiesCustomStruct.generated.h"

// todo: should we remove this struct completely?
USTRUCT(Blueprintable, BlueprintType)
struct ASCMAPKIT_API FAscMapKitDoorPropertiesCustomStruct
{
    GENERATED_BODY()

    // // An optional static mesh component, used only for previewing the door in the map editor.
    // UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    // UStaticMesh *StaticMeshPreview;
    //
    // // An optional static mesh material, used only for previewing the door in the map editor.
    // UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    // UMaterialInterface *StaticMeshPreviewMaterial;

    // todo: hopefully this doesn't crash stuff, remove later if all okay
    // UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    // FAscMapKitDoorPropertiesCustomNonDestructibleStruct NonDestructible;
    //
    // UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    // FAscMapKitDoorPropertiesCustomDestructibleStruct Destructible;
};