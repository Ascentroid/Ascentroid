#pragma once

// Ascentroid
#include "AscMapKit/Public/Decor/AscMapKitDecorPropertiesCustomMaterialStruct.h"

// Generated
#include "AscMapKitDecorPropertiesStruct.generated.h"

USTRUCT(Blueprintable, BlueprintType)
struct ASCMAPKIT_API FAscMapKitDecorPropertiesStruct
{
    GENERATED_BODY()

    // If you need to override static mesh materials, you can do it here.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    TArray<FAscMapKitDecorPropertiesCustomMaterialStruct> OverrideMaterials;
};