#include "AscMapKitEditor/Public/Tools/Widgets/AscMapKitEditorToolsSelfRefButtonWidget.h"

TSharedRef<SWidget> UAscMapKitEditorToolsSelfRefButtonWidget::RebuildWidget()
{
	const auto Result = Super::RebuildWidget();

	OnClicked.AddUniqueDynamic(this, &ThisClass::SelfRefOnClicked);

	return Result;
}

void UAscMapKitEditorToolsSelfRefButtonWidget::SelfRefOnClicked()
{
	SelfRefButtonOnClicked.Broadcast(this);
}