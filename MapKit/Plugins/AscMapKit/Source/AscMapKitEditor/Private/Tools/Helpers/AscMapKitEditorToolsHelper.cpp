#include "AscMapKitEditor/Public/Tools/Helpers/AscMapKitEditorToolsHelper.h"

// UE
#include "Runtime/Core/Public/Algo/MaxElement.h"
#include "Runtime/Core/Public/Internationalization/Regex.h"
#include "Runtime/Engine/Classes/Kismet/GameplayStatics.h"
#include "Runtime/Engine/Classes/Engine/Selection.h"
#include "Runtime/Engine/Public/EngineUtils.h"

// Ascentroid
#include "AscMapKit/Public/Core/Util/AscMapKitUtil.h"

UWorld * UAscMapKitEditorToolsHelper::GetEditorWorld()
{
	if (!GEditor)
		return nullptr;

	return GEditor->GetEditorWorldContext().World();
}

bool UAscMapKitEditorToolsHelper::GetEditorFirstSelectedActor(FVector &OutLocation)
{
	auto Result = false;

	USelection *SelectedActors = GEditor->GetSelectedActors();

	if (SelectedActors)
	{
		const auto TopSelectedActor = SelectedActors->GetTop<AActor>();

		if (TopSelectedActor)
		{
			OutLocation = TopSelectedActor->GetActorLocation();
			Result = true;
		}
	}

	return Result;
}

int32 UAscMapKitEditorToolsHelper::GetEditorNextActorSequence(const TSubclassOf<AActor> ActorClass, const FString &ActorNamePrefix)
{
	auto Sequence = 1;

	if (ActorNamePrefix.Len() > 0)
	{
		TArray<int32> ExtractedSequences;
		
		for (FActorIterator ActorItr(GetEditorWorld()); ActorItr; ++ActorItr)
		{
			const auto FoundActor = *ActorItr;
			
			if (FoundActor && FoundActor->GetActorLabel().StartsWith(ActorNamePrefix)) //if (FoundActor->GetName().StartsWith(ActorNamePrefix))
			{
				const FRegexPattern ActorNameRegexPattern(TEXT("(\\d+)(?!.*\\d)"));
				FRegexMatcher ActorNameRegexMatcher(ActorNameRegexPattern, FoundActor->GetActorLabel()); //FRegexMatcher ActorNameRegexMatcher(ActorNameRegexPattern, FoundActor->GetName());

				while (ActorNameRegexMatcher.FindNext())
				{
					const auto ExtractedNumber = FCString::Atoi(*ActorNameRegexMatcher.GetCaptureGroup(0));
					ExtractedSequences.AddUnique(ExtractedNumber);
					// UE_LOG(LogTemp, Log, TEXT("Added ExtractedNumber = %d"), ExtractedNumber);
				}
			}
		}

		if (ExtractedSequences.Num() > 0)
		{
			Sequence = *Algo::MaxElement(ExtractedSequences);
			// UE_LOG(LogTemp, Log, TEXT("Found max Sequence = %d"), Sequence);
			
			Sequence++;

			// UE_LOG(LogTemp, Log, TEXT("Incremented Sequence = %d"), Sequence);
		}
	}

	// UE_LOG(LogTemp, Log, TEXT("Returning Sequence = %d"), Sequence);

	return Sequence;
}

bool UAscMapKitEditorToolsHelper::GetEditorActorNameAlreadyExists(const TSubclassOf<AActor> ActorClass, const FString &ActorName, const FGuid &ActorGuid)
{
	bool Result = false;

	// note: not using TActorIteractor because this is easier to lookup by ActorClass, even though it is a bit slower
	TArray<AActor *> FoundActors;
	UGameplayStatics::GetAllActorsOfClass(GetEditorWorld(), ActorClass, FoundActors);

	if (FoundActors.Num() > 0)
	{
		for (const auto &FoundActor : FoundActors)
		{
			if (ActorGuid != FoundActor->GetActorGuid() && (FoundActor->GetName() == ActorName || FoundActor->GetActorLabel() == ActorName))
			{
				// UE_LOG(LogTemp, Log, TEXT("Searching for ActorName = %s"), *ActorName);
				// UE_LOG(LogTemp, Log, TEXT("FoundActor->GetActorGuid() = %s"), *FoundActor->GetActorGuid().ToString());
				// UE_LOG(LogTemp, Log, TEXT("FoundActor->GetName() = %s"), *FoundActor->GetName());
				// UE_LOG(LogTemp, Log, TEXT("FoundActor->GetActorLabel() = %s"), *FoundActor->GetActorLabel());
				// UE_LOG(LogTemp, Log, TEXT("FoundActor->IsPendingKillOrUnreachable() = %d"), FoundActor->IsPendingKillOrUnreachable() ? 1 : 0);
				// UE_LOG(LogTemp, Log, TEXT("FoundActor->IsTemporarilyHiddenInEditor() = %d"), FoundActor->IsTemporarilyHiddenInEditor() ? 1 : 0);
				// UE_LOG(LogTemp, Log, TEXT("FoundActor->IsHiddenEd() = %d"), FoundActor->IsHiddenEd() ? 1 : 0);

				Result = true;

				break;
			}
		}
	}

	return Result;
}

FString UAscMapKitEditorToolsHelper::GetEditorSequentialActorName(const UClass *Class, const FString &DefaultName, const int32 &Sequence)
{
	const auto DefaultNameGenerated = MakeUniqueObjectName(GetEditorWorld(), Class, FName(DefaultName)).ToString();
	
	// UE_LOG(LogTemp, Log, TEXT("GetEditorSequentialActorName(): DefaultNameGenerated = %s"), *DefaultNameGenerated);

	auto Name = DefaultNameGenerated;

	if (Name.Len() > 0)
		Name = FString::Printf(TEXT("%s_%d"), *DefaultName, Sequence).Replace(TEXT("__"), TEXT("_"));

	// UE_LOG(LogTemp, Log, TEXT("GetEditorSequentialActorName(): Name = %s"), *Name);

	return Name;
}

AActor *UAscMapKitEditorToolsHelper::SpawnInEditor(
	const TSubclassOf<AActor> ActorClass,
	const FTransform &Transform,
	const FString &ActorNamePrefix,
	const int32 &Sequence,
	bool &bOutActorNameAlreadyExists,
	FString &OutActorName,
	FString &OutActorDefaultName)
{
	auto *ActorDeferred = GetEditorWorld()->SpawnActorDeferred<AActor>(ActorClass, Transform);

	if (ActorDeferred)
	{
		ActorDeferred->SpawnCollisionHandlingMethod = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;

		EditorRenameSequentialActorName(
			ActorClass,
			ActorDeferred,
			ActorNamePrefix,
			Sequence,
			bOutActorNameAlreadyExists,
			OutActorName,
			OutActorDefaultName
		);

		SaveToTransactionBuffer(ActorDeferred, true);

		const auto Actor = UGameplayStatics::FinishSpawningActor(ActorDeferred, Transform);

		SaveToTransactionBuffer(Actor, true);

		return Actor;
	}

	return nullptr;
}

void UAscMapKitEditorToolsHelper::EditorRenameSequentialActorName(
	const TSubclassOf<AActor> ActorClass,
	AActor *Actor,
	const FString &ActorNamePrefix,
	const int32 &Sequence,
	bool &bOutActorNameAlreadyExists,
	FString &OutActorName,
	FString &OutActorDefaultName)
{
	const auto ActorDefaultName = ActorNamePrefix;

	auto ActorName = GetEditorSequentialActorName(Actor->GetClass(), ActorDefaultName, Sequence);

	if (Sequence < 0)
		ActorName = ActorNamePrefix;
	
	auto UseActorName = ActorName;

	bOutActorNameAlreadyExists = GetEditorActorNameAlreadyExists(ActorClass, ActorName, Actor->GetActorGuid());

	if (bOutActorNameAlreadyExists)
	{
		OutActorName = ActorName;
		OutActorDefaultName = FString::Printf(TEXT("%s_%s"), *ActorDefaultName, *UAscMapKitUtil::GenerateRandomString(6, true));
		UseActorName = OutActorDefaultName;
	}

	Actor->Rename(*(UseActorName + FGuid::NewGuid().ToString()));
	Actor->SetActorLabel(*UseActorName);
}

FString UAscMapKitEditorToolsHelper::GenerateRandomString(int32 MaxLength)
{
	const FString CharSet = TEXT("ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789");
	const int32 CharSetLength = CharSet.Len();

	MaxLength = FMath::Max(1, MaxLength);

	FString Result;

	for (int32 i = 0; i < MaxLength; i++)
	{
		const int32 RandomIndex = FMath::RandRange(0, CharSetLength - 1);
		Result += CharSet[RandomIndex];
	}

	return Result;
}

void UAscMapKitEditorToolsHelper::ShowErrorMessage(const FString &Arg)
{
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, Arg);
	UE_LOG(LogTemp, Error, TEXT("%s"), *Arg);
}

void UAscMapKitEditorToolsHelper::ShowWarnMessage(const FString &Arg)
{
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Yellow, Arg);
	UE_LOG(LogTemp, Warning, TEXT("%s"), *Arg);
}

void UAscMapKitEditorToolsHelper::ShowInfoMessage(const FString &Arg)
{
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Cyan, Arg);
	UE_LOG(LogTemp, Log, TEXT("%s"), *Arg);
}