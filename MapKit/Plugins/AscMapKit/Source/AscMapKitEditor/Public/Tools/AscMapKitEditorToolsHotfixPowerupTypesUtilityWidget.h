#pragma once

// UE
#include "CoreMinimal.h"
#include "Editor/Blutility/Classes/EditorUtilityWidget.h"
#include "Runtime/UMG/Public/Components/Button.h"
#include "Runtime/UMG/Public/Components/MultiLineEditableTextBox.h"
#include "Runtime/UMG/Public/Components/ScrollBox.h"

// Generated
#include "AscMapKitEditorToolsHotfixPowerupTypesUtilityWidget.generated.h"

UCLASS(Blueprintable, BlueprintType)
class ASCMAPKITEDITOR_API UAscMapKitEditorToolsHotfixPowerupTypesUtilityWidget : public UEditorUtilityWidget
{
	GENERATED_BODY()

public:
	UAscMapKitEditorToolsHotfixPowerupTypesUtilityWidget();

	virtual void NativeConstruct() override;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UScrollBox *ScrollBoxOutput;
	
	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UMultiLineEditableTextBox *TxtBoxOutput;
	
	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UButton *BtnExecute;

	UFUNCTION(BlueprintCallable)
	void BtnExecuteOnClick();
	
	UFUNCTION()
	void AppendOutput(const FString &Arg);

	UFUNCTION()
	void ClearOutput();

	UPROPERTY()
	int32 RowCounter;
};