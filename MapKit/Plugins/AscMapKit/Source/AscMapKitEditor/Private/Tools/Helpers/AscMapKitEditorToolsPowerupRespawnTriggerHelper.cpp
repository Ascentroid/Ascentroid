#include "AscMapKitEditor/Public/Tools/Helpers/AscMapKitEditorToolsPowerupRespawnTriggerHelper.h"

// UE
#include "Runtime/Engine/Classes/Components/BoxComponent.h"
#include "Runtime/Engine/Classes/Kismet/GameplayStatics.h"
#include "Runtime/Engine/Classes/Kismet/KismetSystemLibrary.h"
#include "Runtime/Engine/Public/EngineUtils.h"

// Ascentroid
#include "AscMapKit/Public/Powerup/AscMapKitPowerupRespawnTriggerBox.h"
#include "AscMapKitEditor/Public/Tools/Helpers/AscMapKitEditorToolsHelper.h"
#include "AscMapKitEditor/Public/Tools/Helpers/AscMapKitEditorToolsLevelGeometryHelper.h"

void UAscMapKitEditorToolsPowerupRespawnTriggerHelper::Generate(const FString &ForClassName, const char *ForFunction, const bool &bDeleteExistingTriggers)
{
	const auto RandomLocations = UAscMapKitEditorToolsLevelGeometryHelper::GetRandomLocations();

	if (RandomLocations.Num() > 0)
	{
		const auto EditorWorld = UAscMapKitEditorToolsHelper::GetEditorWorld();
		const auto TransactionContext = FString::Printf(TEXT("%s::%hc"), *ForClassName, *ForFunction);

		UKismetSystemLibrary::BeginTransaction(TransactionContext, FText::FromString(TEXT("Generate Powerup Respawn Triggers")), nullptr);

		for (FActorIterator ActorItr(EditorWorld); ActorItr; ++ActorItr)
		{
			const auto Actor = *ActorItr;
		
			if (Actor == nullptr)
				continue;

			if (bDeleteExistingTriggers && Actor->IsA(AAscMapKitPowerupRespawnTriggerBox::StaticClass()))
			{
				UKismetSystemLibrary::TransactObject(Actor);
				EditorWorld->DestroyActor(Actor, true);
			}
		}

		for (const auto &RandomLocation : RandomLocations)
		{
			//DrawDebugLine(EditorWorld, StartLocation, HitResult.Location, FColor::Green, true, -1.f, 0, 20.f);

			// DrawDebugSphere(
			// 	EditorWorld,
			// 	RandomLocation,
			// 	100.f,
			// 	6,
			// 	FColor::Orange,
			// 	true,
			// 	-1.f,
			// 	0.f,
			// 	20.f
			// );

			FActorSpawnParameters SpawnParams;
			SpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;
			SpawnParams.bHideFromSceneOutliner = false;

			auto *PowerupRespawnTriggerBoxActor = EditorWorld->SpawnActor<AAscMapKitPowerupRespawnTriggerBox>(
				AAscMapKitPowerupRespawnTriggerBox::StaticClass(),
				RandomLocation,
				FRotator::ZeroRotator,
				SpawnParams
			);

			if (PowerupRespawnTriggerBoxActor)
			{
				if (PowerupRespawnTriggerBoxActor->GetCollisionComponent()->IsA(UBoxComponent::StaticClass()))
				{
					const auto BoxComponent = Cast<UBoxComponent>(PowerupRespawnTriggerBoxActor->GetCollisionComponent());

					if (BoxComponent)
						BoxComponent->SetBoxExtent(FVector(250.f, 250.f, 250.f));
				}

				PowerupRespawnTriggerBoxActor->SetFolderPath(FName("Powerups/RespawnTriggers"));

				UKismetSystemLibrary::TransactObject(PowerupRespawnTriggerBoxActor);
			}
		}
		
		UKismetSystemLibrary::EndTransaction();
	}
	else
		UAscMapKitEditorToolsHelper::ShowWarnMessage(TEXT("No random locations were generated. Do you have your 'Level' actor tag(s) setup properly, and/or 'CPU Access' enabled on your asset(s)?"));
}