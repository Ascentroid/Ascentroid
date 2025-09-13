#include "AscMapKit/Public/Enemy/AscMapKitEnemyActor.h"

// UE
#include "Runtime/CoreUObject/Public/UObject/ConstructorHelpers.h"

AAscMapKitEnemyActor::AAscMapKitEnemyActor()
{
    const ConstructorHelpers::FObjectFinder<UStaticMesh> CubeStaticMeshRef(TEXT("StaticMesh'/Engine/BasicShapes/Cube.Cube'"));
    const ConstructorHelpers::FObjectFinder<UStaticMesh> SphereStaticMeshRef(TEXT("StaticMesh'/Engine/BasicShapes/Sphere.Sphere'"));
    const ConstructorHelpers::FObjectFinder<UMaterialInterface> PrimaryColorMaterialRef(TEXT("Material'/AscMapKit/Editor/Materials/M_Enemy_PrimaryColor.M_Enemy_PrimaryColor'"));
    const ConstructorHelpers::FObjectFinder<UMaterialInterface> EmitColorMaterialRef(TEXT("Material'/AscMapKit/Shared/Materials/M_Shared_Emit.M_Shared_Emit'"));

    EmptyRootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("EmptyRootComponent"));
    EmptyRootComponent->SetMobility(EComponentMobility::Movable);

    RootComponent = EmptyRootComponent;

    ArrowComponent = CreateDefaultSubobject<UArrowComponent>(TEXT("ArrowComponent"));
    ArrowComponent->AttachToComponent(RootComponent, FAttachmentTransformRules::KeepRelativeTransform);
    ArrowComponent->ArrowColor = FColor::White;
    ArrowComponent->ArrowSize = 10.f;

    BillboardComponent = CreateDefaultSubobject<UAscMapKitEnemyBillboardComponent>(TEXT("BillboardComponent"));
    BillboardComponent->AttachToComponent(RootComponent, FAttachmentTransformRules::KeepRelativeTransform);
    BillboardComponent->SetSprite(nullptr);

    PrimaryColorStaticMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("PrimaryColorStaticMeshComponent"));
    PrimaryColorStaticMeshComponent->AttachToComponent(RootComponent, FAttachmentTransformRules::KeepRelativeTransform);
    PrimaryColorStaticMeshComponent->SetRelativeScale3D(FVector(2.f, 2.f, 2.f));
    PrimaryColorStaticMeshComponent->SetCollisionProfileName(TEXT("NoCollision"));

    EmitColorStaticMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("EmitColorStaticMeshComponent"));
    EmitColorStaticMeshComponent->AttachToComponent(RootComponent, FAttachmentTransformRules::KeepRelativeTransform);
    EmitColorStaticMeshComponent->SetCollisionProfileName(TEXT("NoCollision"));

    if (CubeStaticMeshRef.Succeeded())
        PrimaryColorStaticMeshComponent->SetStaticMesh(CubeStaticMeshRef.Object);

    if (SphereStaticMeshRef.Succeeded())
        EmitColorStaticMeshComponent->SetStaticMesh(SphereStaticMeshRef.Object);

    if (PrimaryColorMaterialRef.Succeeded())
        PrimaryColorMaterial = PrimaryColorMaterialRef.Object;

    if (EmitColorMaterialRef.Succeeded())
        EmitColorMaterial = EmitColorMaterialRef.Object;

    MapKit = GetMapKitDefaults();

    MapKit.DefaultGameRuntimeBoundingBox = CreateDefaultSubobject<UAscMapKitEnemyDefaultGameRuntimeBoundingBox>(TEXT("DefaultGameRuntimeBoundingBox"));
    MapKit.DefaultGameRuntimeBoundingBox->AttachToComponent(RootComponent, FAttachmentTransformRules::KeepRelativeTransform);
    MapKit.DefaultGameRuntimeBoundingBox->SetBoxExtent(FVector::ZeroVector);

#if !UE_BUILD_SHIPPING
    ArrowComponent->SetHiddenInGame(false);
    BillboardComponent->SetHiddenInGame(false);
    PrimaryColorStaticMeshComponent->SetHiddenInGame(true);
    EmitColorStaticMeshComponent->SetHiddenInGame(true);
    MapKit.DefaultGameRuntimeBoundingBox->SetHiddenInGame(false);
#endif

#if WITH_EDITORONLY_DATA
    BillboardComponent->SetEditorScale(8.f);
#endif
}

FAscMapKitEnemyPropertiesStruct AAscMapKitEnemyActor::GetMapKitDefaults()
{
    auto Result = FAscMapKitEnemyPropertiesStruct();

    Result.DisplayName = TEXT("Enemy");

    Result.Status.StartShields.Easy = 50.f;
    Result.Status.StartShields.Moderate = 75.f;
    Result.Status.StartShields.Normal = 100.f;
    Result.Status.StartShields.Hard = 150.f;
    Result.Status.StartShields.Impossible = 200.f;

    Result.Colors.PrimaryColor = FLinearColor(1.f, 0.679045f, 0.312106f, 1.f);
    Result.Colors.EmitColor = FLinearColor(2.f, 0.024212f, 0.031170f, 1.f);
    Result.Colors.EmitColorMultiplyBy = 1.f;

    Result.Behavior.InitialMode = EAscMapKitEnemyBehaviorModeEnum::Idle;
    Result.Behavior.ResetToIdleSeconds = 5.f;
    
    Result.Behavior.Modes.Aggressive.Enable = true;

    Result.Behavior.Modes.Patrol.Enable = true;

    Result.Behavior.Modes.Reinforcement.Enable = true;
    Result.Behavior.Modes.Reinforcement.MaximumShieldsPercentageHighThreshold = 40;
    Result.Behavior.Modes.Reinforcement.MaximumShieldsPercentageLowThreshold = 30;

    Result.Behavior.Modes.Retreat.Enable = true;
    Result.Behavior.Modes.Retreat.MaximumShieldsPercentageThreshold = 30;

    Result.Behavior.Modes.Snipe.Enable = true;
    Result.Behavior.Modes.Snipe.NearbyEnemyDistance = 6000.f;
    Result.Behavior.Modes.Snipe.TotalApplicableEnemiesThreshold = 10;
    Result.Behavior.Modes.Snipe.NearbyEnemyThreshold = 3;

    Result.Movement.Speed.MaxSpeed = 3000.f;
    
    Result.Movement.Speed.Toggle.Enable = true;
    Result.Movement.Speed.Toggle.IntervalMinimumSeconds = 4.f;
    Result.Movement.Speed.Toggle.IntervalMaximumSeconds = 8.f;
    Result.Movement.Speed.Toggle.MultiplierTargetMinimum = 1.33f;
    Result.Movement.Speed.Toggle.MultiplierTargetMaximum = 2.33f;
    Result.Movement.Speed.Toggle.MultiplierInterpSpeedMinimum = 2.f;
    Result.Movement.Speed.Toggle.MultiplierInterpSpeedMaximum = 3.f;
    Result.Movement.Speed.Toggle.ApplyToTurnRoll = true;
    Result.Movement.Speed.Toggle.TurnRollMultiplier = 0.25f;

    Result.Movement.Speed.Melee.Enable = true;
    Result.Movement.Speed.Melee.DistanceToTarget = 8000.f;
    Result.Movement.Speed.Melee.MultiplierTargetMinimum = 8.f;
    Result.Movement.Speed.Melee.MultiplierTargetMaximum = 12.f;
    Result.Movement.Speed.Melee.MultiplierInterpSpeedMinimum = 3.f;
    Result.Movement.Speed.Melee.MultiplierInterpSpeedMinimum = 4.f;
    Result.Movement.Speed.Melee.ApplyToTurnRoll = true;
    Result.Movement.Speed.Melee.TurnRollMultiplier = 0.25f;
    
    Result.Movement.Collision.DirectionOffset = 4000.f;
    Result.Movement.Collision.StuckBounceCount = 3;
    Result.Movement.Collision.CollisionCheckDirectionBackwardOffset = 3200.f;
    Result.Movement.Collision.CollisionCheckDirectionUpDownOffset = 700.f;
    Result.Movement.Collision.CollisionCheckDirectionOtherOffset = 4200.f;
    Result.Movement.Collision.CollisionCheckRecenterDistance = 2200.f;
    Result.Movement.Collision.CollisionCheckRecenterHitThreshold = 4;

    Result.Movement.TurnRoll.Enable = true;
    Result.Movement.TurnRoll.InterpSpeed = 3.f;
    Result.Movement.TurnRoll.StrengthModifier = 15.f;
    Result.Movement.TurnRoll.AngleLeftMinimum = 45.f;
    Result.Movement.TurnRoll.AngleLeftMaximum = 135.f;
    Result.Movement.TurnRoll.AngleRightMinimum = -45.f;
    Result.Movement.TurnRoll.AngleRightMaximum = -135.f;

    Result.Movement.Modes.NotMoving.Enable = true;
    Result.Movement.Modes.NotMoving.DistanceCheck = 500.f;
    Result.Movement.Modes.NotMoving.Count = 5;
    Result.Movement.Modes.NotMoving.ImpulseFixStrengthMinimum = 1000.f;
    Result.Movement.Modes.NotMoving.ImpulseFixStrengthMaximum = 1500.f;
    Result.Movement.Modes.NotMoving.ImpulseFixAmountMinimum = 1.f;
    Result.Movement.Modes.NotMoving.ImpulseFixAmountMaximum = 3.f;
    Result.Movement.Modes.NotMoving.ImpulseFixRadiusMinimum = 150.f;
    Result.Movement.Modes.NotMoving.ImpulseFixRadiusMaximum = 250.f;
    Result.Movement.Modes.NotMoving.OffsetMinimum = -200.f;
    Result.Movement.Modes.NotMoving.OffsetMaximum = 200.f;

    Result.Movement.Modes.Normal.Enable = true;
    Result.Movement.Modes.Normal.Chance = 50;
    Result.Movement.Modes.Normal.DistanceCheck = 3200.f;
    Result.Movement.Modes.Normal.OffsetMinimum = 500.f;
    Result.Movement.Modes.Normal.OffsetMaximum = 1000.f;
    Result.Movement.Modes.Normal.TimerMinimumSeconds = 0.5f;
    Result.Movement.Modes.Normal.TimerMaximumSeconds = 1.f;

    Result.Movement.Modes.RelativeToTarget.Enable = true;
    Result.Movement.Modes.RelativeToTarget.Chance = 50;
    Result.Movement.Modes.RelativeToTarget.DistanceCheck = 3200.f;
    Result.Movement.Modes.RelativeToTarget.OffsetMinimum = 3000.f;
    Result.Movement.Modes.RelativeToTarget.OffsetMaximum = 4000.f;
    Result.Movement.Modes.RelativeToTarget.TimerMinimumSeconds = 0.5f;
    Result.Movement.Modes.RelativeToTarget.TimerMaximumSeconds = 1.f;

    Result.Movement.Modes.BackAwayFromTarget.Enable = true;
    Result.Movement.Modes.BackAwayFromTarget.Chance = 50;
    Result.Movement.Modes.BackAwayFromTarget.DistanceCheck = 3200.f;
    Result.Movement.Modes.BackAwayFromTarget.RecalculateDistanceThreshold = 100.f;
    Result.Movement.Modes.BackAwayFromTarget.DistanceOffset = 4200.f;
    Result.Movement.Modes.BackAwayFromTarget.OffsetXMinimum = -500.f;
    Result.Movement.Modes.BackAwayFromTarget.OffsetXMaximum = 500.f;
    Result.Movement.Modes.BackAwayFromTarget.OffsetZMinimum = -500.f;
    Result.Movement.Modes.BackAwayFromTarget.OffsetZMaximum = 500.f;
    Result.Movement.Modes.BackAwayFromTarget.TimerMinimumSeconds = 4.f;
    Result.Movement.Modes.BackAwayFromTarget.TimerMaximumSeconds = 8.f;
    Result.Movement.Modes.BackAwayFromTarget.LocationReachedThreshold = 500.f;
    Result.Movement.Modes.BackAwayFromTarget.TimerPauseMinimumSeconds = 0.1f;
    Result.Movement.Modes.BackAwayFromTarget.TimerPauseMaximumSeconds = 0.3f;

    Result.Movement.Modes.SlideAroundTarget.Enable = true;
    Result.Movement.Modes.SlideAroundTarget.Chance = 50;
    Result.Movement.Modes.SlideAroundTarget.DistanceCheck = 6000.f;
    Result.Movement.Modes.SlideAroundTarget.RecalculateDistanceThreshold = 100.f;
    Result.Movement.Modes.SlideAroundTarget.TimerMinimumSeconds = 4.f;
    Result.Movement.Modes.SlideAroundTarget.TimerMaximumSeconds = 8.f;
    Result.Movement.Modes.SlideAroundTarget.OrbitRadius = 6000.f;
    Result.Movement.Modes.SlideAroundTarget.OrbitSpeed = 50.333f;
    Result.Movement.Modes.SlideAroundTarget.LocationReachedThreshold = 300.f;
    Result.Movement.Modes.SlideAroundTarget.TimerPauseMinimumSeconds = 3.f;
    Result.Movement.Modes.SlideAroundTarget.TimerPauseMaximumSeconds = 5.f;

    Result.Movement.Modes.SlideRandom.Enable = true;
    Result.Movement.Modes.SlideRandom.Chance = 50;
    Result.Movement.Modes.SlideRandom.DistanceCheck = 3200.f;
    Result.Movement.Modes.SlideRandom.DirectionOffsetLeft = -3200.f;
    Result.Movement.Modes.SlideRandom.DirectionOffsetRight = 3200.f;
    Result.Movement.Modes.SlideRandom.RecalculateDistanceThreshold = 300.f;
    Result.Movement.Modes.SlideRandom.LocationReachedThreshold = 100.f;
    Result.Movement.Modes.SlideRandom.TimerMinimumSeconds = 4.f;
    Result.Movement.Modes.SlideRandom.TimerMaximumSeconds = 8.f;
    Result.Movement.Modes.SlideRandom.TimerPauseMinimumSeconds = 0.1f;
    Result.Movement.Modes.SlideRandom.TimerPauseMaximumSeconds = 0.3f;

    Result.Movement.Modes.Evade.Enable = true;
    Result.Movement.Modes.Evade.Chance = 50;
    Result.Movement.Modes.Evade.DistanceCheck = 3200.f;
    Result.Movement.Modes.Evade.DirectionOffsetLeft = -3200.f;
    Result.Movement.Modes.Evade.DirectionOffsetRight = 3200.f;
    Result.Movement.Modes.Evade.DirectionOffsetRandomMinimum = 500.f;
    Result.Movement.Modes.Evade.DirectionOffsetRandomMaximum = 1000.f;
    Result.Movement.Modes.Evade.TimerMinimumSeconds = 4.f;
    Result.Movement.Modes.Evade.TimerMaximumSeconds = 8.f;

    // todo: this might need some tweaking
    Result.Destructible.Enable = true;
    Result.Destructible.Disappear.Enable = true;
    Result.Destructible.Disappear.ChanceDisappearOnStart = 50;
    Result.Destructible.Disappear.IterationDelaySeconds = 0.3f;
    Result.Destructible.Disappear.DelaySecondsRangeMin = 1.5f;
    Result.Destructible.Disappear.DelaySecondsRangeMax = 2.5f;
    Result.Destructible.Disappear.EffectsDelaySeconds = 0.5f;

    Result.Melee.DamageAmount.Easy = 2.f;
    Result.Melee.DamageAmount.Moderate = 4.f;
    Result.Melee.DamageAmount.Normal = 6.f;
    Result.Melee.DamageAmount.Hard = 8.f;
    Result.Melee.DamageAmount.Impossible = 10.f;

    Result.Turret.TrackSpeed = 2.f;
    Result.Turret.SetExplosionAtRootComponent = true;

    Result.Weapons.ChanceToAttackWithPrediction.Easy = 20;
    Result.Weapons.ChanceToAttackWithPrediction.Moderate = 30;
    Result.Weapons.ChanceToAttackWithPrediction.Normal = 40;
    Result.Weapons.ChanceToAttackWithPrediction.Hard = 50;
    Result.Weapons.ChanceToAttackWithPrediction.Impossible = 60;

    Result.Weapons.AttackPredictionDistanceModMinimum = 0.25f;
    Result.Weapons.AttackPredictionDistanceModMaximum = 0.75f;
    
    Result.Weapons.ChanceToAttackWithMultipleWeapons.Easy = 5;
    Result.Weapons.ChanceToAttackWithMultipleWeapons.Moderate = 10;
    Result.Weapons.ChanceToAttackWithMultipleWeapons.Normal = 15;
    Result.Weapons.ChanceToAttackWithMultipleWeapons.Hard = 20;
    Result.Weapons.ChanceToAttackWithMultipleWeapons.Impossible = 25;

    Result.Weapons.AttackMultipleTimes.Easy = 1;
    Result.Weapons.AttackMultipleTimes.Moderate = 1;
    Result.Weapons.AttackMultipleTimes.Normal = 1;
    Result.Weapons.AttackMultipleTimes.Hard = 2;
    Result.Weapons.AttackMultipleTimes.Impossible = 3;

    Result.Weapons.AttackMultipleTimesMinimumDelaySeconds = 0.3f;
    Result.Weapons.AttackMultipleTimesMaximumDelaySeconds = 0.9f;
    
    auto DefaultWeaponSocket = FAscMapKitEnemyPropertiesWeaponStruct();
    DefaultWeaponSocket.WeaponType = EAscMapKitProjWeapTypeEnum::Pri_01;
    DefaultWeaponSocket.WeaponStrengthLevel = 1;
    DefaultWeaponSocket.ChanceToFire = 50;

    Result.Weapons.Sockets.Add(DefaultWeaponSocket);

    Result.Points.Enable = true;
    Result.Points.PointAmount.Easy = 100;
    Result.Points.PointAmount.Moderate = 200;
    Result.Points.PointAmount.Normal = 300;
    Result.Points.PointAmount.Hard = 400;
    Result.Points.PointAmount.Impossible = 500;
    Result.Points.EnableTextAboveEnemy = true;
    Result.Points.TextCanvasSize = FVector2D(1000.f, 300.f);
    Result.Points.TextScale = 30.f;
    Result.Points.TextDensity = 0.5f;
    Result.Points.TextAutoDestroySeconds = 4.f;
    Result.Points.TextOffset = FVector(-250.f, 0.f, -150.f);

    Result.Targeting.TargetLocationOffset = 3000.f;
    Result.Targeting.ChanceToAttackEnemyWhoHitUs = 100.f; // todo: @future: change to 0 after testing is done
    Result.Targeting.AttackCheckConeAngle = 1.1f;
    Result.Targeting.AttackCheckMaxSearchRadius = 17500.0f;
    Result.Targeting.LookAtProgressSeconds = 1.f;

    Result.Pursue.TargetDistanceMinimum = 3000.f;
    Result.Pursue.TargetDistanceMinimumThreshold = 2000.f;
    Result.Pursue.TargetDistanceMaximum = 15000.f;
    Result.Pursue.TargetDistanceMaximumThreshold = 2000.f;

    Result.Dodge.Enable = true;
    Result.Dodge.DistanceRadiusCheck = 5000.f;
    Result.Dodge.Chance = 33;
    Result.Dodge.ChanceCalculationRateMin = 0.3f;
    Result.Dodge.ChanceCalculationRateMax = 2.3f;
    Result.Dodge.DistanceMin = 2000.f;
    Result.Dodge.DistanceMax = 4000.f;
    Result.Dodge.Offset = 300.f;

    Result.Stun.Enable = true;
    Result.Stun.Chance = 50;
    Result.Stun.ForSeconds.Easy = 0.4f;
    Result.Stun.ForSeconds.Moderate = 0.3f;
    Result.Stun.ForSeconds.Normal = 0.2f;
    Result.Stun.ForSeconds.Hard = 0.1f;
    Result.Stun.ForSeconds.Impossible = 0.05f;
    Result.Stun.SpeedScale = 0.3f;
    Result.Stun.MaxSpeed = 3.f;

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

    Result.SplashDamage.DefaultReceiveImpulseRadius = 1000.f;
    Result.SplashDamage.DefaultReceiveImpulseStrength = 5000.f;
    Result.SplashDamage.DefaultReceiveImpulseInterpSpeed = 1.f;

    Result.Howlers.EnableAttraction = true;
    Result.Howlers.DistanceLineOfSightNotRequiredRadiusCheck = 2000.f;
    Result.Howlers.DistanceLineOfSightRequiredRadiusCheck = 17500.f;

    Result.OtherEffects.PlayTalkSoundCueRepeatWaitMinimumSeconds = 5;
    Result.OtherEffects.PlayTalkSoundCueRepeatWaitMaximumSeconds = 10;
    Result.OtherEffects.ChanceToPlayVictorySoundCue = 50;

    return Result;
}

int32 AAscMapKitEnemyActor::GetNumberOfSockets(const EAscMapKitEnemyTypeEnum EnemyType)
{
    auto Result = 0;

    // todo: @reminder: update this as new enemies are created
    switch (EnemyType)
    {
        case EAscMapKitEnemyTypeEnum::AlienCylon:
            Result = 2;
            break;
        case EAscMapKitEnemyTypeEnum::AlienGrawn:
            Result = 0;
            break;
        case EAscMapKitEnemyTypeEnum::MachineAssaultCache:
            Result = 2;
            break;
        case EAscMapKitEnemyTypeEnum::MachineAssaultTank:
            Result = 4;
            break;
        case EAscMapKitEnemyTypeEnum::MachineGeminiTurret:
            Result = 4;
            break;
        case EAscMapKitEnemyTypeEnum::MachineSarkTurret:
            Result = 6;
            break;
        case EAscMapKitEnemyTypeEnum::MachineSecureGage:
            Result = 2;
            break;
        case EAscMapKitEnemyTypeEnum::MachineServasTurret:
            Result = 6;
            break;
    }

    return Result;
}

void AAscMapKitEnemyActor::OnConstruction(const FTransform &Transform)
{
    Super::OnConstruction(Transform);

    if (PrimaryColorMaterial != nullptr && PrimaryColorMaterialInstance == nullptr)
    {
        PrimaryColorMaterialInstance = UMaterialInstanceDynamic::Create(PrimaryColorMaterial, nullptr);
        PrimaryColorStaticMeshComponent->SetMaterial(0, PrimaryColorMaterialInstance);
    }

    if (EmitColorMaterial != nullptr && EmitColorMaterialInstance == nullptr)
    {
        EmitColorMaterialInstance = UMaterialInstanceDynamic::Create(EmitColorMaterial, nullptr);
        EmitColorStaticMeshComponent->SetMaterial(0, EmitColorMaterialInstance);
    }

    if (PrimaryColorMaterialInstance != nullptr)
        PrimaryColorMaterialInstance->SetVectorParameterValue(FName("Color"), MapKit.Colors.PrimaryColor);

    if (EmitColorMaterialInstance != nullptr)
    {
        EmitColorMaterialInstance->SetVectorParameterValue(FName("Color"), MapKit.Colors.EmitColor);
        EmitColorMaterialInstance->SetScalarParameterValue(FName("Color Emit Multiply By"), MapKit.Colors.EmitColorMultiplyBy);
    }

#if WITH_EDITOR
    if (MapKit.DefaultGameRuntimeBoundingBox == nullptr)
    {
        MapKit.DefaultGameRuntimeBoundingBox = NewObject<UAscMapKitEnemyDefaultGameRuntimeBoundingBox>(this, UAscMapKitEnemyDefaultGameRuntimeBoundingBox::StaticClass(), TEXT("DefaultGameRuntimeBoundingBox"));
        MapKit.DefaultGameRuntimeBoundingBox->AttachToComponent(RootComponent, FAttachmentTransformRules::KeepRelativeTransform);
        MapKit.DefaultGameRuntimeBoundingBox->SetBoxExtent(FVector::ZeroVector);
    }

    if (BillboardComponent != nullptr)
        BillboardComponent->EditorUpdateEnemyType(MapKit.EnemyType);

    if (MapKit.DefaultGameRuntimeBoundingBox != nullptr)
        MapKit.DefaultGameRuntimeBoundingBox->EditorUpdateEnemyType(MapKit.EnemyType);

    EditorUpdateEnemyType(MapKit.EnemyType);
#endif

#if !UE_BUILD_SHIPPING
    ArrowComponent->SetRelativeRotation(FRotator(0.f, 180.f, 0.f));

    if (MapKit.DefaultGameRuntimeBoundingBox != nullptr)
    {
        const auto BoundingBoxExtent = MapKit.DefaultGameRuntimeBoundingBox->Bounds.BoxExtent;

        if (PrimaryColorStaticMeshComponent != nullptr)
        {
            const auto PrimaryColorStaticMeshOffset = 100.f;

            auto NewLocation = FVector(-BoundingBoxExtent.X, BoundingBoxExtent.Y, BoundingBoxExtent.Z);
            NewLocation.X += PrimaryColorStaticMeshOffset;
            NewLocation.Y -= PrimaryColorStaticMeshOffset;
            NewLocation.Z -= PrimaryColorStaticMeshOffset;

            PrimaryColorStaticMeshComponent->SetRelativeLocation(NewLocation);
        }

        if (EmitColorStaticMeshComponent != nullptr)
        {
            const auto EmitColorStaticMeshOffset = 50.f;

            auto NewLocation = FVector(-BoundingBoxExtent.X, -BoundingBoxExtent.Y, BoundingBoxExtent.Z);
            NewLocation.X += EmitColorStaticMeshOffset;
            NewLocation.Y += EmitColorStaticMeshOffset;
            NewLocation.Z -= EmitColorStaticMeshOffset;

            EmitColorStaticMeshComponent->SetRelativeLocation(NewLocation);
        }
    }
#endif
}

void AAscMapKitEnemyActor::BeginPlay()
{
    Super::BeginPlay();

#if !UE_BUILD_SHIPPING
    if (BillboardComponent && BillboardComponent->CurrentTexture != nullptr)
        BillboardComponent->SetSprite(BillboardComponent->CurrentTexture);
#endif
}

#if WITH_EDITOR
void AAscMapKitEnemyActor::PostEditChangeProperty(struct FPropertyChangedEvent &PropertyChangedEvent)
{
    Super::PostEditChangeProperty(PropertyChangedEvent);

    if (PropertyChangedEvent.GetPropertyName() == TEXT("EnemyType") && BillboardComponent != nullptr)
    {
        BillboardComponent->EditorUpdateEnemyType(MapKit.EnemyType);
        MapKit.DefaultGameRuntimeBoundingBox->EditorUpdateEnemyType(MapKit.EnemyType);
        EditorUpdateEnemyType(MapKit.EnemyType);
        EditorUpdateWeaponSockets();
    }
}

void AAscMapKitEnemyActor::EditorUpdateEnemyType(const EAscMapKitEnemyTypeEnum EnemyType)
{
    MapKit.Weapons.NumberOfSockets = GetNumberOfSockets(EnemyType);

    Modify();
    PostEditChange();

    MarkPackageDirty();
}

void AAscMapKitEnemyActor::EditorUpdateWeaponSockets()
{
    if (MapKit.Weapons.Sockets.Num() != MapKit.Weapons.NumberOfSockets)
        MapKit.Weapons.Sockets.SetNum(MapKit.Weapons.NumberOfSockets);

    for (auto i = 0; i < MapKit.Weapons.NumberOfSockets; i++)
    {
        if (MapKit.Weapons.Sockets.IsValidIndex(i))
        {
            MapKit.Weapons.Sockets[i].WeaponType = EAscMapKitProjWeapTypeEnum::Pri_01;
            MapKit.Weapons.Sockets[i].WeaponStrengthLevel = 1;
            MapKit.Weapons.Sockets[i].ChanceToFire = 50;
        }
        else
        {
            FAscMapKitEnemyPropertiesWeaponStruct Weapon;
            Weapon.WeaponType = EAscMapKitProjWeapTypeEnum::Pri_01;
            Weapon.WeaponStrengthLevel = 1;
            Weapon.ChanceToFire = 50;

            MapKit.Weapons.Sockets.Add(Weapon);
        }
    }

    Modify();
    PostEditChange();

    MarkPackageDirty();
}
#endif
