#pragma once

// Generated
#include "AscMapKitTriggerPropertiesReusableMaterialsStruct.generated.h"

USTRUCT(Blueprintable, BlueprintType)
struct ASCMAPKIT_API FAscMapKitTriggerPropertiesReusableMaterialsStruct
{
    GENERATED_BODY()

    // The material for the "Not Used" state.
    // * If you are using a custom static mesh, please name the material slot "TriggerState". This is the material that will be replaced.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    UMaterialInterface *NotUsed;

    // The material for the "Used" state.
    // * If you are using a custom static mesh, please name the material slot "TriggerState". This is the material that will be replaced.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    UMaterialInterface *Used;

    // The material for the "Inactive" state.
    // * If you are using a custom static mesh, please name the material slot "TriggerState". This is the material that will be replaced.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    UMaterialInterface *Inactive;
};