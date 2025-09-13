#pragma once

// UE
#include "Runtime/Engine/Classes/Engine/PointLight.h"
#include "Runtime/Engine/Classes/Engine/RectLight.h"
#include "Runtime/Engine/Classes/Engine/SpotLight.h"
#include "Runtime/Engine/Classes/Materials/MaterialInterface.h"

// Ascentroid
#include "AscMapKit/Public/Core/Constant/AscMapKitMaterialEmitColorTypeEnum.h"

// Generated
#include "AscMapKitEditorToolsLightHelper.generated.h"

UCLASS(Blueprintable, BlueprintType)
class ASCMAPKITEDITOR_API UAscMapKitEditorToolsLightHelper : public UObject
{
	GENERATED_BODY()

public:
	UFUNCTION()
	static void SetPointLightDefaults(
		APointLight *LightActor,
		const EAscMapKitMaterialEmitColorTypeEnum &Color,
		const float &Intensity,
		const bool &bShadows = false,
		const bool &bFog = false
	);

	UFUNCTION()
	static void SetRectangularLightDefaults(
		ARectLight *LightActor,
		const EAscMapKitMaterialEmitColorTypeEnum &Color,
		const float &Intensity,
		const bool &bShadows = false,
		const bool &bFog = false,
		const bool &bCaustic = false,
		UMaterialInterface *CausticMaterial = nullptr
	);

	UFUNCTION()
	static void SetSpotLightDefaults(
		ASpotLight *LightActor,
		const EAscMapKitMaterialEmitColorTypeEnum &Color,
		const float &Intensity,
		const bool &bShadows = false,
		const bool &bFog = false,
		const bool &bCaustic = false,
		UMaterialInterface *CausticMaterial = nullptr
	);

	UFUNCTION()
	static FLinearColor GetLightColorAsFLinearColor(const EAscMapKitMaterialEmitColorTypeEnum &Color);
	
	UFUNCTION()
	static FColor GetLightColorAsFColor(const EAscMapKitMaterialEmitColorTypeEnum &Color);
};