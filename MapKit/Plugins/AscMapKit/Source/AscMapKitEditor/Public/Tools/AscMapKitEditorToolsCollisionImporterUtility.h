#pragma once

// UE
#include "CoreMinimal.h"
#include "Editor/Blutility/Classes/EditorUtilityWidget.h"
#include "Runtime/UMG/Public/Components/Button.h"
#include "Runtime/UMG/Public/Components/CheckBox.h"
#include "Runtime/UMG/Public/Components/ComboBoxString.h"
#include "Runtime/UMG/Public/Components/EditableText.h"

// Generated
#include "AscMapKitEditorToolsCollisionImporterUtility.generated.h"

// note: created helped tool to import SK collisions from individual SM assets due to stupid crap like this:
// https://forums.unrealengine.com/t/ucx-not-generating-when-importing-as-skeletal-mesh/16758/4
UCLASS(Blueprintable, BlueprintType)
class UAscMapKitEditorToolsCollisionImporterUtility : public UEditorUtilityWidget
{
	GENERATED_BODY()

public:
	UAscMapKitEditorToolsCollisionImporterUtility();

	virtual void NativeConstruct() override;

	UPROPERTY(Category = GUI, EditAnywhere, BlueprintReadWrite)
	FString AssetType;
	
	UPROPERTY(Category = GUI, EditAnywhere, BlueprintReadWrite)
	FString SearchText;
	
	UPROPERTY(Category = GUI, EditAnywhere, BlueprintReadWrite)
	FString SearchReplaceText;
	
	UPROPERTY(Category = GUI, EditAnywhere, BlueprintReadWrite)
	FString TargetSkeletalMeshFolder;

	UPROPERTY(Category = GUI, EditAnywhere, BlueprintReadWrite)
	FString TargetSkeletalMeshAssetName;

	UPROPERTY(Category = GUI, EditAnywhere, BlueprintReadWrite)
	FString TargetSkeletalMeshBoneName;

	UPROPERTY(Category = GUI, EditAnywhere, BlueprintReadWrite)
	FString SourceStaticMeshesFolder;

	UPROPERTY(Category = GUI, EditAnywhere, BlueprintReadWrite)
	FString SourceStaticMeshesAssetNamePrefix;

	UPROPERTY(Category = GUI, EditAnywhere, BlueprintReadWrite)
	FString RotatePitch;

	UPROPERTY()
	float RotatePitchAsFloat;

	UPROPERTY(Category = GUI, EditAnywhere, BlueprintReadWrite)
	FString RotateYaw;

	UPROPERTY()
	float RotateYawAsFloat;

	UPROPERTY(Category = GUI, EditAnywhere, BlueprintReadWrite)
	FString RotateRoll;

	UPROPERTY()
	float RotateRollAsFloat;

	UPROPERTY(Category = GUI, EditAnywhere, BlueprintReadWrite)
	FString SourceStaticMeshesAssetCount;

	UPROPERTY(Category = GUI, EditAnywhere, BlueprintReadWrite)
	FString ImportStaticMeshCollisionType;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UComboBoxString *ComboBoxAssetType;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UEditableText *TxtBoxSearchText;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UEditableText *TxtBoxSearchReplaceText;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UButton *BtnSearchReplaceText;
	
	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UEditableText *TxtBoxTargetSkeletalMeshFolder;
	
	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UEditableText *TxtBoxTargetSkeletalMeshAssetName;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UEditableText *TxtBoxTargetSkeletalMeshBoneName;
	
	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UEditableText *TxtBoxSourceStaticMeshesFolder;
	
	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UEditableText *TxtBoxSourceStaticMeshesAssetNamePrefix;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UEditableText *TxtBoxRotatePitch;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UEditableText *TxtBoxRotateYaw;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UEditableText *TxtBoxRotateRoll;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UEditableText *TxtBoxSourceStaticMeshesAssetCount;
	
	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UComboBoxString *ComboBoxImportStaticMeshCollisionType;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UCheckBox *ChkBoxDisableRootBoneCollision;
	
	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UButton *BtnImportCollisionsToBone;

	UFUNCTION(BlueprintCallable)
	void ComboBoxAssetTypeOnSelectionChanged(FString Arg, ESelectInfo::Type SelectType);
	
	UFUNCTION(BlueprintCallable)
	void TxtBoxSearchTextOnTextCommitted(const FText &Arg, ETextCommit::Type CommitType);

	UFUNCTION(BlueprintCallable)
	void TxtBoxSearchReplaceTextOnTextCommitted(const FText &Arg, ETextCommit::Type CommitType);

	UFUNCTION(BlueprintCallable)
	void TxtBoxTargetSkeletalMeshFolderOnTextCommitted(const FText &Arg, ETextCommit::Type CommitType);

	UFUNCTION(BlueprintCallable)
	void TxtBoxTargetSkeletalMeshAssetNameOnTextCommitted(const FText &Arg, ETextCommit::Type CommitType);

	UFUNCTION(BlueprintCallable)
	void TxtBoxTargetSkeletalMeshBoneNameOnTextCommitted(const FText &Arg, ETextCommit::Type CommitType);

	UFUNCTION(BlueprintCallable)
	void TxtBoxSourceStaticMeshesFolderOnTextCommitted(const FText &Arg, ETextCommit::Type CommitType);

	UFUNCTION(BlueprintCallable)
	void TxtBoxSourceStaticMeshesAssetNamePrefixOnTextCommitted(const FText &Arg, ETextCommit::Type CommitType);

	UFUNCTION(BlueprintCallable)
	void TxtBoxRotatePitchOnTextCommitted(const FText &Arg, ETextCommit::Type CommitType);

	UFUNCTION(BlueprintCallable)
	void TxtBoxRotateYawOnTextCommitted(const FText &Arg, ETextCommit::Type CommitType);

	UFUNCTION(BlueprintCallable)
	void TxtBoxRotateRollOnTextCommitted(const FText &Arg, ETextCommit::Type CommitType);

	UFUNCTION(BlueprintCallable)
	void TxtBoxSourceStaticMeshesAssetCountOnTextCommitted(const FText &Arg, ETextCommit::Type CommitType);

	UFUNCTION(BlueprintCallable)
	void ComboBoxImportStaticMeshCollisionTypeOnSelectionChanged(FString Arg, ESelectInfo::Type SelectType);

	UFUNCTION(BlueprintCallable)
	void BtnSearchReplaceTextOnClick();
	
	UFUNCTION(BlueprintCallable)
	void BtnImportCollisionsToBoneOnClick();

	UPROPERTY()
	FString CollisionPrefix = "SK_Fan_Animated_20x20m_Basic_001_Collision_Collision";

	UPROPERTY()
	TSoftObjectPtr<USkeletalMesh> TargetSkeletalMesh;
};