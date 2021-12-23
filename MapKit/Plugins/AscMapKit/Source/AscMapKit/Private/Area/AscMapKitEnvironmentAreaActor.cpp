#include "AscMapKit/Public/Area/AscMapKitEnvironmentAreaActor.h"

AAscMapKitEnvironmentAreaActor::AAscMapKitEnvironmentAreaActor()
{
    EmptyRootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("EmptyRootComponent"));
    EmptyRootComponent->SetMobility(EComponentMobility::Static);

    RootComponent = EmptyRootComponent;

    ArrowComponent = CreateDefaultSubobject<UArrowComponent>(TEXT("ArrowComponent"));
    ArrowComponent->AttachToComponent(RootComponent, FAttachmentTransformRules::KeepRelativeTransform);
    ArrowComponent->SetMobility(EComponentMobility::Static);
    ArrowComponent->ArrowColor = FColor::White;
    ArrowComponent->ArrowSize = 10.f;

    BillboardComponent = CreateDefaultSubobject<UAscMapKitEnvironmentAreaBillboardComponent>(TEXT("BillboardComponent"));
    BillboardComponent->AttachToComponent(RootComponent, FAttachmentTransformRules::KeepRelativeTransform);
    BillboardComponent->SetMobility(EComponentMobility::Static);
    BillboardComponent->SetSprite(nullptr);

    Box = CreateDefaultSubobject<UBoxComponent>(TEXT("Box"));
    Box->AttachToComponent(RootComponent, FAttachmentTransformRules::KeepRelativeTransform);
    Box->SetMobility(EComponentMobility::Static);
    Box->SetRelativeLocation(FVector(0.f, 0.f, 0.f));
    Box->SetBoxExtent(FVector(1000.f, 1000.f, 1000.f));
    Box->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
    Box->SetCollisionProfileName(TEXT("EnvironmentArea"));
    Box->SetWalkableSlopeOverride(FWalkableSlopeOverride(WalkableSlope_Unwalkable, 0.f));
    Box->CanCharacterStepUpOn = ECB_No;
    Box->SetIsReplicated(false);

    StaticMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMesh"));
    StaticMesh->AttachToComponent(RootComponent, FAttachmentTransformRules::KeepRelativeTransform);
    StaticMesh->SetMobility(EComponentMobility::Static);
    StaticMesh->CastShadow = false;
    StaticMesh->bCastStaticShadow = false;
    StaticMesh->bCastDynamicShadow = false;
    StaticMesh->SetEnableGravity(false);
    StaticMesh->SetNotifyRigidBodyCollision(true);
    StaticMesh->SetGenerateOverlapEvents(true);
    StaticMesh->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
    StaticMesh->SetCollisionProfileName(TEXT("EnvironmentArea"));
    StaticMesh->SetWalkableSlopeOverride(FWalkableSlopeOverride(WalkableSlope_Unwalkable, 0.f));
    StaticMesh->CanCharacterStepUpOn = ECB_No;
    StaticMesh->SetIsReplicated(false);

    // todo: @reminder: keep defaults in sync with game actor

    MapKit.PostProcess.PostProcessComponent = CreateDefaultSubobject<UPostProcessComponent>(TEXT("PostProcessComponent"));
    MapKit.PostProcess.PostProcessComponent->AttachToComponent(RootComponent, FAttachmentTransformRules::KeepRelativeTransform);
    MapKit.PostProcess.PostProcessComponent->SetMobility(EComponentMobility::Static);
    MapKit.PostProcess.PostProcessComponent->bEnabled = 0;
    MapKit.PostProcess.PostProcessComponent->bUnbound = 0;

    MapKit.PostProcess.PostProcessComponent->Settings.bOverride_AutoExposureBias = true;
    MapKit.PostProcess.PostProcessComponent->Settings.bOverride_BloomIntensity = true;
    MapKit.PostProcess.PostProcessComponent->Settings.bOverride_BloomThreshold = true;
    MapKit.PostProcess.PostProcessComponent->Settings.bOverride_ColorGamma = true;
    MapKit.PostProcess.PostProcessComponent->Settings.bOverride_ColorSaturation = true;
    MapKit.PostProcess.PostProcessComponent->Settings.bOverride_FilmSaturation = true;
    MapKit.PostProcess.PostProcessComponent->Settings.bOverride_FilmShadowTint = true;
    MapKit.PostProcess.PostProcessComponent->Settings.bOverride_FilmShadowTintAmount = true;
    MapKit.PostProcess.PostProcessComponent->Settings.bOverride_FilmShadowTintBlend = true;
    MapKit.PostProcess.PostProcessComponent->Settings.bOverride_FilmWhitePoint = true;
    MapKit.PostProcess.PostProcessComponent->Settings.bOverride_SceneFringeIntensity = true;
    MapKit.PostProcess.PostProcessComponent->Settings.bOverride_VignetteIntensity = true;

    MapKit.PostProcess.PostProcessComponent->Settings.AutoExposureBias = -2.f;
    MapKit.PostProcess.PostProcessComponent->Settings.BloomIntensity = 10.f;
    MapKit.PostProcess.PostProcessComponent->Settings.BloomThreshold = 0.4f;
    MapKit.PostProcess.PostProcessComponent->Settings.ColorGamma = FVector4(1.5f, 1.5f, 1.5f, 1.f);
    MapKit.PostProcess.PostProcessComponent->Settings.ColorSaturation = FVector4(0.f, 2.f, 1.3f, 1.f);
    MapKit.PostProcess.PostProcessComponent->Settings.FilmSaturation = 0.5f;
    MapKit.PostProcess.PostProcessComponent->Settings.FilmShadowTintAmount = 0.2f;
    MapKit.PostProcess.PostProcessComponent->Settings.FilmShadowTintBlend = 0.2f;
    MapKit.PostProcess.PostProcessComponent->Settings.FilmShadowTint = FLinearColor(0.f, 2.f, 1.3f, 1.f);
    MapKit.PostProcess.PostProcessComponent->Settings.FilmWhitePoint = FLinearColor(0.f, 2.f, 1.3f, 1.f);
    MapKit.PostProcess.PostProcessComponent->Settings.SceneFringeIntensity = 2.f;
    MapKit.PostProcess.PostProcessComponent->Settings.VignetteIntensity = 2.5;

    MapKit.EnvironmentAreaType = EAscMapKitEnvironmentAreaTypeEnum::Water;
    MapKit.Collision.CollisionType = EAscMapKitEnvironmentAreaCollisionTypeEnum::Box;

    MapKit.PostProcess.EnableForPlayer = true;

    MapKit.WaterDrips.EnableForPlayerOnOverlapEnd = true;
    MapKit.WaterDrips.SpecularScale = 0.3f;
    MapKit.WaterDrips.SpecularPower = 100.f;
    MapKit.WaterDrips.SpecularLightDirection = FLinearColor(0.25f, -0.14f, 1.0f, 0.f);
    MapKit.WaterDrips.PreTintFactor = 0.f;
    MapKit.WaterDrips.PreTintColor = FLinearColor::White;
    MapKit.WaterDrips.PostTintFactor = 0.f;
    MapKit.WaterDrips.PostTintMaskPower = 1.f;
    MapKit.WaterDrips.PostTintColor = FLinearColor::White;
    MapKit.WaterDrips.FadeOutDelaySeconds = 0.05f;

    MapKit.WaterDripsCockpit.EnableForPlayerOnOverlapEnd = true;
    MapKit.WaterDripsCockpit.FadeOutDelaySeconds = 0.0025f;
    MapKit.WaterDripsCockpit.RefractionFadeOutRate = 0.001f;
    MapKit.WaterDripsCockpit.OpacityFadeOutRate = 0.002f;
    MapKit.WaterDripsCockpit.RefractionAmount = 1.5f;
    MapKit.WaterDripsCockpit.OpacityAmount = 1.f;
    MapKit.WaterDripsCockpit.EmitColor = FLinearColor(0.f, 1.f, 10.f, 1.f);
    MapKit.WaterDripsCockpit.EmitColorMultiplier = 30.f;
    MapKit.WaterDripsCockpit.BottomLayerFlowSpeed = 0.25f;
    MapKit.WaterDripsCockpit.BottomMaskFlowSpeed = 0.25f;
    MapKit.WaterDripsCockpit.GeneralFlowSpeed = 0.08f;
    MapKit.WaterDripsCockpit.MaskGeneralFlowSpeed = 1.2f;
    MapKit.WaterDripsCockpit.MiddleLayerFlowSpeed = 0.5f;
    MapKit.WaterDripsCockpit.MiddleMaskFlowSpeed = 0.5f;
    MapKit.WaterDripsCockpit.SpecularAmount = 0.f;
    MapKit.WaterDripsCockpit.StaticSpeed = 0.002f;
    MapKit.WaterDripsCockpit.StaticDropOn = 0.f;
    MapKit.WaterDripsCockpit.StaticDropSpeed = 0.5f;
    MapKit.WaterDripsCockpit.TopLayerFlowSpeed = 1.f;
    MapKit.WaterDripsCockpit.TopMaskFlowSpeed = 1.f;
    MapKit.WaterDripsCockpit.UVMultiplier = 0.05681f;

    MapKit.PlayerShaking.Enable = true;
    MapKit.PlayerShaking.Factor = 8.f;

    MapKit.PlayerMovementModifier.Enable = true;
    MapKit.PlayerMovementModifier.VelocityFactor = 0.65f;
    MapKit.PlayerMovementModifier.BoostFactor = 0.65f;
    MapKit.PlayerMovementModifier.RotationFactor = 0.75f;

    MapKit.ProjectileMovementModifier.Enable = true;
    MapKit.ProjectileMovementModifier.Factor = 0.4f;

    MapKit.PowerupMovementModifier.Enable = true;
    MapKit.PowerupMovementModifier.Factor = 0.4f;

    MapKit.EnemyMovementModifier.Enable = true;
    MapKit.EnemyMovementModifier.MaxSpeedFactor = 0.4f;

    MapKit.DestructibleChunkMovementModifier.Enable = true;
    MapKit.DestructibleChunkMovementModifier.Factor = 0.4f;

    MapKit.DamageShared.BeginPlayActivateDamageDelaySeconds = 1.f;

    MapKit.DamagePlayers.Enable = false;
    MapKit.DamageEnemies.Enable = false;

    MapKit.DamagePlayers.Amount = 5.f;
    MapKit.DamageEnemies.Amount = 5.f;

    MapKit.DamagePlayers.RateSeconds = 0.5f;
    MapKit.DamageEnemies.RateSeconds = 0.5f;

    MapKit.SplashDamage.Amount = 10.f;
    MapKit.SplashDamage.Radius = 2000.f;
    MapKit.SplashDamage.Strength = 2000.f;
    MapKit.SplashDamage.Modifier = 1.f;

    MapKit.OtherEffects.ChanceToSpawnOnOverlapAttachParticle = 33.f;

#if WITH_EDITORONLY_DATA
    BillboardComponent->SetEditorScale(8.f);
#endif
}

void AAscMapKitEnvironmentAreaActor::OnConstruction(const FTransform &Transform)
{
    Super::OnConstruction(Transform);
}

#if WITH_EDITOR
void AAscMapKitEnvironmentAreaActor::PostInitializeComponents()
{
    Super::PostInitializeComponents();

    if (BillboardComponent != nullptr)
        BillboardComponent->EditorUpdateEnvironmentAreaType(MapKit.EnvironmentAreaType);
}

void AAscMapKitEnvironmentAreaActor::PostEditChangeProperty(struct FPropertyChangedEvent &PropertyChangedEvent)
{
    Super::PostEditChangeProperty(PropertyChangedEvent);

    const auto PropertyName = PropertyChangedEvent.GetPropertyName().ToString();
    
    if (PropertyName == TEXT("EnvironmentType") && BillboardComponent != nullptr)
        BillboardComponent->EditorUpdateEnvironmentAreaType(MapKit.EnvironmentAreaType);
}
#endif