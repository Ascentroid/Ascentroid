#include "AscMapKit/Public/Area/AscMapKitEnvironmentAreaActor.h"

// UE
#include "Runtime/Engine/Classes/Kismet/KismetSystemLibrary.h"

AAscMapKitEnvironmentAreaActor::AAscMapKitEnvironmentAreaActor()
{
#if WITH_EDITOR
    PrimaryActorTick.bCanEverTick = true;
    PrimaryActorTick.bStartWithTickEnabled = true;
#else
    PrimaryActorTick.bCanEverTick = false;
    PrimaryActorTick.bStartWithTickEnabled = false;
    PrimaryActorTick.bAllowTickOnDedicatedServer = false;
#endif

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

    MapKit.EnvironmentAreaType = EAscMapKitEnvironmentAreaTypeEnum::Liquid;
    MapKit.Collision.CollisionType = EAscMapKitEnvironmentAreaCollisionTypeEnum::Box;

    MapKit.PostProcess.EnableForPlayer = true;

    MapKit.LiquidDrips.EnableForPlayerOnOverlapEnd = true;
    MapKit.LiquidDrips.SpecularScale = 0.3f;
    MapKit.LiquidDrips.SpecularPower = 100.f;
    MapKit.LiquidDrips.SpecularLightDirection = FLinearColor(0.25f, -0.14f, 1.0f, 0.f);
    MapKit.LiquidDrips.PreTintFactor = 0.f;
    MapKit.LiquidDrips.PreTintColor = FLinearColor::White;
    MapKit.LiquidDrips.PostTintFactor = 0.f;
    MapKit.LiquidDrips.PostTintMaskPower = 1.f;
    MapKit.LiquidDrips.PostTintColor = FLinearColor::White;
    MapKit.LiquidDrips.FadeOutDelaySeconds = 0.05f;

    MapKit.LiquidDripsCockpit.EnableForPlayerOnOverlapEnd = true;
    MapKit.LiquidDripsCockpit.FadeOutDelaySeconds = 0.0025f;
    MapKit.LiquidDripsCockpit.RefractionFadeOutRate = 0.001f;
    MapKit.LiquidDripsCockpit.OpacityFadeOutRate = 0.002f;
    MapKit.LiquidDripsCockpit.RefractionAmount = 1.5f;
    MapKit.LiquidDripsCockpit.OpacityAmount = 1.f;
    MapKit.LiquidDripsCockpit.EmitColor = FLinearColor(0.f, 1.f, 10.f, 1.f);
    MapKit.LiquidDripsCockpit.EmitColorMultiplier = 30.f;
    MapKit.LiquidDripsCockpit.BottomLayerFlowSpeed = 0.25f;
    MapKit.LiquidDripsCockpit.BottomMaskFlowSpeed = 0.25f;
    MapKit.LiquidDripsCockpit.GeneralFlowSpeed = 0.08f;
    MapKit.LiquidDripsCockpit.MaskGeneralFlowSpeed = 1.2f;
    MapKit.LiquidDripsCockpit.MiddleLayerFlowSpeed = 0.5f;
    MapKit.LiquidDripsCockpit.MiddleMaskFlowSpeed = 0.5f;
    MapKit.LiquidDripsCockpit.SpecularAmount = 0.f;
    MapKit.LiquidDripsCockpit.StaticSpeed = 0.002f;
    MapKit.LiquidDripsCockpit.StaticDropOn = 0.f;
    MapKit.LiquidDripsCockpit.StaticDropSpeed = 0.5f;
    MapKit.LiquidDripsCockpit.TopLayerFlowSpeed = 1.f;
    MapKit.LiquidDripsCockpit.TopMaskFlowSpeed = 1.f;
    MapKit.LiquidDripsCockpit.UVMultiplier = 0.05681f;

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

#if WITH_EDITOR
    SetActorTickInterval(FMath::FRandRange(0.8f, 1.f));
#endif

    if (Box != nullptr && !bIsBoxBoundsInitialized)
    {
        MapKit.Collision.BoxBounds.X = Box->GetUnscaledBoxExtent().X;
        MapKit.Collision.BoxBounds.Y = Box->GetUnscaledBoxExtent().Y;
        MapKit.Collision.BoxBounds.Z = Box->GetUnscaledBoxExtent().Z;

        bIsBoxBoundsInitialized = true;
    }
}

#if WITH_EDITOR
void AAscMapKitEnvironmentAreaActor::PostInitializeComponents()
{
    Super::PostInitializeComponents();

    if (BillboardComponent != nullptr)
        BillboardComponent->EditorUpdateEnvironmentAreaType(MapKit.EnvironmentAreaType);
}

void AAscMapKitEnvironmentAreaActor::Tick(const float DeltaTime)
{
    Super::Tick(DeltaTime);

    if (bNeedsScaleReset)
    {
        SetActorRelativeScale3D(FVector(1.f, 1.f, 1.f));
        SetActorScale3D(FVector(1.f, 1.f, 1.f));

        GetRootComponent()->UpdateComponentToWorld();
        GetRootComponent()->MarkRenderStateDirty();

        bNeedsScaleReset = false;
    }
}

void AAscMapKitEnvironmentAreaActor::PostEditChangeProperty(FPropertyChangedEvent &PropertyChangedEvent)
{
    Super::PostEditChangeProperty(PropertyChangedEvent);

    if (PropertyChangedEvent.Property == nullptr || PropertyChangedEvent.MemberProperty == nullptr)
        return;

    const auto TransactionContext = FString::Printf(TEXT("%s::%hc"), *GetClass()->GetName(), *__FUNCTION__);
    const auto TransactionIndex = UKismetSystemLibrary::BeginTransaction(TransactionContext, FText::FromString(FString::Printf(TEXT("Modify %s"), *GetHumanReadableName())), nullptr);

    const auto PropertyCategory = PropertyChangedEvent.Property->GetMetaData(TEXT("Category"));
    const auto PropertyDisplayName = PropertyChangedEvent.Property->GetDisplayNameText().ToString();
    const auto PropertyName = PropertyChangedEvent.GetPropertyName().ToString();
    const auto MemberPropertyCategory = PropertyChangedEvent.MemberProperty->GetMetaData(TEXT("Category"));
    const auto MemberDisplayName = PropertyChangedEvent.MemberProperty->GetDisplayNameText().ToString();

    // GEngine->AddOnScreenDebugMessage(-1, 20.f, FColor::Cyan, FString::Printf(TEXT("PropertyCategory: %s"), *PropertyCategory));
    // GEngine->AddOnScreenDebugMessage(-1, 20.f, FColor::Cyan, FString::Printf(TEXT("PropertyDisplayName: %s"), *PropertyDisplayName));
    // GEngine->AddOnScreenDebugMessage(-1, 20.f, FColor::Cyan, FString::Printf(TEXT("PropertyName: %s"), *PropertyName));
    // GEngine->AddOnScreenDebugMessage(-1, 20.f, FColor::Cyan, FString::Printf(TEXT("MemberPropertyCategory: %s"), *MemberPropertyCategory));
    // GEngine->AddOnScreenDebugMessage(-1, 20.f, FColor::Cyan, FString::Printf(TEXT("MemberDisplayName: %s"), *MemberDisplayName));

    auto bModified = false;

    if (MemberDisplayName.Contains(TEXT("Scale")) && (PropertyName == TEXT("X") || PropertyName == TEXT("Y") || PropertyName == TEXT("Z")))
    {
        bNeedsScaleReset = true;
        bModified = true;

        GEngine->AddOnScreenDebugMessage(-1, 20.f, FColor::Red, TEXT("Error: Change the Collision Box Bounds or Collision Static Mesh, but NOT the actor scale! Actor scale is NOT supported by environment area actors!"));
    }
    else if (PropertyCategory == TEXT("Collision Box Bounds") && Box != nullptr)
    {
        Box->SetBoxExtent(FVector(MapKit.Collision.BoxBounds.X, MapKit.Collision.BoxBounds.Y, MapKit.Collision.BoxBounds.Z));
        bModified = true;
    }
    else if (PropertyDisplayName == TEXT("Collision Static Mesh") && StaticMesh != nullptr)
    {
        StaticMesh->SetStaticMesh(MapKit.Collision.StaticMesh);
        bModified = true;
    }

    if (PropertyName == TEXT("EnvironmentType") && BillboardComponent != nullptr)
    {
        BillboardComponent->EditorUpdateEnvironmentAreaType(MapKit.EnvironmentAreaType);
        bModified = true;
    }

    if (bModified)
    {
        PostEditChange();
        Modify();
        MarkPackageDirty();

        GetRootComponent()->UpdateComponentToWorld();
        GetRootComponent()->MarkRenderStateDirty();

        ReregisterAllComponents();

        UKismetSystemLibrary::TransactObject(this);
        UKismetSystemLibrary::EndTransaction();
    }
    else
        UKismetSystemLibrary::CancelTransaction(TransactionIndex);
}
#endif