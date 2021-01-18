#include "AscMapKit/Public/Forcefield/AscMapKitForcefieldActor.h"
#include "Runtime/CoreUObject/Public/UObject/ConstructorHelpers.h"

AAscMapKitForcefieldActor::AAscMapKitForcefieldActor()
{
    const ConstructorHelpers::FObjectFinder<UStaticMesh> StaticMeshRef(TEXT("StaticMesh'/AscMapKit/Editor/Meshes/Forcefields/SM_Forcefield_001.SM_Forcefield_001'"));
    const ConstructorHelpers::FObjectFinder<UMaterialInterface> PrimaryColorMaterialRef(TEXT("MaterialInstanceConstant'/AscMapKit/Editor/Materials/Forcefields/MI_Forcefield_001.MI_Forcefield_001'"));
    
    EmptyRootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("EmptyRootComponent"));

    RootComponent = EmptyRootComponent;

    StaticMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComponent"));
    StaticMeshComponent->AttachToComponent(RootComponent, FAttachmentTransformRules::KeepRelativeTransform);
    StaticMeshComponent->SetRelativeScale3D(FVector(1.f, 1.f, 1.f));
    StaticMeshComponent->SetCollisionEnabled(ECollisionEnabled::NoCollision);
    StaticMeshComponent->SetCollisionProfileName(TEXT("NoCollision"));

    if (StaticMeshRef.Succeeded())
        StaticMeshComponent->SetStaticMesh(StaticMeshRef.Object);

    if (PrimaryColorMaterialRef.Succeeded())
        PrimaryColorMaterial = PrimaryColorMaterialRef.Object;
    
    // todo: @reminder: keep defaults in sync with game actor

    MapKit.DisplayName = TEXT("Forcefield");
    MapKit.Id = TEXT("001");

    MapKit.Enable = true;
    
    MapKit.StaticMesh.Scale = FVector(1.f, 1.f, 1.f);
    MapKit.StaticMesh.Color = FLinearColor(0.5f, 0.5f, 6.f, 0.f);
    MapKit.StaticMesh.EmitColorMultiplyBy = 10.f;
    
    MapKit.Animate.Enable = true;
    MapKit.Animate.Axis = EAscMapKitXYZEnum::Z;
    MapKit.Animate.Size = 10.f;
    MapKit.Animate.Speed = 25.f;
    MapKit.Animate.Threshold = 90.f;
    MapKit.Animate.InitialDelaySeconds = 1.f;
    
    MapKit.Players.ReflectProjectiles = true;
    MapKit.Players.DamageAmount = 10.f;
    MapKit.Players.DamageDelay = 0.3f;
    MapKit.Players.EnableImpulse = true;
    MapKit.Players.ImpulseRadius = 1000.f;
    MapKit.Players.ImpulseStrength = 10000.f;
    
    MapKit.Enemies.ReflectProjectiles = true;
    MapKit.Enemies.DamageAmount = 10.f;
    MapKit.Enemies.DamageDelay = 0.3f;
    MapKit.Enemies.EnableImpulse = true;
    MapKit.Enemies.ImpulseRadius = 1000.f;
    MapKit.Enemies.ImpulseStrength = 10000.f;
    
    MapKit.Pulse.InitialStateEnabled = true;
    MapKit.Pulse.RateSeconds = 5.f;
    
    MapKit.OtherEffects.OnHitParticleDelaySeconds = 0.2f;
    MapKit.OtherEffects.OnAppearParticleScale = FVector(1.f, 1.f, 1.f);
    MapKit.OtherEffects.OnDisappearParticleScale = FVector(1.f, 1.f, 1.f);
    MapKit.OtherEffects.OnDisabledParticleScale = FVector(1.f, 1.f, 1.f);

#if !(UE_BUILD_SHIPPING)
    StaticMeshComponent->SetHiddenInGame(false);
#endif
}

void AAscMapKitForcefieldActor::OnConstruction(const FTransform &Transform)
{
    Super::OnConstruction(Transform);

    if (PrimaryColorMaterial != nullptr && PrimaryColorMaterialInstance == nullptr)
    {
        PrimaryColorMaterialInstance = UMaterialInstanceDynamic::Create(PrimaryColorMaterial, nullptr);
        StaticMeshComponent->SetMaterial(0, PrimaryColorMaterialInstance);
    }

    if (PrimaryColorMaterialInstance != nullptr)
    {
        PrimaryColorMaterialInstance->SetVectorParameterValue(FName("Color"), MapKit.StaticMesh.Color);
        PrimaryColorMaterialInstance->SetScalarParameterValue(FName("Color Emit Multiply By"), MapKit.StaticMesh.EmitColorMultiplyBy);
    }
}

void AAscMapKitForcefieldActor::BeginPlay()
{
    Super::BeginPlay();
}

#if WITH_EDITOR
void AAscMapKitForcefieldActor::PostEditChangeProperty(FPropertyChangedEvent &PropertyChangedEvent)
{
    Super::PostEditChangeProperty(PropertyChangedEvent);

    const auto PropertyName = PropertyChangedEvent.GetPropertyName().ToString();
    const auto IsPropertyVector = PropertyName == TEXT("X") || PropertyName == TEXT("Y") || PropertyName == TEXT("Z");

    //GEngine->AddOnScreenDebugMessage(-1, 10.f, FColor::White, FString::Printf(TEXT("PropertyName = %s"), *PropertyName));
    
    if (IsPropertyVector && StaticMeshComponent != nullptr && StaticMeshComponent->GetStaticMesh() != nullptr)
        StaticMeshComponent->SetRelativeScale3D(MapKit.StaticMesh.Scale);
}
#endif