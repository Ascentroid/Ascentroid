#include "AscMapKit/Public/Decor/AscMapKitDecorActor.h"

// UE
#include "Engine/CollisionProfile.h"
#include "Runtime/CoreUObject/Public/UObject/ConstructorHelpers.h"

AAscMapKitDecorActor::AAscMapKitDecorActor()
{
    const ConstructorHelpers::FObjectFinder<UStaticMesh> CubeStaticMeshRef(TEXT("StaticMesh'/Engine/BasicShapes/Cube.Cube'"));

    EmptyRootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("EmptyRootComponent"));
	EmptyRootComponent->SetMobility(EComponentMobility::Static);

    RootComponent = EmptyRootComponent;

    StaticMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComponent"));
    StaticMeshComponent->AttachToComponent(RootComponent, FAttachmentTransformRules::KeepRelativeTransform);
	StaticMeshComponent->SetMobility(EComponentMobility::Static);
    StaticMeshComponent->SetRelativeScale3D(FVector(1.f, 1.f, 1.f));
	StaticMeshComponent->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
	StaticMeshComponent->SetCollisionProfileName(UCollisionProfile::BlockAll_ProfileName);
	StaticMeshComponent->LightmapType = ELightmapType::ForceSurface; // note: necessary, otherwise lightmaps won't bake!!

	StaticMeshDestroyedComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshDestroyedComponent"));
	StaticMeshDestroyedComponent->AttachToComponent(RootComponent, FAttachmentTransformRules::KeepRelativeTransform);
	StaticMeshDestroyedComponent->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
	StaticMeshDestroyedComponent->SetCollisionProfileName(UCollisionProfile::BlockAll_ProfileName);
	StaticMeshDestroyedComponent->SetVisibility(false, true);
	StaticMeshDestroyedComponent->LightmapType = ELightmapType::ForceSurface; // note: necessary, otherwise lightmaps won't bake!!
	
    if (CubeStaticMeshRef.Succeeded())
        StaticMeshComponent->SetStaticMesh(CubeStaticMeshRef.Object);

	MapKit = GetMapKitDefaults();
}

FAscMapKitDecorPropertiesStruct AAscMapKitDecorActor::GetMapKitDefaults()
{
	auto Result = FAscMapKitDecorPropertiesStruct();

	Result.Destructible.ComponentType = EAscMapKitDestructibleComponentTypeEnum::StaticMesh;

	Result.Destructible.StartShields.Easy = 50.f;
	Result.Destructible.StartShields.Moderate = 75.f;
	Result.Destructible.StartShields.Normal = 100.f;
	Result.Destructible.StartShields.Hard = 150.f;
	Result.Destructible.StartShields.Impossible = 200.f;

	Result.Destructible.Disappear.Enable = true;
	Result.Destructible.Disappear.ChanceDisappearOnStart = 50;
	Result.Destructible.Disappear.IterationDelaySeconds = 0.3f;
	Result.Destructible.Disappear.DelaySecondsRangeMin = 1.5f;
	Result.Destructible.Disappear.DelaySecondsRangeMax = 2.5f;
	Result.Destructible.Disappear.EffectsDelaySeconds = 0.5f;
    
	Result.SplashDamage.Enable = false;
	Result.SplashDamage.UseLinearFalloffAmount = true;
	Result.SplashDamage.LinearFalloffAmount.Easy = 30.f;
	Result.SplashDamage.LinearFalloffAmount.Moderate = 40.f;
	Result.SplashDamage.LinearFalloffAmount.Normal = 50.f;
	Result.SplashDamage.LinearFalloffAmount.Hard = 60.f;
	Result.SplashDamage.LinearFalloffAmount.Impossible = 70.f;
	Result.SplashDamage.ImpulseRadius = 3000.f; // todo: may need tweaking
	Result.SplashDamage.ImpulseStrength = 2000.f;
	Result.SplashDamage.ImpulseModifier = 4.f;
	Result.SplashDamage.ImpulseStrengthAgainstEnemy = 2000.f;
	Result.SplashDamage.ImpulseInterpSpeedAgainstEnemy = 3.f;

	return Result;
}