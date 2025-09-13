#pragma once

// Generated
#include "AscMapKitEnemyPropertiesMovementTurnRollStruct.generated.h"

USTRUCT(Blueprintable, BlueprintType)
struct ASCMAPKIT_API FAscMapKitEnemyPropertiesMovementTurnRollStruct
{
    GENERATED_BODY()

    // If enabled, the enemy will apply turn/roll when sliding left/right.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    bool Enable;

    // Default: 3. Change with caution and test extensively if you modify it!
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame, meta = (ClampMin = "0.0", ClampMax = "1000.0"))
    float InterpSpeed;

    // Default: 15. Change with caution and test extensively if you modify it!
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame, meta = (ClampMin = "0.0", ClampMax = "1000.0"))
    float StrengthModifier;

    // The minimum angle for turn/roll to take affect when sliding left.
    // Default: 45. Change with caution and test extensively if you modify it!
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame, meta = (ClampMin = "-360.0", ClampMax = "360.0"))
    float AngleLeftMinimum;

    // The maximum angle for turn/roll to take affect when sliding left.
    // Default: 135. Change with caution and test extensively if you modify it!
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame, meta = (ClampMin = "-360.0", ClampMax = "360.0"))
    float AngleLeftMaximum;

    // The minimum angle for turn/roll to take affect when sliding right.
    // Default: -45. Change with caution and test extensively if you modify it!
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame, meta = (ClampMin = "-360.0", ClampMax = "360.0"))
    float AngleRightMinimum;

    // The maximum angle for turn/roll to take affect when sliding right.
    // Default: -135. Change with caution and test extensively if you modify it!
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame, meta = (ClampMin = "-360.0", ClampMax = "360.0"))
    float AngleRightMaximum;
};