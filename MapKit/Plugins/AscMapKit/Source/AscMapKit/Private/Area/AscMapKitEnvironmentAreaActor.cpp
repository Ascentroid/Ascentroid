#include "AscMapKit/Public/Area/AscMapKitEnvironmentAreaActor.h"

// UE
#include "Runtime/Engine/Classes/Kismet/KismetSystemLibrary.h"

AAscMapKitEnvironmentAreaActor::AAscMapKitEnvironmentAreaActor()
{
#if WITH_EDITOR && !UE_BUILD_SHIPPING
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

    PostProcessComponentInternal = CreateDefaultSubobject<UPostProcessComponent>(TEXT("PostProcessComponent"));
    PostProcessComponentInternal->AttachToComponent(RootComponent, FAttachmentTransformRules::KeepRelativeTransform);
    PostProcessComponentInternal->SetMobility(EComponentMobility::Static);
    
    MapKit = GetMapKitDefaults(PostProcessComponentInternal);

#if WITH_EDITORONLY_DATA
    BillboardComponent->SetEditorScale(8.f);
#endif
}

FAscMapKitEnvironmentAreaPropertiesStruct AAscMapKitEnvironmentAreaActor::GetMapKitDefaults(UPostProcessComponent *InPostProcessComponent)
{
    auto Result = FAscMapKitEnvironmentAreaPropertiesStruct();

    Result.PostProcess.PostProcessComponent = InPostProcessComponent;
    
    Result.PostProcess.PostProcessComponent->bEnabled = 0;
    Result.PostProcess.PostProcessComponent->bUnbound = 0;
    Result.PostProcess.PostProcessComponent->Settings.bOverride_AutoExposureBias = true;
    Result.PostProcess.PostProcessComponent->Settings.bOverride_BloomIntensity = true;
    Result.PostProcess.PostProcessComponent->Settings.bOverride_BloomThreshold = true;
    Result.PostProcess.PostProcessComponent->Settings.bOverride_ColorGamma = true;
    Result.PostProcess.PostProcessComponent->Settings.bOverride_ColorSaturation = true;
    Result.PostProcess.PostProcessComponent->Settings.bOverride_FilmSaturation = true;
    Result.PostProcess.PostProcessComponent->Settings.bOverride_FilmShadowTint = true;
    Result.PostProcess.PostProcessComponent->Settings.bOverride_FilmShadowTintAmount = true;
    Result.PostProcess.PostProcessComponent->Settings.bOverride_FilmShadowTintBlend = true;
    Result.PostProcess.PostProcessComponent->Settings.bOverride_FilmWhitePoint = true;
    Result.PostProcess.PostProcessComponent->Settings.bOverride_SceneFringeIntensity = true;
    Result.PostProcess.PostProcessComponent->Settings.bOverride_VignetteIntensity = true;

    Result.PostProcess.PostProcessComponent->Settings.AutoExposureBias = -2.f;
    Result.PostProcess.PostProcessComponent->Settings.BloomIntensity = 10.f;
    Result.PostProcess.PostProcessComponent->Settings.BloomThreshold = 0.4f;
    Result.PostProcess.PostProcessComponent->Settings.ColorGamma = FVector4(1.5f, 1.5f, 1.5f, 1.f);
    Result.PostProcess.PostProcessComponent->Settings.ColorSaturation = FVector4(0.f, 2.f, 1.3f, 1.f);
    Result.PostProcess.PostProcessComponent->Settings.FilmSaturation = 0.5f;
    Result.PostProcess.PostProcessComponent->Settings.FilmShadowTintAmount = 0.2f;
    Result.PostProcess.PostProcessComponent->Settings.FilmShadowTintBlend = 0.2f;
    Result.PostProcess.PostProcessComponent->Settings.FilmShadowTint = FLinearColor(0.f, 2.f, 1.3f, 1.f);
    Result.PostProcess.PostProcessComponent->Settings.FilmWhitePoint = FLinearColor(0.f, 2.f, 1.3f, 1.f);
    Result.PostProcess.PostProcessComponent->Settings.SceneFringeIntensity = 2.f;
    Result.PostProcess.PostProcessComponent->Settings.VignetteIntensity = 2.5;

    /* todo: @UE5 start
    Result.PostProcess.PostProcessComponent->Settings.bOverride_AutoExposureBias = true;
    Result.PostProcess.PostProcessComponent->Settings.bOverride_BloomIntensity = true;
    Result.PostProcess.PostProcessComponent->Settings.bOverride_BloomThreshold = true;
    Result.PostProcess.PostProcessComponent->Settings.bOverride_ColorGamma = true;
    Result.PostProcess.PostProcessComponent->Settings.bOverride_ColorSaturation = true;
    Result.PostProcess.PostProcessComponent->Settings.bOverride_FilmSaturation = true;
    Result.PostProcess.PostProcessComponent->Settings.bOverride_FilmShadowTint = true;
    Result.PostProcess.PostProcessComponent->Settings.bOverride_FilmShadowTintAmount = true;
    Result.PostProcess.PostProcessComponent->Settings.bOverride_FilmShadowTintBlend = true;
    Result.PostProcess.PostProcessComponent->Settings.bOverride_FilmWhitePoint = true;
    Result.PostProcess.PostProcessComponent->Settings.bOverride_SceneFringeIntensity = true;
    Result.PostProcess.PostProcessComponent->Settings.bOverride_VignetteIntensity = true;
    
    Result.PostProcess.PostProcessComponent->Settings.AutoExposureBias = -2.f;
    Result.PostProcess.PostProcessComponent->Settings.BloomIntensity = 10.f;
    Result.PostProcess.PostProcessComponent->Settings.BloomThreshold = 0.4f;
    Result.PostProcess.PostProcessComponent->Settings.ColorGamma = FVector4(1.5f, 1.5f, 1.5f, 1.f);
    Result.PostProcess.PostProcessComponent->Settings.ColorSaturation = FVector4(0.f, 2.f, 1.3f, 1.f);
    Result.PostProcess.PostProcessComponent->Settings.FilmSaturation = 0.5f;
    Result.PostProcess.PostProcessComponent->Settings.FilmShadowTintAmount = 0.2f;
    Result.PostProcess.PostProcessComponent->Settings.FilmShadowTintBlend = 0.2f;
    Result.PostProcess.PostProcessComponent->Settings.FilmShadowTint = FLinearColor(0.f, 2.f, 1.3f, 1.f);
    Result.PostProcess.PostProcessComponent->Settings.FilmWhitePoint = FLinearColor(0.f, 2.f, 1.3f, 1.f);
    @UE5 end */
    
    Result.EnvironmentAreaType = EAscMapKitEnvironmentAreaTypeEnum::Liquid;
    Result.Collision.CollisionType = EAscMapKitEnvironmentAreaCollisionTypeEnum::Box;

    Result.PostProcess.EnableForPlayer = true;

    Result.LiquidDrips.EnableForPlayerOnOverlapEnd = true;
    Result.LiquidDrips.SpecularScale = 0.3f;
    Result.LiquidDrips.SpecularPower = 100.f;
    Result.LiquidDrips.SpecularLightDirection = FLinearColor(0.25f, -0.14f, 1.0f, 0.f);
    Result.LiquidDrips.PreTintFactor = 0.f;
    Result.LiquidDrips.PreTintColor = FLinearColor::White;
    Result.LiquidDrips.PostTintFactor = 0.f;
    Result.LiquidDrips.PostTintMaskPower = 1.f;
    Result.LiquidDrips.PostTintColor = FLinearColor::White;
    Result.LiquidDrips.FadeOutDelaySeconds = 0.05f;

    Result.LiquidDripsCockpit.EnableForPlayerOnOverlapEnd = true;
    Result.LiquidDripsCockpit.FadeOutDelaySeconds = 0.0025f;
    Result.LiquidDripsCockpit.RefractionFadeOutRate = 0.001f;
    Result.LiquidDripsCockpit.OpacityFadeOutRate = 0.002f;
    Result.LiquidDripsCockpit.RefractionAmount = 1.5f;
    Result.LiquidDripsCockpit.OpacityAmount = 1.f;
    Result.LiquidDripsCockpit.EmitColor = FLinearColor(0.f, 1.f, 10.f, 1.f);
    Result.LiquidDripsCockpit.EmitColorMultiplier = 30.f;
    Result.LiquidDripsCockpit.BottomLayerFlowSpeed = 0.25f;
    Result.LiquidDripsCockpit.BottomMaskFlowSpeed = 0.25f;
    Result.LiquidDripsCockpit.GeneralFlowSpeed = 0.08f;
    Result.LiquidDripsCockpit.MaskGeneralFlowSpeed = 1.2f;
    Result.LiquidDripsCockpit.MiddleLayerFlowSpeed = 0.5f;
    Result.LiquidDripsCockpit.MiddleMaskFlowSpeed = 0.5f;
    Result.LiquidDripsCockpit.SpecularAmount = 0.f;
    Result.LiquidDripsCockpit.StaticSpeed = 0.002f;
    Result.LiquidDripsCockpit.StaticDropOn = 0.f;
    Result.LiquidDripsCockpit.StaticDropSpeed = 0.5f;
    Result.LiquidDripsCockpit.TopLayerFlowSpeed = 1.f;
    Result.LiquidDripsCockpit.TopMaskFlowSpeed = 1.f;
    Result.LiquidDripsCockpit.UVMultiplier = 0.05681f;

    Result.PlayerShaking.Enable = true;
    Result.PlayerShaking.Factor = 8.f;

    Result.PlayerMovementModifier.Enable = true;
    Result.PlayerMovementModifier.VelocityFactor = 0.65f;
    Result.PlayerMovementModifier.BoostFactor = 0.65f;
    Result.PlayerMovementModifier.RotationFactor = 0.75f;

    Result.ProjectileMovementModifier.Enable = true;
    Result.ProjectileMovementModifier.Factor = 0.4f;

    Result.PowerupMovementModifier.Enable = true;
    Result.PowerupMovementModifier.Factor = 0.4f;

    Result.EnemyMovementModifier.Enable = true;
    Result.EnemyMovementModifier.MaxSpeedFactor = 0.4f;

    Result.EnemyGenerator.Enable = false;
    Result.EnemyGenerator.InitialState = EAscMapKitEnvironmentAreaEnemyGeneratorStateEnum::Active;
    Result.EnemyGenerator.Randomize = true;
    Result.EnemyGenerator.Infinite = false;
    Result.EnemyGenerator.EnableIterations = true;
    Result.EnemyGenerator.Iterations = 10;
    Result.EnemyGenerator.DelayBetweenIterationsMinimumSeconds = 10.f;
    Result.EnemyGenerator.DelayBetweenIterationsMaximumSeconds = 30.f;
    Result.EnemyGenerator.OnIterationsCompletePermanentlyDisable = true;
    Result.EnemyGenerator.SpawnMinimumSeconds = 5.f;
    Result.EnemyGenerator.SpawnMaximumSeconds = 10.f;
    Result.EnemyGenerator.SpawnInRandomLocations = true;
    Result.EnemyGenerator.SpawnRandomPadding = 800.f;

    Result.DestructibleChunkMovementModifier.Enable = true;
    Result.DestructibleChunkMovementModifier.Factor = 0.4f;

    Result.DamageShared.BeginPlayActivateDamageDelaySeconds = 1.f;

    Result.DamagePlayers.Enable = false;
    Result.DamageEnemies.Enable = false;

    Result.DamagePlayers.Amount = 5.f;
    Result.DamageEnemies.Amount = 5.f;

    Result.DamagePlayers.RateSeconds = 0.5f;
    Result.DamageEnemies.RateSeconds = 0.5f;

    Result.SplashDamage.Amount = 10.f;
    Result.SplashDamage.Radius = 2000.f;
    Result.SplashDamage.Strength = 2000.f;
    Result.SplashDamage.Modifier = 1.f;

    Result.OtherEffects.ChanceToSpawnOnOverlapAttachParticle = 33.f;

    return Result;
}

void AAscMapKitEnvironmentAreaActor::OnConstruction(const FTransform &Transform)
{
    Super::OnConstruction(Transform);

#if WITH_EDITOR && !UE_BUILD_SHIPPING
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

#if WITH_EDITOR && !UE_BUILD_SHIPPING
void AAscMapKitEnvironmentAreaActor::PostInitializeComponents()
{
    Super::PostInitializeComponents();

    if (BillboardComponent != nullptr)
        BillboardComponent->EditorUpdateEnvironmentAreaType(MapKit.EnvironmentAreaType);
}

void AAscMapKitEnvironmentAreaActor::Tick(const float DeltaTime)
{
    Super::Tick(DeltaTime);

    if (GetActorScale().X != 1.f || GetActorScale().Y != 1.f || GetActorScale().Z != 1.f)
        bNeedsScaleReset = true;

    if (bNeedsScaleReset)
    {
        GEngine->AddOnScreenDebugMessage(-1, 20.f, FColor::Red, FString::Printf(TEXT("Error: Change the Collision Box Bounds or Collision Static Mesh, but NOT the actor scale! Actor scale modification is NOT supported by environment area actors! %s"), *GetHumanReadableName()));

        // todo: @reminder: see function comments
        //ConvertScaleToBoxExtent();

        GetRootComponent()->UpdateComponentToWorld();
        GetRootComponent()->MarkRenderStateDirty();

        SetActorRelativeScale3D(FVector(1.f, 1.f, 1.f));
        SetActorScale3D(FVector(1.f, 1.f, 1.f));

        bNeedsScaleReset = false;
    }
}

// todo: @reminder: this is a temporary hack/fix to convert old maps with scale sizes to box extent sizes
// todo: @reminder: intended to be compiled/run manually and commented out again when all finished
void AAscMapKitEnvironmentAreaActor::ConvertScaleToBoxExtent()
{
    UBoxComponent *BoxComponent = nullptr;

    if (GetComponents().Num() > 0)
    {
        for (const auto &Component : GetComponents())
        {
            if (Component->IsA(UBoxComponent::StaticClass()))
            {
                BoxComponent = Cast<UBoxComponent>(Component);
                break;
            }
        }
    }
    
    if (!BoxComponent)
        return;

    // assume original default extent is 40 units in each axis
    const FVector DefaultExtent(1000.f, 1000.f, 1000.f);

    const auto WorldScale = BoxComponent->GetComponentScale();

    // todo: @reminder: adjust manually depending on the map needs
    const auto Padding = 0.f;

    const auto NewExtent = (DefaultExtent * WorldScale) - Padding;

    BoxComponent->SetBoxExtent(NewExtent);
    BoxComponent->SetWorldScale3D(FVector(1.f, 1.f, 1.f));

    MapKit.Collision.BoxBounds.X = NewExtent.X;
    MapKit.Collision.BoxBounds.Y = NewExtent.Y;
    MapKit.Collision.BoxBounds.Z = NewExtent.Z;

    GEngine->AddOnScreenDebugMessage(-1, 20.f, FColor::Cyan, FString::Printf(TEXT("Converted scale to box extent for: %s"), *GetHumanReadableName()));
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

    if (PropertyName == TEXT("EnvironmentAreaType") && BillboardComponent != nullptr)
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