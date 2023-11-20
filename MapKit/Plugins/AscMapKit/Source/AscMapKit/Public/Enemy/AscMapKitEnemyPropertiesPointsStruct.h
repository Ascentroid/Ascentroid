#pragma once

// Ascentroid
#include "AscMapKit/Public/Core/Constant/AscMapKitDifficultyInt32Struct.h"

// Generated
#include "AscMapKitEnemyPropertiesPointsStruct.generated.h"

USTRUCT(Blueprintable, BlueprintType)
struct ASCMAPKIT_API FAscMapKitEnemyPropertiesPointsStruct
{
    GENERATED_BODY()

    // If enabled, this enemy will have points in single player and cooperative game modes.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    bool Enable;

    // The amount of points for this enemy.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    FAscMapKitDifficultyInt32Struct PointAmount;

    // If enabled, a text effect will display above the enemy when they are destroyed.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    bool EnableTextAboveEnemy;

    // How much to offset the text. Useful in case the enemy bounds conflicts with the default text spawn location.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    FVector TextOffset;

    // How large to make the text bounds. Useful in case the enemy bounds conflicts with the default text spawn location.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    FVector2D TextCanvasSize;

    // Use to increase or decrease the size of the text.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    float TextScale;

    // Use to set the density of the text.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    float TextDensity;

    // How long, in seconds, to display the text before is disappears (is destroyed).
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    float TextAutoDestroySeconds;

    // todo: what was this for? did we want to support this?
    //UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    //UNiagaraSystem *DeathPointsParticle;
};