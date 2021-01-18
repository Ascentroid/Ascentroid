#pragma once

// Generated
#include "AscMapKitEnvironmentAreaPropertiesWaterDripsStruct.generated.h"

USTRUCT(Blueprintable, BlueprintType)
struct ASCMAPKIT_API FAscMapKitEnvironmentAreaPropertiesWaterDripsStruct
{
	GENERATED_BODY()

	// Check to enable water drips when the player overlap ends.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    bool EnableForPlayerOnOverlapEnd;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    float SpecularScale;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    float SpecularPower;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    FLinearColor SpecularLightDirection;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    float PreTintFactor;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    FLinearColor PreTintColor;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    float PostTintFactor;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    float PostTintMaskPower;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    FLinearColor PostTintColor;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    float FadeOutDelaySeconds;
};