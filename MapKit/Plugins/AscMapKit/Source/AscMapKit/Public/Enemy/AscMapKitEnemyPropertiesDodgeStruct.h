#pragma once

// Generated
#include "AscMapKitEnemyPropertiesDodgeStruct.generated.h"

USTRUCT(Blueprintable, BlueprintType)
struct ASCMAPKIT_API FAscMapKitEnemyPropertiesDodgeStruct
{
    GENERATED_BODY()

    // If enabled, this enemy will attempt to dodge incoming player fire.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    bool Enable;

    // On tick, the radius in which the enemy will attempt to identify incoming player fire.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    float DistanceRadiusCheck;

    // A percent value in which the enemy may, or may not, dodge. The higher the value, the higher the chance the enemy will dodge.
    // 0 to 100 (percent)
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    int32 Chance;

    // The minimum distance in which an incoming projectile could be for dodging to engage.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    float DistanceMin;

    // The maximum distance in which an incoming projectile could be for dodging to engage.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    float DistanceMax;
};