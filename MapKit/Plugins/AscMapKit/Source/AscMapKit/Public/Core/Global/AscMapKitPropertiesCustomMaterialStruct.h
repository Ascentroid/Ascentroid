#pragma once

// Generated
#include "AscMapKitPropertiesCustomMaterialStruct.generated.h"

USTRUCT(Blueprintable, BlueprintType)
struct ASCMAPKIT_API FAscMapKitPropertiesCustomMaterialStruct
{
    GENERATED_BODY()

    // If checked, the material for this slot name will be overridden.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    bool OverrideMaterial;

    // The material slot name to override. If not provided, it will attempt to use "Material Index".
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    FString SlotName;

    // If a material slot name is not provided, attempt to override the material by index.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    int32 MaterialIndex;

    // The override material to use.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    UMaterialInterface *Material;
};