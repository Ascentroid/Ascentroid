#include "AscMapKit/Public/Destructible/AscMapKitDestructibleActor.h"

AAscMapKitDestructibleActor::AAscMapKitDestructibleActor()
{
    EmptyRootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("EmptyRootComponent"));
    EmptyRootComponent->SetMobility(EComponentMobility::Static);

    RootComponent = EmptyRootComponent;

    // todo: @reminder: keep defaults in sync with game actor

    MapKit.OverrideOnHitRadius = 5000.f;
    MapKit.OverrideOnHitImpulseStrength = 80000.f;

    MapKit.PlayerDamage.Enable = true;
    MapKit.PlayerDamage.Amount = 3.f;
    MapKit.PlayerDamage.DelaySeconds = 1.f;
    MapKit.PlayerDamage.ScaleByVelocityMin = 1.f;
	MapKit.PlayerDamage.ScaleByVelocityMax = 4500.f;

    MapKit.EnemyDamage.Enable = true;
    MapKit.EnemyDamage.Amount = 3.f;
    MapKit.EnemyDamage.DelaySeconds = 1.f;
	MapKit.EnemyDamage.ScaleByVelocityMin = 1.f;
	MapKit.EnemyDamage.ScaleByVelocityMax = 4500.f;

    MapKit.AllowDestroyByProjectile = true;
    MapKit.DestroyByProjectileStartShieldAmount = 30.f;

    MapKit.Disappear.Enable = true;
    MapKit.Disappear.ChanceDisappearOnStart = 50;
    MapKit.Disappear.IterationDelaySeconds = 0.3f;
    MapKit.Disappear.DelaySecondsRangeMin = 0.3f;
    MapKit.Disappear.DelaySecondsRangeMax = 0.5f;
    MapKit.Disappear.EffectsDelaySeconds = 0.5f;
}