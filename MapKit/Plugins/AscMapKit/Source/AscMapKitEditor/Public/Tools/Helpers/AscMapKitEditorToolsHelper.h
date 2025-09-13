#pragma once

// Generated
#include "AscMapKitEditorToolsHelper.generated.h"

UCLASS(Blueprintable, BlueprintType)
class ASCMAPKITEDITOR_API UAscMapKitEditorToolsHelper : public UObject
{
	GENERATED_BODY()

public:
	static UWorld *GetEditorWorld();
	
	UFUNCTION()
	static bool GetEditorFirstSelectedActor(FVector &OutLocation);

	UFUNCTION()
	static int32 GetEditorNextActorSequence(const TSubclassOf<AActor> ActorClass, const FString &ActorNamePrefix);

	UFUNCTION()
	static bool GetEditorActorNameAlreadyExists(const TSubclassOf<AActor> ActorClass, const FString &ActorName, const FGuid &ActorGuid);

	UFUNCTION()
	static FString GetEditorSequentialActorName(const UClass *Class, const FString &DefaultName, const int32 &Sequence);

	UFUNCTION()
	static AActor *SpawnInEditor(
		const TSubclassOf<AActor> ActorClass,
		const FTransform &Transform,
		const FString &ActorNamePrefix,
		const int32 &Sequence,
		bool &bOutActorNameAlreadyExists,
		FString &OutActorName,
		FString &OutActorDefaultName
	);

	UFUNCTION()
	static void EditorRenameSequentialActorName(
		const TSubclassOf<AActor> ActorClass,
		AActor *Actor,
		const FString &ActorNamePrefix,
		const int32 &Sequence,
		bool &bOutActorNameAlreadyExists,
		FString &OutActorName,
		FString &OutActorDefaultName
	);

	UFUNCTION()
	static FString GenerateRandomString(int32 MaxLength = 8);

	UFUNCTION()
	static void ShowErrorMessage(const FString &Arg);

	UFUNCTION()
	static void ShowWarnMessage(const FString &Arg);

	UFUNCTION()
	static void ShowInfoMessage(const FString &Arg);
};