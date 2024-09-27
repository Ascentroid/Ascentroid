#include "AscMapKit/Public/Powerup/AscMapKitPowerupRespawnTriggerBox.h"

// UE
#include "Runtime/Engine/Classes/Components/BoxComponent.h"
#include "Runtime/Engine/Classes/Components/ShapeComponent.h"
#include "Runtime/Engine/Classes/Kismet/KismetSystemLibrary.h"

AAscMapKitPowerupRespawnTriggerBox::AAscMapKitPowerupRespawnTriggerBox()
{
#if WITH_EDITOR
    PrimaryActorTick.bCanEverTick = true;
    PrimaryActorTick.bStartWithTickEnabled = true;
#else
    PrimaryActorTick.bCanEverTick = false;
    PrimaryActorTick.bStartWithTickEnabled = false;
    PrimaryActorTick.bAllowTickOnDedicatedServer = false;
#endif

    // todo: @reminder: update as powerups change
    // todo: @reminder: this volume uses the "Trigger" collision channel in UE4 by default
    // todo: @reminder: keep in mind, we may need a custom collision channel in the future if we end up building more trigger volumes
    RootComponent->SetMobility(EComponentMobility::Static);

    Weapon_Pri_01 = true;
    Weapon_Pri_02 = true;
    Weapon_Pri_03 = true;
    Weapon_Pri_04 = true;
    Weapon_Pri_05 = true;
    Weapon_Pri_06 = true;
    Weapon_Pri_07 = true;
    Weapon_Pri_08 = true;
    Weapon_Pri_09 = true;
    Weapon_Sec_01 = true;
    Weapon_Sec_02 = true;
    Weapon_Sec_03 = true;
    Weapon_Sec_04 = true;
    Weapon_Sec_05 = true;
    Weapon_Sec_06 = true;
    Weapon_Sec_07 = true;
    Weapon_Sec_08 = true;
    Weapon_Sec_09 = true;
    Weapon_Tet_01 = true;
    Weapon_Tet_02 = true;
    Weapon_Tet_03 = true;
    Weapon_Tet_04 = true;
    Weapon_Tet_05 = true;
    Weapon_Tet_06 = true;
    Weapon_Tet_07 = true;
    Aux_01 = true;
    Aux_02 = true;
    Aux_03 = true;
    Aux_04 = true;
    Aux_05 = true;
    Aux_06 = true;
    Aux_07 = true;
    Aux_08 = true;
    Aux_09 = true;
    Aux_10 = true;
}

void AAscMapKitPowerupRespawnTriggerBox::OnConstruction(const FTransform &Transform)
{
    Super::OnConstruction(Transform);

#if WITH_EDITOR
    SetActorTickInterval(FMath::FRandRange(0.8f, 1.f));
#endif

    if (GetCollisionComponent() != nullptr && !bIsBoxBoundsInitialized)
    {
        BoxBounds.X = GetCollisionComponent()->GetCollisionShape().GetExtent().X;
        BoxBounds.Y = GetCollisionComponent()->GetCollisionShape().GetExtent().Y;
        BoxBounds.Z = GetCollisionComponent()->GetCollisionShape().GetExtent().Z;

        bIsBoxBoundsInitialized = true;
    }
}

FVector AAscMapKitPowerupRespawnTriggerBox::GetRandomLocationWithinBounds()
{
    return FMath::RandPointInBox(this->GetComponentsBoundingBox());
}

bool AAscMapKitPowerupRespawnTriggerBox::Supports(const EAscMapKitPowerupTypeEnum PowerupType)
{
    // todo: @reminder: update as powerups change

    switch (PowerupType)
    {
        case EAscMapKitPowerupTypeEnum::Weapon_Pri_01:
            return Weapon_Pri_01;
        case EAscMapKitPowerupTypeEnum::Weapon_Pri_02:
            return Weapon_Pri_02;
        case EAscMapKitPowerupTypeEnum::Weapon_Pri_03:
            return Weapon_Pri_03;
        case EAscMapKitPowerupTypeEnum::Weapon_Pri_04:
            return Weapon_Pri_04;
        case EAscMapKitPowerupTypeEnum::Weapon_Pri_05:
            return Weapon_Pri_05;
        case EAscMapKitPowerupTypeEnum::Weapon_Pri_06:
            return Weapon_Pri_06;
        case EAscMapKitPowerupTypeEnum::Weapon_Pri_07:
            return Weapon_Pri_07;
        case EAscMapKitPowerupTypeEnum::Weapon_Pri_08:
            return Weapon_Pri_08;
        //case EAscMapKitPowerupTypeEnum::Weapon_Pri_09: // todo: @hammer
        //    return Weapon_Pri_09;
        case EAscMapKitPowerupTypeEnum::Weapon_Sec_01:
            return Weapon_Sec_01;
        case EAscMapKitPowerupTypeEnum::Weapon_Sec_02:
            return Weapon_Sec_02;
        case EAscMapKitPowerupTypeEnum::Weapon_Sec_03:
            return Weapon_Sec_03;
        case EAscMapKitPowerupTypeEnum::Weapon_Sec_04:
            return Weapon_Sec_04;
        case EAscMapKitPowerupTypeEnum::Weapon_Sec_05:
            return Weapon_Sec_05;
        case EAscMapKitPowerupTypeEnum::Weapon_Sec_06:
            return Weapon_Sec_06;
        case EAscMapKitPowerupTypeEnum::Weapon_Sec_07:
            return Weapon_Sec_07;
        case EAscMapKitPowerupTypeEnum::Weapon_Sec_08:
            return Weapon_Sec_08;
        case EAscMapKitPowerupTypeEnum::Weapon_Sec_09:
            return Weapon_Sec_09;
        case EAscMapKitPowerupTypeEnum::Weapon_Tet_01:
            return Weapon_Tet_01;
        case EAscMapKitPowerupTypeEnum::Weapon_Tet_02:
            return Weapon_Tet_02;
        case EAscMapKitPowerupTypeEnum::Weapon_Tet_03:
            return Weapon_Tet_03;
        case EAscMapKitPowerupTypeEnum::Weapon_Tet_04:
            return Weapon_Tet_04;
        case EAscMapKitPowerupTypeEnum::Weapon_Tet_05:
            return Weapon_Tet_05;
        case EAscMapKitPowerupTypeEnum::Weapon_Tet_06:
            return Weapon_Tet_06;
        case EAscMapKitPowerupTypeEnum::Weapon_Tet_07:
            return Weapon_Tet_07;
        case EAscMapKitPowerupTypeEnum::Aux_01:
            return Aux_01;
        case EAscMapKitPowerupTypeEnum::Aux_02:
            return Aux_02;
        case EAscMapKitPowerupTypeEnum::Aux_03:
            return Aux_03;
        case EAscMapKitPowerupTypeEnum::Aux_04:
            return Aux_04;
        case EAscMapKitPowerupTypeEnum::Aux_05:
            return Aux_05;
        case EAscMapKitPowerupTypeEnum::Aux_06:
            return Aux_06;
        case EAscMapKitPowerupTypeEnum::Aux_07:
            return Aux_07;
        case EAscMapKitPowerupTypeEnum::Aux_08:
            return Aux_08;
        case EAscMapKitPowerupTypeEnum::Aux_09:
            return Aux_09;
        case EAscMapKitPowerupTypeEnum::Aux_10:
            return Aux_10;
    }

    return false;
}

#if WITH_EDITOR
void AAscMapKitPowerupRespawnTriggerBox::Tick(const float DeltaTime)
{
    Super::Tick(DeltaTime);

    if (GetComponents().Num() > 0)
    {
        auto BoxComponentCount = 0;
    
        for (const auto &Component : GetComponents())
        {
            if (Component->IsA(UBoxComponent::StaticClass()))
            {
                BoxComponentCount++;
            }
        }

        if (BoxComponentCount > 1)
            GEngine->AddOnScreenDebugMessage(-1, 20.f, FColor::Red, FString::Printf(TEXT("Please fix! An AscMapKitPowerupRespawnTriggerBox can only have one (1) collision component, but %d were detected: %s"), BoxComponentCount, *GetHumanReadableName()));
    }

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
void AAscMapKitPowerupRespawnTriggerBox::PostEditChangeProperty(FPropertyChangedEvent &PropertyChangedEvent)
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

        GEngine->AddOnScreenDebugMessage(-1, 20.f, FColor::Red, TEXT("Error: Change the Collision Box Bounds, but NOT the actor scale! Actor scale is NOT supported by powerup respawn trigger box actors!"));
    }
    else if (PropertyCategory == TEXT("Collision Box Bounds") && GetCollisionComponent() != nullptr)
    {
        if (GetCollisionComponent()->IsA(UBoxComponent::StaticClass()))
        {
            const auto BoxComponent = Cast<UBoxComponent>(GetCollisionComponent());

            if (BoxComponent)
            {
                BoxComponent->SetBoxExtent(FVector(BoxBounds.X, BoxBounds.Y, BoxBounds.Z));
                BoxComponent->MarkRenderStateDirty();

                UKismetSystemLibrary::TransactObject(BoxComponent);

                bModified = true;
            }
        }
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