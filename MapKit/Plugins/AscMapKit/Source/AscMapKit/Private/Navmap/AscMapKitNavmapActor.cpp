#include "AscMapKit/Public/Navmap/AscMapKitNavmapActor.h"

// UE
#include "Runtime/Engine/Classes/Components/BoxComponent.h"
#include "Runtime/Engine/Classes/Kismet/KismetSystemLibrary.h"

AAscMapKitNavmapActor::AAscMapKitNavmapActor()
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

    Box = CreateDefaultSubobject<UBoxComponent>(TEXT("Box"));
    Box->AttachToComponent(RootComponent, FAttachmentTransformRules::KeepRelativeTransform);
    Box->SetRelativeLocation(FVector(0.f, 0.f, 0.f));
    Box->SetBoxExtent(FVector(1000.f, 1000.f, 1000.f));
    Box->SetCollisionEnabled(ECollisionEnabled::NoCollision);
    Box->SetCollisionProfileName(TEXT("NoCollision"));
    Box->SetWalkableSlopeOverride(FWalkableSlopeOverride(WalkableSlope_Unwalkable, 0.f));
    Box->CanCharacterStepUpOn = ECB_No;
    Box->SetIsReplicated(false);
}

void AAscMapKitNavmapActor::OnConstruction(const FTransform &Transform)
{
    Super::OnConstruction(Transform);

#if WITH_EDITOR
    SetActorTickInterval(FMath::FRandRange(0.8f, 1.f));
#endif

    if (Box != nullptr && !bIsBoxBoundsInitialized)
    {
        BoxBounds.X = Box->GetUnscaledBoxExtent().X;
        BoxBounds.Y = Box->GetUnscaledBoxExtent().Y;
        BoxBounds.Z = Box->GetUnscaledBoxExtent().Z;

        bIsBoxBoundsInitialized = true;
    }
}

#if WITH_EDITOR
void AAscMapKitNavmapActor::Tick(const float DeltaTime)
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
#endif

#if WITH_EDITOR
void AAscMapKitNavmapActor::PostEditChangeProperty(FPropertyChangedEvent &PropertyChangedEvent)
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

        GEngine->AddOnScreenDebugMessage(-1, 20.f, FColor::Red, TEXT("Error: Change the box component bounds, but NOT the actor scale! Actor scale is NOT supported by navmap actors!"));
    }
    else if (PropertyCategory == TEXT("Collision Box Bounds") && Box != nullptr)
    {
        Box->SetBoxExtent(FVector(BoxBounds.X, BoxBounds.Y, BoxBounds.Z));
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