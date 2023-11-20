#pragma once

// Generated
#include "AscMapKitEnvironmentAreaPropertiesLiquidDripsCockpitStruct.generated.h"

USTRUCT(Blueprintable, BlueprintType)
struct ASCMAPKIT_API FAscMapKitEnvironmentAreaPropertiesLiquidDripsCockpitStruct
{
	GENERATED_BODY()

	// Check to enable liquid drips when the player overlap ends.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    bool EnableForPlayerOnOverlapEnd;

	// The rate at which the fade out timer executes.
	UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
	float FadeOutDelaySeconds;

	// The rate at which the refraction is modified every time the timer executes.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    float RefractionFadeOutRate;

	// The rate at which the opacity is modified every time the timer executes.
	UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
	float OpacityFadeOutRate;

	// The initial setting for the material when activated.
	UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
	float RefractionAmount;

	// The initial setting for the material when activated.
	UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
	float OpacityAmount;

	// The initial setting for the material when activated.
	UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
	FLinearColor EmitColor;

	// The initial setting for the material when activated.
	UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
	float EmitColorMultiplier;

	// The initial setting for the material when activated.
	UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
	float BottomLayerFlowSpeed;

	// The initial setting for the material when activated.
	UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
	float BottomMaskFlowSpeed;

	// The initial setting for the material when activated.
	UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
	float GeneralFlowSpeed;

	// The initial setting for the material when activated.
	UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
	float MaskGeneralFlowSpeed;

	// The initial setting for the material when activated.
	UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
	float MiddleLayerFlowSpeed;

	// The initial setting for the material when activated.
	UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
	float MiddleMaskFlowSpeed;

	// The initial setting for the material when activated.
	UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
	float SpecularAmount;

	// The initial setting for the material when activated.
	UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
	float StaticSpeed;

	// The initial setting for the material when activated.
	UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
	float StaticDropOn;

	// The initial setting for the material when activated.
	UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
	float StaticDropSpeed;

	// The initial setting for the material when activated.
	UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
	float TopLayerFlowSpeed;

	// The initial setting for the material when activated.
	UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
	float TopMaskFlowSpeed;

	// The initial setting for the material when activated.
	UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
	float UVMultiplier;
};