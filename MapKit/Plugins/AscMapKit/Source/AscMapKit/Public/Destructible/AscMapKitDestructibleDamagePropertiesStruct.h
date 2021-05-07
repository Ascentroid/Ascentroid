#pragma once

// Generated
#include "AscMapKitDestructibleDamagePropertiesStruct.generated.h"

USTRUCT(Blueprintable, BlueprintType)
struct ASCMAPKIT_API FAscMapKitDestructibleDamagePropertiesStruct
{
    GENERATED_BODY()

    // If checked, the chunks/pieces will damage the entity during collision.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    bool Enable;

    // Amount of damage applied to the entity.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    float Amount;

    // The delay (in seconds) between collisions before applying damage again.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    float DelaySeconds;
};