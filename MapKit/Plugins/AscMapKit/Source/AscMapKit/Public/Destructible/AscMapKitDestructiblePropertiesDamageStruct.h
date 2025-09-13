#pragma once

// Generated
#include "AscMapKitDestructiblePropertiesDamageStruct.generated.h"

USTRUCT(Blueprintable, BlueprintType)
struct ASCMAPKIT_API FAscMapKitDestructiblePropertiesDamageStruct
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

    // If not checked, chunks/pieces will damage at a constant value of [Amount].
    // If checked, chunks/pieces will damage from 0 to [Amount] on a linear scale, depending on the velocity range provided.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    bool ScaleByVelocity;

    // The minimum velocity to perform damage. Chunk/piece velocity, and colliding entity velocity, are added together.
    // [Amount] is considered the maximum damage on the scale (from zero damage).
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    float ScaleByVelocityMin;

    // The maximum velocity to perform damage. Chunk/piece velocity, and colliding entity velocity, are added together.
    // [Amount] is considered the maximum damage on the scale (from zero damage).
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    float ScaleByVelocityMax;
};