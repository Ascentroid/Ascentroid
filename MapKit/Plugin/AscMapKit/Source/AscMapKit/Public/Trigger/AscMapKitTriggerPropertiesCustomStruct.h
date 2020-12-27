#pragma once

// Generated
#include "AscMapKitTriggerPropertiesCustomStruct.generated.h"

USTRUCT(Blueprintable, BlueprintType)
struct ASCMAPKIT_API FAscMapKitTriggerPropertiesCustomStruct
{
    GENERATED_BODY()

    // An optional static mesh, used only for previewing the door in the map editor.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    UStaticMesh *StaticMeshPreview;

    // If you need to modify the static mesh preview transform, you can do it here.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    FTransform StaticMeshPreviewRelativeTransform;
    
    // An optional static mesh material, used only for previewing the door in the map editor.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    UMaterialInterface *StaticMeshPreviewMaterial;
    
    // The static mesh used by the game runtime when the trigger is active (can be interacted with).
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    UStaticMesh *StaticMeshActive;

    // If you need to modify the static mesh active transform, you can do it here.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    FTransform StaticMeshActiveRelativeTransform;

    // The static mesh used by the game runtime when the trigger is inactive (can no longer be interacted with).
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    UStaticMesh *StaticMeshInactive;

    // If you need to modify the static mesh inactive transform, you can do it here.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    FTransform StaticMeshInactiveRelativeTransform;
};