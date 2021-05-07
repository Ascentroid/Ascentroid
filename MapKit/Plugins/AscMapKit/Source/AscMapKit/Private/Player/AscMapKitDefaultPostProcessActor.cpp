#include "AscMapKit/Public/Player/AscMapKitDefaultPostProcessActor.h"

AAscMapKitDefaultPostProcessActor::AAscMapKitDefaultPostProcessActor(const FObjectInitializer &ObjectInitializer) : Super(ObjectInitializer)
{
	PostProcessComponent = CreateDefaultSubobject<UPostProcessComponent>(TEXT("PostProcessComponent"));
	PostProcessComponent->SetMobility(EComponentMobility::Static);
	PostProcessComponent->bEnabled = 1;
	PostProcessComponent->bUnbound = 1;
	PostProcessComponent->Priority = 1000.f;
	PostProcessComponent->BlendWeight = 0.5f;

	PostProcessComponent->Settings.bOverride_DepthOfFieldOcclusion = true;
	PostProcessComponent->Settings.DepthOfFieldOcclusion = 0.f;

	PostProcessComponent->Settings.bOverride_BloomIntensity = true;
	PostProcessComponent->Settings.BloomIntensity = 1.5f;

	// 4.26.2 upgrade, removed
	//PostProcessComponent->Settings.bOverride_AutoExposureMinBrightness = true;
	//PostProcessComponent->Settings.AutoExposureMinBrightness = 0.2f;

	// 4.26.2 upgrade, removed
	//PostProcessComponent->Settings.bOverride_AutoExposureMaxBrightness = true;
	//PostProcessComponent->Settings.AutoExposureMaxBrightness = 0.2f;

	PostProcessComponent->Settings.bOverride_DepthOfFieldFstop = true;
	PostProcessComponent->Settings.DepthOfFieldFstop = 32.f;

	PostProcessComponent->Settings.bOverride_LensFlareIntensity = true;
	PostProcessComponent->Settings.LensFlareIntensity = 0.f;

	PostProcessComponent->Settings.bOverride_DepthOfFieldFocalDistance = true;
	PostProcessComponent->Settings.DepthOfFieldFocalDistance = 10000.f;

	PostProcessComponent->Settings.bOverride_DepthOfFieldDepthBlurAmount = true;
	PostProcessComponent->Settings.DepthOfFieldDepthBlurAmount = 0.000001f;

	PostProcessComponent->Settings.bOverride_AmbientOcclusionIntensity = true;
	PostProcessComponent->Settings.AmbientOcclusionIntensity = 0.2f;

	PostProcessComponent->Settings.bOverride_AmbientOcclusionFadeDistance = true;
	PostProcessComponent->Settings.AmbientOcclusionFadeDistance = 100000.f;

	PostProcessComponent->Settings.bOverride_AmbientOcclusionFadeRadius = true;
	PostProcessComponent->Settings.AmbientOcclusionFadeRadius = 50000.f;

	PostProcessComponent->Settings.bOverride_MotionBlurAmount = true;
	PostProcessComponent->Settings.MotionBlurAmount = 0.f;

	PostProcessComponent->Settings.bOverride_MotionBlurMax = true;
	PostProcessComponent->Settings.MotionBlurMax = 0.f;

	PostProcessComponent->Settings.bOverride_MotionBlurPerObjectSize = true;
	PostProcessComponent->Settings.MotionBlurPerObjectSize = 0.f;

	PostProcessComponent->Settings.bOverride_ScreenPercentage = true;
	PostProcessComponent->Settings.ScreenPercentage = 85.f;

	RootComponent = PostProcessComponent;
}
