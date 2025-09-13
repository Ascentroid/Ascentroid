#pragma once

// Generated
#include "AscMapKitPropertiesMaterialInfoStruct.generated.h"

USTRUCT(Blueprintable, BlueprintType)
struct ASCMAPKIT_API FAscMapKitPropertiesMaterialInfoStruct
{
    GENERATED_BODY()

    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    FString SlotName;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    int32 MaterialIndex;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    UMaterialInterface *Material;
};