#include "AscMapKitEditor/Public/AscMapKitEditor.h"

#include "Editor/Blutility/Public/EditorUtilitySubsystem.h"
#include "Editor/Blutility/Classes/EditorUtilityWidget.h"
#include "Editor/Blutility/Classes/EditorUtilityWidgetBlueprint.h"
#include "Editor/EditorStyle/Public/EditorStyle.h"
#include "Editor/LevelEditor/Public/LevelEditor.h"
#include "Runtime/Slate/Public/Framework/MultiBox/MultiBoxBuilder.h"
#include "Runtime/Slate/Public/SlateBasics.h"
#include "Runtime/Slate/Public/SlateExtras.h"

#include "AscMapKitEditor/Private/Integration/AscMapKitEditorCommands.h"
#include "AscMapKitEditor/Private/Integration/AscMapKitEditorStyle.h"

#define LOCTEXT_NAMESPACE "FAscMapKitEditorModule"

void FAscMapKitEditorModule::StartupModule()
{
	Style = FAscMapKitEditorStyle::GetInstance();

	FAscMapKitEditorCommands::Register();

	const TSharedPtr<FUICommandList> PluginCommands = MakeShareable(new FUICommandList);
	const TSharedPtr<FExtender> ToolbarExtender = MakeShareable(new FExtender);

	PluginCommands->MapAction(
		FAscMapKitEditorCommands::Get().ToolbarButton,
		FExecuteAction::CreateRaw(this, &FAscMapKitEditorModule::ToolbarButtonOnClicked),
		FCanExecuteAction());

	FLevelEditorModule &LevelEditorModule = FModuleManager::LoadModuleChecked<FLevelEditorModule>("LevelEditor");

	ToolbarExtender->AddToolBarExtension(
		"Settings",
		EExtensionHook::After,
		PluginCommands,
		FToolBarExtensionDelegate::CreateRaw(this, &FAscMapKitEditorModule::AddToolbarExtension));

	LevelEditorModule.GetToolBarExtensibilityManager()->AddExtender(ToolbarExtender);

	UE_LOG(LogTemp, Log, TEXT("FAscMapKitEditorModule::StartupModule() finished running."));
}

void FAscMapKitEditorModule::ShutdownModule()
{
	FAscMapKitEditorCommands::Unregister();
}

void FAscMapKitEditorModule::AddToolbarExtension(FToolBarBuilder &Builder)
{
	Builder.AddToolBarButton(
		FAscMapKitEditorCommands::Get().ToolbarButton,
		NAME_None,
		FText::FromString("Ascentroid"),
		FText::FromString("Map Kit Tools"),
		FSlateIcon(Style->GetStyleSetName(), FAscMapKitEditorStyle::GetToolbarIconLargeName(), FAscMapKitEditorStyle::GetToolbarIconSmallName())
	);
}

void FAscMapKitEditorModule::ToolbarButtonOnClicked()
{
	const FString WidgetAssetPathAsFString = TEXT("/AscMapKit/Editor/Tools/Ascentroid.Ascentroid");
	const FStringAssetReference WidgetAssetPath(WidgetAssetPathAsFString);

	UObject *WidgetAssetLoaded = WidgetAssetPath.TryLoad();

	if (WidgetAssetLoaded == nullptr)
	{
		UE_LOG(LogTemp, Warning, TEXT("FAscMapKitEditorModule.ToolbarButtonOnClicked(): missing toolbar widget class at '%s'"), *WidgetAssetPathAsFString);
		return;
	}

	UEditorUtilityWidgetBlueprint *Widget = Cast<UEditorUtilityWidgetBlueprint>(WidgetAssetLoaded);

	if (Widget == nullptr)
	{
		UE_LOG(LogTemp, Warning, TEXT("FAscMapKitEditorModule.ToolbarButtonOnClicked(): could not cast '%s' to UEditorUtilityWidgetBlueprint"), *WidgetAssetPathAsFString);
		return;
	}

	UEditorUtilitySubsystem *EditorUtilitySubsystem = GEditor->GetEditorSubsystem<UEditorUtilitySubsystem>();
	EditorUtilitySubsystem->SpawnAndRegisterTab(Widget);
}

#undef LOCTEXT_NAMESPACE

IMPLEMENT_MODULE(FAscMapKitEditorModule, AscMapKitEditor)
