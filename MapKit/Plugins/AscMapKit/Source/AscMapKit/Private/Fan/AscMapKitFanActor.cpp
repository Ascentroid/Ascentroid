#include "AscMapKit/Public/Fan/AscMapKitFanActor.h"

// Ascentroid
#include "AscMapKit/Public/Core/Global/AscMapKitGlobals.h"
#include "AscMapKit/Public/Core/Util/AscMapKitUtil.h"

AAscMapKitFanActor::AAscMapKitFanActor()
{
    EmptyRootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("EmptyRootComponent"));
    EmptyRootComponent->SetMobility(EComponentMobility::Static);

    RootComponent = EmptyRootComponent;

    ArrowComponent = CreateDefaultSubobject<UArrowComponent>(TEXT("ArrowComponent"));
    ArrowComponent->AttachToComponent(RootComponent, FAttachmentTransformRules::KeepRelativeTransform);
    ArrowComponent->ArrowColor = FColor::White;
    ArrowComponent->ArrowSize = 10.f;
    
    SkeletalMeshComponent = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("SkeletalMeshComponent"));
    SkeletalMeshComponent->AttachToComponent(RootComponent, FAttachmentTransformRules::KeepRelativeTransform);
    SkeletalMeshComponent->SetCollisionEnabled(ECollisionEnabled::NoCollision);
    SkeletalMeshComponent->SetCollisionProfileName(TEXT("NoCollision"));
    SkeletalMeshComponent->LightmapType = ELightmapType::ForceSurface; // note: necessary, otherwise lightmaps won't bake!!

    StaticMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComponent"));
    StaticMeshComponent->AttachToComponent(RootComponent, FAttachmentTransformRules::KeepRelativeTransform);
    StaticMeshComponent->SetCollisionEnabled(ECollisionEnabled::NoCollision);
    StaticMeshComponent->SetCollisionProfileName(TEXT("NoCollision"));
    StaticMeshComponent->LightmapType = ELightmapType::ForceSurface; // note: necessary, otherwise lightmaps won't bake!!

    StaticMeshDestroyedComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshDestroyedComponent"));
    StaticMeshDestroyedComponent->AttachToComponent(RootComponent, FAttachmentTransformRules::KeepRelativeTransform);
    StaticMeshDestroyedComponent->SetCollisionEnabled(ECollisionEnabled::NoCollision);
    StaticMeshDestroyedComponent->SetCollisionProfileName(TEXT("NoCollision"));
    StaticMeshDestroyedComponent->SetVisibility(false, true);
    StaticMeshDestroyedComponent->LightmapType = ELightmapType::ForceSurface; // note: necessary, otherwise lightmaps won't bake!!

    // todo: @reminder: keep defaults in sync with game actor

    MapKit = GetMapKitDefaults();

#if !UE_BUILD_SHIPPING
    SkeletalMeshComponent->SetHiddenInGame(false);
#endif
}

FAscMapKitFanPropertiesStruct AAscMapKitFanActor::GetMapKitDefaults()
{
    auto Result = FAscMapKitFanPropertiesStruct();

    Result.DisplayName = TEXT("Fan");
    Result.AnimationSpeed = 1.f;
    Result.PlayAmbientSoundCuePitch = 1.f;

    Result.Destructible.ComponentType = EAscMapKitDestructibleComponentTypeEnum::SkeletalMesh;

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

void AAscMapKitFanActor::OnConstruction(const FTransform &Transform)
{
    Super::OnConstruction(Transform);

#if !UE_BUILD_SHIPPING
    ArrowComponent->SetRelativeRotation(FRotator(0.f, 90.f, 0.f));
#endif
}

void AAscMapKitFanActor::BeginPlay()
{
    Super::BeginPlay();
}

#if WITH_EDITOR
// todo: @reminder: if we do this, when the game starts/loads, it will load the wrong assets based on fan type, which we don't want!
// todo: @reminder: do we need to keep this or what?
// void AAscMapKitFanActor::PostInitializeComponents()
// {
//     Super::PostInitializeComponents();
//
//     //UE_LOG(LogTemp, Log, TEXT("Fan.PostInitializeComponents()"));
//
//     EditorUpdateFan(TEXT("FanType"), MapKit.FanType);
// }

void AAscMapKitFanActor::PostEditChangeProperty(FPropertyChangedEvent &PropertyChangedEvent)
{
    Super::PostEditChangeProperty(PropertyChangedEvent);

    //UE_LOG(LogTemp, Log, TEXT("Fan.PostEditChangeProperty(): %s"), *PropertyChangedEvent.GetPropertyName().ToString());

    // todo: @reminder: removed this after we exposed the components, not sure if this is okay?
    // if (PropertyChangedEvent.GetPropertyName() == TEXT("FanType") ||
    //     PropertyChangedEvent.GetPropertyName() == TEXT("Material") ||
    //     PropertyChangedEvent.GetPropertyName() == TEXT("SkeletalMeshComponent"))

    if (PropertyChangedEvent.GetPropertyName() == TEXT("FanType"))
        EditorUpdateFan(PropertyChangedEvent.GetPropertyName().ToString(), MapKit.FanType);
}

// todo: change PropertyName type to an enum?
void AAscMapKitFanActor::EditorUpdateFan(const FString &PropertyName, const EAscMapKitFanTypeEnum &FanType)
{
    const auto FanDataAsset = UAscMapKitGlobals::GetFanDataAsset();
    const auto FanData = FanDataAsset->Get(FanType);

    if (FanType != EAscMapKitFanTypeEnum::None && FanType != FanData.FanType)
    {
        UAscMapKitUtil::Log(TEXT("Fan type is not configured in fan data asset!"));
        return;
    }

    // reset
    if (SkeletalMeshComponent)
        SkeletalMeshComponent->SetSkeletalMesh(nullptr);

    // reset
    if (StaticMeshComponent)
        StaticMeshComponent->SetStaticMesh(nullptr);

    // reset
    if (StaticMeshDestroyedComponent)
        StaticMeshDestroyedComponent->SetStaticMesh(nullptr);

    // reset
    TArray<AActor *> AttachedActors;
    GetAttachedActors(AttachedActors);

    for (const auto &Child : AttachedActors)
    {
        if (Child && !Child->IsPendingKill())
            Child->Destroy();
    }

    if (SkeletalMeshComponent && FanData.SkeletalMesh)
    {
        SkeletalMeshComponent->SetSkeletalMesh(FanData.SkeletalMesh);
        SkeletalMeshComponent->Modify();
    }

    if (FanData.AnimationSequence)
    {
        SkeletalMeshComponent->SetAnimation(FanData.AnimationSequence);
        SkeletalMeshComponent->SetAnimationMode(EAnimationMode::AnimationSingleNode);
        SkeletalMeshComponent->SetPlayRate(MapKit.AnimationSpeed > 0.f ? MapKit.AnimationSpeed : 1.f);
        SkeletalMeshComponent->OverrideAnimationData(FanData.AnimationSequence);
        SkeletalMeshComponent->Modify();
    }

    if (StaticMeshComponent && FanData.StaticMesh)
    {
        StaticMeshComponent->SetStaticMesh(FanData.StaticMesh);
        StaticMeshComponent->Modify();
    }

    if (FanData.bHasDestructibleSupport && FanData.StaticMeshDestroyed)
    {
        StaticMeshDestroyedComponent->SetStaticMesh(FanData.StaticMeshDestroyed);
        StaticMeshDestroyedComponent->Modify();
    }

    if (GetWorld() && FanData.bHasParticleSupport)
    {
        AEmitter *ParticleEmitter = GetWorld()->SpawnActor<AEmitter>(GetActorLocation(), FRotator::ZeroRotator);

        if (ParticleEmitter)
        {
#if USE_PARTICLES_CASCADE
            //UParticleSystemComponent *ParticleComponent = NewObject<UParticleSystemComponent>(XXX, UParticleSystemComponent::StaticClass(), NAME_None, RF_Transactional);
            UParticleSystem *UseParticleTemplate = FanData.Particle;
#else
            //UNiagaraComponent *ParticleComponent = NewObject<UNiagaraComponent>(XXX, UNiagaraComponent::StaticClass(), NAME_None, RF_Transactional);
            UNiagaraSystem *UseParticleTemplate = FanData.Particle;
#endif

            const auto ParticleComponent = ParticleEmitter->GetParticleSystemComponent();

            if (ParticleComponent)
            {
                ParticleEmitter->Modify();
                ParticleComponent->Modify();

                ParticleComponent->SetTemplate(UseParticleTemplate);

                ParticleComponent->RegisterComponent();

                const auto ParticleActorName = FString::Printf(TEXT("Particle_%s"), *GetHumanReadableName());

                ParticleEmitter->Rename(*(ParticleActorName + FGuid::NewGuid().ToString()));
                ParticleEmitter->SetActorLabel(*ParticleActorName);
                ParticleEmitter->AttachToActor(this, FAttachmentTransformRules::KeepRelativeTransform);

                ParticleEmitter->SetActorRelativeLocation(FanData.ParticleRelativeLocationOffset);
                ParticleEmitter->SetActorRelativeRotation(FanData.ParticleRelativeRotationOffset);

                ParticleEmitter->Modify();
                ParticleComponent->Modify();

                Modify();
            }
        }
    }
}
#endif