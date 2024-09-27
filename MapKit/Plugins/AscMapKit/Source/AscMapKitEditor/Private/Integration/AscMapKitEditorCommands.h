#pragma once

#include "AscMapKitEditor/Private/Integration/AscMapKitEditorStyle.h"

#define LOCTEXT_NAMESPACE "FAscMapKitEditorModule"

class FAscMapKitEditorCommands : public TCommands<FAscMapKitEditorCommands>
{
public:
	FAscMapKitEditorCommands()
		: TCommands(
			TEXT("AscMapKitEditorCommands"),
			NSLOCTEXT("Contexts", "AscMapKitEditor", "Ascentroid Map Kit Editor Commands"),
			NAME_None,
			FAscMapKitEditorStyle::GetStyleName()
		)
	{
	}

	virtual void RegisterCommands() override
	{
		UI_COMMAND(ToolbarButton, "Ascentroid", "Map Kit Tools", EUserInterfaceActionType::Button, FInputChord());

		// todo: @reminder: @wtf: I cannot making engine customizations because campaigns won't compile because they use the binary of the same engine!
		// todo: @reminder: @wtf: fuck my life, I have to figure out how to do this without engine source engines
		// note: UI_COMMAND() must run first, then the button instance is available to work with
		// note: I added SetIcon() to the engine myself
		// ToolbarButton->SetIcon(
		// 	FSlateIcon(
		// 		FAscMapKitEditorStyle::GetStyleName(),
		// 		FAscMapKitEditorStyle::GetToolbarIconLargeName(),
		// 		FAscMapKitEditorStyle::GetToolbarIconSmallName()
		// 	)
		// );
	}

	TSharedPtr<FUICommandInfo> ToolbarButton;
};
