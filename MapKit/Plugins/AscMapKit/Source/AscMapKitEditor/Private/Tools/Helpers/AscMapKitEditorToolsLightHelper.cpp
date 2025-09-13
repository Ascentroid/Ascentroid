#include "AscMapKitEditor/Public/Tools/Helpers/AscMapKitEditorToolsLightHelper.h"

// UE
#include "Runtime/Engine/Classes/Components/PointLightComponent.h"
#include "Runtime/Engine/Classes/Components/RectLightComponent.h"
#include "Runtime/Engine/Classes/Components/SpotLightComponent.h"

void UAscMapKitEditorToolsLightHelper::SetPointLightDefaults(
	APointLight *LightActor,
	const EAscMapKitMaterialEmitColorTypeEnum &Color,
	const float &Intensity,
	const bool &bShadows,
	const bool &bFog)
{
	if (LightActor && LightActor->PointLightComponent) 
	{
		LightActor->SetMobility(bFog ? EComponentMobility::Stationary : EComponentMobility::Static);

		LightActor->PointLightComponent->Intensity = Intensity; //bShadows ? 3.f : 0.75f;
		LightActor->PointLightComponent->AttenuationRadius = bShadows ? 10000.f : 3000.f;
		LightActor->PointLightComponent->CastShadows = bShadows;
		LightActor->PointLightComponent->IntensityUnits = ELightUnits::Unitless;
		LightActor->PointLightComponent->bUseInverseSquaredFalloff = false;
		LightActor->PointLightComponent->SpecularScale = 0.f;
		LightActor->PointLightComponent->CastStaticShadows = bShadows;
		LightActor->PointLightComponent->CastDynamicShadows = false;
		LightActor->PointLightComponent->ShadowResolutionScale = 0.f;
		LightActor->PointLightComponent->bAffectTranslucentLighting = false;
		LightActor->PointLightComponent->bCastRaytracedShadow = false;
		LightActor->PointLightComponent->bAffectReflection = false;
		LightActor->PointLightComponent->bAffectGlobalIllumination = false;
		LightActor->PointLightComponent->LightColor = GetLightColorAsFColor(Color);

		if (bFog)
		{
			LightActor->PointLightComponent->VolumetricScatteringIntensity = 15.f;
			LightActor->PointLightComponent->bCastVolumetricShadow = true;
		}

		LightActor->PointLightComponent->Modify();
		LightActor->Modify();

		LightActor->PointLightComponent->PostEditChange();
		LightActor->PostEditChange();

		LightActor->MarkPackageDirty();
	}
}

void UAscMapKitEditorToolsLightHelper::SetRectangularLightDefaults(
	ARectLight *LightActor,
	const EAscMapKitMaterialEmitColorTypeEnum &Color,
	const float &Intensity,
	const bool &bShadows,
	const bool &bFog,
	const bool &bCaustic,
	UMaterialInterface *CausticMaterial)
{
	if (LightActor && LightActor->RectLightComponent) 
	{
		LightActor->SetMobility(bCaustic || bFog ? EComponentMobility::Stationary : EComponentMobility::Static);

		LightActor->RectLightComponent->Intensity = Intensity; //bCaustic ? 1590.f : bFog ? 500.f : bShadows ? 250.f : 150.f;
		LightActor->RectLightComponent->AttenuationRadius = 5000.f;
		LightActor->RectLightComponent->SourceWidth = 2000.f;
		LightActor->RectLightComponent->SourceHeight = 350.f;
		LightActor->RectLightComponent->BarnDoorAngle = 90.f;
		LightActor->RectLightComponent->CastShadows = bShadows;
		LightActor->RectLightComponent->IntensityUnits = ELightUnits::Candelas;
		LightActor->RectLightComponent->SpecularScale = 0.f;
		LightActor->RectLightComponent->ShadowBias = 1.f;
		LightActor->RectLightComponent->ShadowSlopeBias = 4.f;
		LightActor->RectLightComponent->CastStaticShadows = bShadows;
		LightActor->RectLightComponent->CastDynamicShadows = false;
		LightActor->RectLightComponent->bAffectTranslucentLighting = false;
		LightActor->RectLightComponent->bCastRaytracedShadow = false;
		LightActor->RectLightComponent->bAffectReflection = false;
		LightActor->RectLightComponent->bAffectGlobalIllumination = false;
		LightActor->RectLightComponent->LightColor = GetLightColorAsFColor(Color);

		if (bFog)
		{
			LightActor->RectLightComponent->VolumetricScatteringIntensity = 20.f;
			LightActor->RectLightComponent->bCastVolumetricShadow = true;
		}

		if (bCaustic && CausticMaterial)
		{
			LightActor->RectLightComponent->LightFunctionMaterial = CausticMaterial;
			LightActor->RectLightComponent->LightFunctionScale = FVector(1024.f, 1024.f, 1024.f);
			LightActor->RectLightComponent->LightFunctionFadeDistance = 10000000.f;
		}

		LightActor->RectLightComponent->Modify();
		LightActor->Modify();

		LightActor->RectLightComponent->PostEditChange();
		LightActor->PostEditChange();

		LightActor->MarkPackageDirty();
	}
}

void UAscMapKitEditorToolsLightHelper::SetSpotLightDefaults(
	ASpotLight *LightActor,
	const EAscMapKitMaterialEmitColorTypeEnum &Color,
	const float &Intensity,
	const bool &bShadows,
	const bool &bFog,
	const bool &bCaustic,
	UMaterialInterface *CausticMaterial)
{
	if (LightActor && LightActor->SpotLightComponent) 
	{
		LightActor->SetMobility(bCaustic || bFog ? EComponentMobility::Stationary : EComponentMobility::Static);

		LightActor->SpotLightComponent->Intensity = Intensity; //bCaustic ? 3000000.f : bFog ? 3000.f : bShadows ? 3.f : 0.75f;
		LightActor->SpotLightComponent->AttenuationRadius = 2500.f;
		LightActor->SpotLightComponent->InnerConeAngle = bFog ? 10.f : 0.f;
		LightActor->SpotLightComponent->OuterConeAngle = bCaustic ? 100.f : 45.f;
		LightActor->SpotLightComponent->SourceLength = bFog ? 0.5f : 0.f;
		LightActor->SpotLightComponent->CastShadows = bShadows;
		LightActor->SpotLightComponent->IntensityUnits = ELightUnits::Unitless;
		LightActor->SpotLightComponent->bUseInverseSquaredFalloff = false;
		LightActor->SpotLightComponent->SpecularScale = 0.f;
		LightActor->SpotLightComponent->ShadowBias = 1.f;
		LightActor->SpotLightComponent->ShadowSlopeBias = 4.f;
		LightActor->SpotLightComponent->CastStaticShadows = bShadows;
		LightActor->SpotLightComponent->CastDynamicShadows = false;
		LightActor->SpotLightComponent->bAffectTranslucentLighting = false;
		LightActor->SpotLightComponent->bCastRaytracedShadow = false;
		LightActor->SpotLightComponent->bAffectReflection = false;
		LightActor->SpotLightComponent->bAffectGlobalIllumination = false;
		LightActor->SpotLightComponent->LightColor = GetLightColorAsFColor(Color);

		if (bFog)
		{
			LightActor->SpotLightComponent->VolumetricScatteringIntensity = 15.f;
			LightActor->SpotLightComponent->bCastVolumetricShadow = true;
		}

		if (bCaustic && CausticMaterial)
		{
			LightActor->SpotLightComponent->LightFunctionMaterial = CausticMaterial;
			LightActor->SpotLightComponent->LightFunctionScale = FVector(1024.f, 1024.f, 1024.f);
			LightActor->SpotLightComponent->LightFunctionFadeDistance = 100000.f;
		}

		LightActor->SpotLightComponent->Modify();
		LightActor->Modify();

		LightActor->SpotLightComponent->PostEditChange();
		LightActor->PostEditChange();

		LightActor->MarkPackageDirty();
	}
}

FLinearColor UAscMapKitEditorToolsLightHelper::GetLightColorAsFLinearColor(const EAscMapKitMaterialEmitColorTypeEnum &Color)
{
	auto Result = FLinearColor(FColor::FromHex(TEXT("#A8FC00")));

	switch (Color)
	{
		case EAscMapKitMaterialEmitColorTypeEnum::Blue:
			Result = FLinearColor(FColor::FromHex(TEXT("#77A5FC")));
			break;
		case EAscMapKitMaterialEmitColorTypeEnum::BlueDark:
			Result = FLinearColor(FColor::FromHex(TEXT("#1C4CFFFF")));
			break;
		case EAscMapKitMaterialEmitColorTypeEnum::Cyan:
			Result = FLinearColor(FColor::FromHex(TEXT("#3FFFFF")));
			break;
		case EAscMapKitMaterialEmitColorTypeEnum::CyanDark:
			Result = FLinearColor(FColor::FromHex(TEXT("#179B9BFF")));
			break;
		case EAscMapKitMaterialEmitColorTypeEnum::GreenDark:
			Result = FLinearColor(FColor::FromHex(TEXT("#30FF00")));
			break;
		case EAscMapKitMaterialEmitColorTypeEnum::Orange:
			Result =  FLinearColor(FColor::FromHex(TEXT("#FFC000")));
			break;
		case EAscMapKitMaterialEmitColorTypeEnum::OrangeDark:
			Result = FLinearColor(FColor::FromHex(TEXT("#D0440CFF")));
			break;
		case EAscMapKitMaterialEmitColorTypeEnum::Purple:
			Result = FLinearColor(FColor::FromHex(TEXT("#FF30FF")));
			break;
		case EAscMapKitMaterialEmitColorTypeEnum::PurpleDark:
			Result = FLinearColor(FColor::FromHex(TEXT("#B424B4FF")));
			break;
		case EAscMapKitMaterialEmitColorTypeEnum::Red:
			Result = FLinearColor(FColor::FromHex(TEXT("#FF3F3F")));
			break;
		case EAscMapKitMaterialEmitColorTypeEnum::RedDark:
			Result = FLinearColor(FColor::FromHex(TEXT("#FF2626")));
			break;
		case EAscMapKitMaterialEmitColorTypeEnum::White:
			Result = FLinearColor::White;
			break;
		case EAscMapKitMaterialEmitColorTypeEnum::Yellow:
			Result = FLinearColor(FColor::FromHex(TEXT("#FFFF3F")));
			break;
		case EAscMapKitMaterialEmitColorTypeEnum::YellowDark:
			Result = FLinearColor(FColor::FromHex(TEXT("#C2C21EFF")));
			break;
	}

	return Result;
}

FColor UAscMapKitEditorToolsLightHelper::GetLightColorAsFColor(const EAscMapKitMaterialEmitColorTypeEnum &Color)
{
	return GetLightColorAsFLinearColor(Color).ToFColor(true);
}
