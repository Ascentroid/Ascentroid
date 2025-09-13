#pragma once

// Ascentroid
#include "AscMapKit/Public/Core/Constant/AscMapKitDifficultyFloatStruct.h"

// Generated
#include "AscMapKitEnemyPropertiesStunStruct.generated.h"

USTRUCT(Blueprintable, BlueprintType)
struct ASCMAPKIT_API FAscMapKitEnemyPropertiesStunStruct
{
    GENERATED_BODY()

    // If enabled, the enemy will be stunned when damaged.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    bool Enable;

    // A percentage (0 to 100) chance for the enemy to become stunned when hit/damaged.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame, meta = (ClampMin = "0", ClampMax = "100"))
    int32 Chance;

    // How long, in seconds, the enemy will be stunned for when damaged.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    FAscMapKitDifficultyFloatStruct ForSeconds;
    
    // How quickly the enemy will recover from being stunned. You may need to tweak this value for the desired effect.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame, meta = (ClampMin = "0.0", ClampMax = "100.0"))
    float SpeedScale;

    // A maximum speed rate for when the enemy is recovering from being stunned. This caps the speed scale value.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame, meta = (ClampMin = "0.0", ClampMax = "1000.0"))
    float MaxSpeed;
};