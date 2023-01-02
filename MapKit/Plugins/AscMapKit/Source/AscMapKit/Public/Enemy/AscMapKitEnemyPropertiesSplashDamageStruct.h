#pragma once

// Ascentroid
#include "AscMapKit/Public/Core/Constant/AscMapKitDifficultyFloatStruct.h"

// Generated
#include "AscMapKitEnemyPropertiesSplashDamageStruct.generated.h"

USTRUCT(Blueprintable, BlueprintType)
struct ASCMAPKIT_API FAscMapKitEnemyPropertiesSplashDamageStruct
{
    GENERATED_BODY()

    // If enabled, splash damage to players/other enemies will use a linear falloff calculation. This is negated if "Use Fixed Amount" is enabled.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    bool UseLinearFalloffAmount;

    // The maximum amount of damage to players/other enemies for the linear falloff calculation.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    FAscMapKitDifficultyFloatStruct LinearFalloffAmount;

    // If enabled, splash damage to players/other enemies will use a fixed damage amount. This overrides "Use Linear Falloff Amount".
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    bool UseFixedAmount;

    // The amount of damage to players/other enemies for the fixed amount.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    FAscMapKitDifficultyFloatStruct FixedAmount;

    // The radius used to apply the splash damage to players/other enemies.
    // * 2000 is the size of a cube.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    float ImpulseRadius;

    // How much impulse is applied to players during the splash damage effect.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    float ImpulseStrength;

    // This value is multiplied by the "Impulse Strength", in case there is a need for scaling.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    float ImpulseModifier;

    // If the actor affected by the splash damage is an enemy, use this impulse strength amount.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    float ImpulseStrengthAgainstEnemy;

    // If the actor affected by the splash damage is an enemy, use this interpolation rate while applying the impulse effect. 
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    float ImpulseInterpSpeedAgainstEnemy;

    // If the actor is hit by a weapon/projectile, and the weapon/projectile does not have splash damage specified, this is the default value used.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    float DefaultReceiveImpulseRadius;
    
    // If the actor is hit by a weapon/projectile, and the weapon/projectile does not have splash damage specified, this is the default value used.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    float DefaultReceiveImpulseStrength;

    // If the actor is hit by a weapon/projectile, and the weapon/projectile does not have splash damage specified, this is the default value used.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    float DefaultReceiveImpulseInterpSpeed;
};