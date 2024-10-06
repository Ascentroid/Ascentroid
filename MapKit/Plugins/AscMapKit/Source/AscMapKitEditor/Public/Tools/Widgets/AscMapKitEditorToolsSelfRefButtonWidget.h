#pragma once

// UE
#include "Runtime/UMG/Public/Components/Button.h"

// Generated
#include "AscMapKitEditorToolsSelfRefButtonWidget.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSelfRefButtonOnClicked, class UAscMapKitEditorToolsSelfRefButtonWidget *, Button);

UCLASS()
class ASCMAPKITEDITOR_API UAscMapKitEditorToolsSelfRefButtonWidget : public UButton
{
	GENERATED_BODY()

public:
	FSelfRefButtonOnClicked SelfRefButtonOnClicked;

protected:
	virtual TSharedRef<SWidget> RebuildWidget() override;
	
	UFUNCTION()
	void SelfRefOnClicked();
};