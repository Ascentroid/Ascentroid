#pragma once

// Ascentroid
#include "AscMapKit/Public/Door/AscMapKitDoorPropertiesCustomMaterialStruct.h"

// Generated
#include "AscMapKitDoorPropertiesCustomDestructibleStruct.generated.h"

USTRUCT(Blueprintable, BlueprintType)
struct ASCMAPKIT_API FAscMapKitDoorPropertiesCustomDestructibleStruct
{
    GENERATED_BODY()

    // The static mesh used for the non-destroyed state of the destructible door.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    UStaticMesh *StaticMesh;
   
    // The static mesh used for the destroyed state of the destructible door. 
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    UStaticMesh *StaticMeshDestroyed;

    // If you need to override the static mesh materials, you can do it here.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    TArray<FAscMapKitDoorPropertiesCustomMaterialStruct> OverrideMaterials;

    // If you need to override the destroyed static mesh materials, you can do it here.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    TArray<FAscMapKitDoorPropertiesCustomMaterialStruct> OverrideMaterialsDestroyed;
};