#pragma once

// Ascentroid
#include "AscMapKit/Public/Core/Constant/AscMapKitDifficultyFloatStruct.h"

// Generated
#include "AscMapKitDestructiblePropertiesSplashDamageStruct.generated.h"

USTRUCT(Blueprintable, BlueprintType)
struct ASCMAPKIT_API FAscMapKitDestructiblePropertiesSplashDamageStruct
{
    GENERATED_BODY()

    // If enabled, splash damage to players/other enemies will occur when the destructible explodes.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    bool Enable;
        
    // If enabled, splash damage to players/other enemies when the destructible explodes will use a linear falloff calculation. This is negated if "Use Fixed Amount" is enabled.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    bool UseLinearFalloffAmount;

    // The maximum amount of damage to players/other enemies when the destructible explodes for the linear falloff calculation.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    FAscMapKitDifficultyFloatStruct LinearFalloffAmount;

    // If enabled, splash damage to players/other enemies when the destructible explodes will use a fixed damage amount. This overrides "Use Linear Falloff Amount".
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    bool UseFixedAmount;

    // The amount of damage to players/other enemies when the destructible explodes for the fixed amount.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    FAscMapKitDifficultyFloatStruct FixedAmount;

    // The radius used to apply the splash damage to players/other enemies when the destructible explodes.
    // * 2000 is the size of a cube.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame, meta = (ClampMin = "0.0", ClampMax = "999999.9999"))
    float ImpulseRadius;

    // How much impulse is applied to players during the splash damage effect when the destructible explodes.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame, meta = (ClampMin = "0.0", ClampMax = "999999.9999"))
    float ImpulseStrength;

    // This value is multiplied by the "Impulse Strength", in case there is a need for scaling.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame, meta = (ClampMin = "0.0", ClampMax = "1000.0"))
    float ImpulseModifier;

    // If the actor affected by the splash damage is an enemy, use this impulse strength amount.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame, meta = (ClampMin = "0.0", ClampMax = "999999.9999"))
    float ImpulseStrengthAgainstEnemy;

    // If the actor affected by the splash damage is an enemy, use this interpolation rate while applying the impulse effect. 
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame, meta = (ClampMin = "0.0", ClampMax = "1000.0"))
    float ImpulseInterpSpeedAgainstEnemy;

    // If the actor is hit by a weapon/projectile, and the weapon/projectile does not have splash damage specified, this is the default value used.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame, meta = (ClampMin = "0.0", ClampMax = "999999.9999"))
    float DefaultReceiveImpulseRadius;
    
    // If the actor is hit by a weapon/projectile, and the weapon/projectile does not have splash damage specified, this is the default value used.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame, meta = (ClampMin = "0.0", ClampMax = "999999.9999"))
    float DefaultReceiveImpulseStrength;

    // If the actor is hit by a weapon/projectile, and the weapon/projectile does not have splash damage specified, this is the default value used.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame, meta = (ClampMin = "0.0", ClampMax = "1000.0"))
    float DefaultReceiveImpulseInterpSpeed;
};