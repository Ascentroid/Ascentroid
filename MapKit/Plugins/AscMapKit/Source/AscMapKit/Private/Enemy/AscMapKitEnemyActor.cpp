#include "AscMapKit/Public/Enemy/AscMapKitEnemyActor.h"
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

    MapKit.DefaultGameRuntimeBoundingBox = CreateDefaultSubobject<UAscMapKitEnemyDefaultGameRuntimeBoundingBox>(TEXT("DefaultGameRuntimeBoundingBox"));
    MapKit.DefaultGameRuntimeBoundingBox->AttachToComponent(RootComponent, FAttachmentTransformRules::KeepRelativeTransform);
    MapKit.DefaultGameRuntimeBoundingBox->SetBoxExtent(FVector::ZeroVector);

    // todo: @reminder: keep defaults in sync with game actor

    MapKit.DisplayName = TEXT("Enemy");

    MapKit.Status.StartShields.Easy = 200.f;
    MapKit.Status.StartShields.Moderate = 250.f;
    MapKit.Status.StartShields.Normal = 300.f;
    MapKit.Status.StartShields.Hard = 350.f;
    MapKit.Status.StartShields.Impossible = 400.f;
    MapKit.Status.MaxSpeed = 3000.f;
    MapKit.Status.ResetToIdleSeconds = 5.f;

    MapKit.Colors.PrimaryColor = FLinearColor(1.f, 0.679045f, 0.312106f, 1.f);
    MapKit.Colors.EmitColor = FLinearColor(2.f, 0.024212f, 0.031170f, 1.f);
    MapKit.Colors.EmitColorMultiplyBy = 30.f;

    MapKit.Melee.DamageAmount.Easy = 2.f;
    MapKit.Melee.DamageAmount.Moderate = 4.f;
    MapKit.Melee.DamageAmount.Normal = 6.f;
    MapKit.Melee.DamageAmount.Hard = 8.f;
    MapKit.Melee.DamageAmount.Impossible = 10.f;

    MapKit.Turret.TrackSpeed = 1.f;
    MapKit.Turret.SetExplosionAtRootComponent = true;

    MapKit.Weapons.ChanceToAttackWithPrediction.Easy = 20;
    MapKit.Weapons.ChanceToAttackWithPrediction.Moderate = 30;
    MapKit.Weapons.ChanceToAttackWithPrediction.Normal = 40;
    MapKit.Weapons.ChanceToAttackWithPrediction.Hard = 50;
    MapKit.Weapons.ChanceToAttackWithPrediction.Impossible = 60;

    MapKit.Weapons.AttackPredictionDistanceModMinimum = 0.25f;
    MapKit.Weapons.AttackPredictionDistanceModMaximum = 0.75f;
    
    MapKit.Weapons.ChanceToAttackWithMultipleWeapons.Easy = 5;
    MapKit.Weapons.ChanceToAttackWithMultipleWeapons.Moderate = 10;
    MapKit.Weapons.ChanceToAttackWithMultipleWeapons.Normal = 15;
    MapKit.Weapons.ChanceToAttackWithMultipleWeapons.Hard = 20;
    MapKit.Weapons.ChanceToAttackWithMultipleWeapons.Impossible = 25;

    MapKit.Weapons.AttackMultipleTimes.Easy = 1;
    MapKit.Weapons.AttackMultipleTimes.Moderate = 1;
    MapKit.Weapons.AttackMultipleTimes.Normal = 1;
    MapKit.Weapons.AttackMultipleTimes.Hard = 2;
    MapKit.Weapons.AttackMultipleTimes.Impossible = 3;

    MapKit.Weapons.AttackMultipleTimesMinimumDelaySeconds = 0.3f;
    MapKit.Weapons.AttackMultipleTimesMaximumDelaySeconds = 0.9f;
    
    auto DefaultWeaponSocket = FAscMapKitEnemyPropertiesWeaponStruct();
    DefaultWeaponSocket.WeaponType = EAscMapKitProjWeapTypeEnum::Pri_01;
    DefaultWeaponSocket.WeaponStrengthLevel = 1;
    DefaultWeaponSocket.ChanceToFire = 50;

    MapKit.Weapons.Sockets.Add(DefaultWeaponSocket);

    MapKit.Points.Enable = true;
    MapKit.Points.PointAmount.Easy = 100;
    MapKit.Points.PointAmount.Moderate = 200;
    MapKit.Points.PointAmount.Normal = 300;
    MapKit.Points.PointAmount.Hard = 400;
    MapKit.Points.PointAmount.Impossible = 500;
    MapKit.Points.EnableTextAboveEnemy = true;
    MapKit.Points.TextCanvasSize = FVector2D(1000.f, 300.f);
    MapKit.Points.TextScale = 30.f;
    MapKit.Points.TextDensity = 0.5f;
    MapKit.Points.TextAutoDestroySeconds = 4.f;

    MapKit.Targeting.ChanceToAttackEnemyWhoHitUs = 100.f; // todo: @future: change to 0 after testing is done
    MapKit.Targeting.AttackCheckConeAngle = 1.1f;
    MapKit.Targeting.AttackCheckMaxSearchRadius = 17500.0f;
    MapKit.Targeting.LookAtProgressSeconds = 1.f;

    MapKit.Pursue.TargetDistanceMinimum = 3000.f;
    MapKit.Pursue.TargetDistanceMaximum = 15000.f;

    MapKit.Dodge.Enable = true;
    MapKit.Dodge.DistanceRadiusCheck = 5000.f;
    MapKit.Dodge.Chance = 50;
    MapKit.Dodge.DistanceMin = 2000.f;
    MapKit.Dodge.DistanceMax = 4000.f;
    MapKit.Dodge.TurnRoll = true;
    MapKit.Dodge.TurnRollStrengthMinimum = 5.f;
    MapKit.Dodge.TurnRollStrengthMaximum = 30.f;
    MapKit.Dodge.TurnRollInterpSpeed = 3.f;

    MapKit.Stun.Enable = true;
    MapKit.Stun.ForSeconds.Easy = 0.4f;
    MapKit.Stun.ForSeconds.Moderate = 0.3f;
    MapKit.Stun.ForSeconds.Normal = 0.2f;
    MapKit.Stun.ForSeconds.Hard = 0.1f;
    MapKit.Stun.ForSeconds.Impossible = 0.05f;
    MapKit.Stun.SpeedScale = 0.3f;
    MapKit.Stun.MaxSpeed = 3.f;

    MapKit.SplashDamage.UseLinearFalloffAmount = true;
    MapKit.SplashDamage.LinearFalloffAmount.Easy = 30.f;
    MapKit.SplashDamage.LinearFalloffAmount.Moderate = 40.f;
    MapKit.SplashDamage.LinearFalloffAmount.Normal = 50.f;
    MapKit.SplashDamage.LinearFalloffAmount.Hard = 60.f;
    MapKit.SplashDamage.LinearFalloffAmount.Impossible = 70.f;
    MapKit.SplashDamage.ImpulseRadius = 3000.f; // todo: may need tweaking
    MapKit.SplashDamage.ImpulseStrength = 2000.f;
    MapKit.SplashDamage.ImpulseModifier = 4.f;
    MapKit.SplashDamage.ImpulseStrengthAgainstEnemy = 2000.f;
    MapKit.SplashDamage.ImpulseInterpSpeedAgainstEnemy = 3.f;

    MapKit.Howlers.EnableAttraction = true;
    MapKit.Howlers.DistanceLineOfSightNotRequiredRadiusCheck = 2000.f;
    MapKit.Howlers.DistanceLineOfSightRequiredRadiusCheck = 17500.f;

    MapKit.OtherEffects.PlayTalkSoundCueRepeatWaitMinimumSeconds = 5;
    MapKit.OtherEffects.PlayTalkSoundCueRepeatWaitMaximumSeconds = 10;
    MapKit.OtherEffects.ChanceToPlayVictorySoundCue = 50;

#if !(UE_BUILD_SHIPPING)
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

#if !(UE_BUILD_SHIPPING)
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

#if !(UE_BUILD_SHIPPING)
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
    MapKit.Weapons.NumberOfSockets = 0;

    // todo: @reminder: update this as new enemies are created
    switch (EnemyType)
    {
        case EAscMapKitEnemyTypeEnum::AlienCylon:
            MapKit.Weapons.NumberOfSockets = 2;
            break;
        case EAscMapKitEnemyTypeEnum::AlienGrawn:
            MapKit.Weapons.NumberOfSockets = 0;
            break;
        case EAscMapKitEnemyTypeEnum::MachineAssaultCache:
            MapKit.Weapons.NumberOfSockets = 2;
            break;
        case EAscMapKitEnemyTypeEnum::MachineAssaultTank:
            MapKit.Weapons.NumberOfSockets = 12;
            break;
        case EAscMapKitEnemyTypeEnum::MachineGeminiTurret:
            MapKit.Weapons.NumberOfSockets = 4;
            break;
        case EAscMapKitEnemyTypeEnum::MachineSarkTurret:
            MapKit.Weapons.NumberOfSockets = 6;
            break;
        case EAscMapKitEnemyTypeEnum::MachineSecureGage:
            MapKit.Weapons.NumberOfSockets = 2;
            break;
        case EAscMapKitEnemyTypeEnum::MachineServasTurret:
            MapKit.Weapons.NumberOfSockets = 6;
            break;
    }

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
