#pragma once

#ifndef USE_PARTICLES_CASCADE
	#define USE_PARTICLES_CASCADE 1
#endif

// UE
#include "CoreMinimal.h"
#include "Editor/Blutility/Classes/EditorUtilityWidget.h"
#include "Materials/MaterialInstanceConstant.h"
#include "Runtime/UMG/Public/Components/Button.h"
#include "Runtime/UMG/Public/Components/CheckBox.h"
#include "Runtime/UMG/Public/Components/ComboBoxString.h"
#include "Runtime/UMG/Public/Components/MultiLineEditableTextBox.h"
#include "Runtime/UMG/Public/Components/GridPanel.h"
#include "Runtime/UMG/Public/Components/ScrollBox.h"
#include "Runtime/UMG/Public/Components/TextBlock.h"
#include "Runtime/UMG/Public/Components/VerticalBox.h"
#include "Runtime/UMG/Public/Components/WidgetSwitcher.h"

// Ascentroid
#include "AscMapKit/Public/Core/Constant/AscMapKitMaterialEmitColorTypeEnum.h"
#include "AscMapKit/Public/Decor/AscMapKitDecorTypeEnum.h"
#include "AscMapKit/Public/Door/AscMapKitDoorTypeEnum.h"
#include "AscMapKit/Public/Enemy/AscMapKitEnemyTypeEnum.h"
#include "AscMapKit/Public/Fan/AscMapKitFanTypeEnum.h"
#include "AscMapKit/Public/Powerup/AscMapKitPowerupTypeEnum.h"
#include "AscMapKit/Public/Trigger/AscMapKitTriggerTypeEnum.h"
#include "AscMapKitEditor/Public/Tools/Widgets/AscMapKitEditorToolsSelfRefButtonWidget.h"

// Generated
#include "AscMapKitEditorToolsUtilityWidget.generated.h"

UCLASS(BlueprintType)
class ASCMAPKITEDITOR_API UAscMapKitEditorToolsUtilityWidget : public UEditorUtilityWidget
{
	GENERATED_BODY()

public:
	UAscMapKitEditorToolsUtilityWidget();

	virtual void NativeConstruct() override;

	// Toolbar Buttons / Tabs
	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UButton *BtnCreate;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UButton *BtnGenerate;
	
	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UButton *BtnValidate;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UButton *BtnHelp;
	
	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UButton *BtnAbout;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UWidgetSwitcher *WidgetSwitcherToolButtons;

	UFUNCTION(BlueprintCallable)
	void BtnCreateOnClick();

	UFUNCTION(BlueprintCallable)
	void BtnGenerateOnClick();

	UFUNCTION(BlueprintCallable)
	void BtnValidateOnClick();

	UFUNCTION(BlueprintCallable)
	void BtnHelpOnClick();
	
	UFUNCTION(BlueprintCallable)
	void BtnAboutOnClick();

	UFUNCTION()
	void ResetAllTabColors();

	// Create Area
	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UTextBlock *TxtSubTitleCreateArea;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UGridPanel *SectionPanelArea;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UButton *BtnSubTitleCreateArea;

	UFUNCTION(BlueprintCallable)
	void BtnSubTitleCreateAreaOnClick();

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UComboBoxString *ComboBoxAddArea;
	
	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UComboBoxString *ComboBoxAddAreaCount;
	
	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UComboBoxString *ComboBoxAddAreaWhere;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UButton *BtnAddArea;

	UFUNCTION(BlueprintCallable)
	void BtnAddAreaOnClick();

	// Create Decor
	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UTextBlock *TxtSubTitleCreateDecor;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UGridPanel *SectionPanelDecor;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UButton *BtnSubTitleCreateDecor;

	UFUNCTION(BlueprintCallable)
	void BtnSubTitleCreateDecorOnClick();

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UComboBoxString *ComboBoxAddDecorType;
	
	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UComboBoxString *ComboBoxAddDecorColor;
	
	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UComboBoxString *ComboBoxAddDecorCount;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UComboBoxString *ComboBoxAddDecorWhere;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UCheckBox *ChkBoxAddDecorLight;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UButton *BtnAddDecor;

	UFUNCTION(BlueprintCallable)
	void BtnAddDecorOnClick();

	// Create Destructible
	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UTextBlock *TxtSubTitleCreateDestructible;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UGridPanel *SectionPanelDestructible;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UButton *BtnSubTitleCreateDestructible;

	UFUNCTION(BlueprintCallable)
	void BtnSubTitleCreateDestructibleOnClick();

	// Create Door
	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UTextBlock *TxtSubTitleCreateDoor;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UGridPanel *SectionPanelDoor;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UButton *BtnSubTitleCreateDoor;

	UFUNCTION(BlueprintCallable)
	void BtnSubTitleCreateDoorOnClick();

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UComboBoxString *ComboBoxAddDoorType;
	
	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UComboBoxString *ComboBoxAddDoorColor;
	
	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UComboBoxString *ComboBoxAddDoorCount;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UComboBoxString *ComboBoxAddDoorWhere;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UButton *BtnAddDoor;

	UFUNCTION(BlueprintCallable)
	void BtnAddDoorOnClick();

	// Create Enemy
	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UTextBlock *TxtSubTitleCreateEnemy;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UGridPanel *SectionPanelEnemy;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UButton *BtnSubTitleCreateEnemy;

	UFUNCTION(BlueprintCallable)
	void BtnSubTitleCreateEnemyOnClick();

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UComboBoxString *ComboBoxAddEnemyType;
	
	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UComboBoxString *ComboBoxAddEnemyColor;
	
	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UComboBoxString *ComboBoxAddEnemyCount;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UComboBoxString *ComboBoxAddEnemyWhere;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UButton *BtnAddEnemy;

	UFUNCTION(BlueprintCallable)
	void BtnAddEnemyOnClick();

	// Create Fan
	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UTextBlock *TxtSubTitleCreateFan;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UGridPanel *SectionPanelFan;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UButton *BtnSubTitleCreateFan;

	UFUNCTION(BlueprintCallable)
	void BtnSubTitleCreateFanOnClick();

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UComboBoxString *ComboBoxAddFanType;
	
	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UComboBoxString *ComboBoxAddFanColor;
	
	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UComboBoxString *ComboBoxAddFanCount;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UComboBoxString *ComboBoxAddFanWhere;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UButton *BtnAddFan;

	UFUNCTION(BlueprintCallable)
	void BtnAddFanOnClick();

	// Create Forcefield
	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UTextBlock *TxtSubTitleCreateForcefield;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UGridPanel *SectionPanelForcefield;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UButton *BtnSubTitleCreateForcefield;

	UFUNCTION(BlueprintCallable)
	void BtnSubTitleCreateForcefieldOnClick();

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UComboBoxString *ComboBoxAddForcefieldColor;
	
	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UComboBoxString *ComboBoxAddForcefieldCount;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UComboBoxString *ComboBoxAddForcefieldWhere;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UButton *BtnAddForcefield;

	UFUNCTION(BlueprintCallable)
	void BtnAddForcefieldOnClick();
	
	// Create Light
	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UTextBlock *TxtSubTitleCreateLight;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UGridPanel *SectionPanelLight;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UButton *BtnSubTitleCreateLight;

	UFUNCTION(BlueprintCallable)
	void BtnSubTitleCreateLightOnClick();

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UComboBoxString *ComboBoxAddLightType;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UComboBoxString *ComboBoxAddLightColor;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UComboBoxString *ComboBoxAddLightCount;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UComboBoxString *ComboBoxAddLightWhere;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UButton *BtnAddLight;

	UFUNCTION(BlueprintCallable)
	void BtnAddLightOnClick();

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UCheckBox *ChkBoxLightCastShadows;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UCheckBox *ChkBoxLightFog;

	// Create Player
	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UTextBlock *TxtSubTitleCreatePlayer;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UGridPanel *SectionPanelPlayer;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UButton *BtnSubTitleCreatePlayer;

	UFUNCTION(BlueprintCallable)
	void BtnSubTitleCreatePlayerOnClick();

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UComboBoxString *ComboBoxAddPlayerCount;
	
	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UComboBoxString *ComboBoxAddPlayerWhere;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UButton *BtnAddPlayer;

	UFUNCTION(BlueprintCallable)
	void BtnAddPlayerOnClick();
	
	// Create Powerup
	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UTextBlock *TxtSubTitleCreatePowerup;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UGridPanel *SectionPanelPowerup;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UButton *BtnSubTitleCreatePowerup;

	UFUNCTION(BlueprintCallable)
	void BtnSubTitleCreatePowerupOnClick();

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UComboBoxString *ComboBoxAddPowerupType;
	
	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UComboBoxString *ComboBoxAddPowerupCount;
	
	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UComboBoxString *ComboBoxAddPowerupWhere;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UCheckBox *ChkBoxAddPowerupIncludeDefaultNames;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UButton *BtnAddPowerup;

	UFUNCTION(BlueprintCallable)
	void BtnAddPowerupOnClick();

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UComboBoxString *ComboBoxAddPowerupDefaultsWhere;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UCheckBox *ChkBoxAddDefaultPowerupIncludeDefaultNames;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UButton *BtnAddPowerupsDefaults;

	UFUNCTION(BlueprintCallable)
	void BtnAddPowerupsDefaultsOnClick();

	// Create Trigger
	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UTextBlock *TxtSubTitleCreateTrigger;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UGridPanel *SectionPanelTrigger;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UButton *BtnSubTitleCreateTrigger;

	UFUNCTION(BlueprintCallable)
	void BtnSubTitleCreateTriggerOnClick();

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UComboBoxString *ComboBoxAddTriggerType;
	
	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UComboBoxString *ComboBoxAddTriggerColor;
	
	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UComboBoxString *ComboBoxAddTriggerCount;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UComboBoxString *ComboBoxAddTriggerWhere;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UButton *BtnAddTrigger;

	UFUNCTION(BlueprintCallable)
	void BtnAddTriggerOnClick();

	// Generate Effects
	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UTextBlock *TxtSubTitleGenerateEffects;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UGridPanel *SectionPanelGenerateEffects;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UButton *BtnSubTitleGenerateEffects;

	UFUNCTION(BlueprintCallable)
	void BtnSubTitleGenerateEffectsOnClick();

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UCheckBox *ChkBoxGenerateEffectsFog1;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UCheckBox *ChkBoxGenerateEffectsFog2;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UCheckBox *ChkBoxGenerateEffectsLightmassVolume;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UCheckBox *ChkBoxGenerateEffectsDefaultPostProcess;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UCheckBox *ChkBoxGenerateEffectsDefaultNavmap;
	
	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
    UCheckBox *ChkBoxGenerateEffectsGlobalLights;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UButton *BtnGenerateEffects;

	UFUNCTION(BlueprintCallable)
	void BtnGenerateEffectsOnClick();

	// Generate Navmap Bounds
	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UTextBlock *TxtSubTitleGenerateNavmapBounds;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UGridPanel *SectionPanelGenerateNavmapBounds;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UButton *BtnSubTitleGenerateNavmapBounds;

	UFUNCTION(BlueprintCallable)
	void BtnSubTitleGenerateNavmapBoundsOnClick();

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UButton *BtnGenerateNavmapBounds;

	UFUNCTION(BlueprintCallable)
	void BtnGenerateNavmapBoundsOnClick();

	// Generate Powerup Respawn Triggers
	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UTextBlock *TxtSubTitleGeneratePowerupRespawns;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UGridPanel *SectionPanelGeneratePowerupRespawns;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UButton *BtnSubTitleGeneratePowerupRespawns;

	UFUNCTION(BlueprintCallable)
	void BtnSubTitleGeneratePowerupRespawnsOnClick();

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UCheckBox *ChkBoxGeneratePowerupRespawnsDeleteExisting;
	
	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UButton *BtnGeneratePowerupRespawns;

	UFUNCTION(BlueprintCallable)
	void BtnGeneratePowerupRespawnsOnClick();

	// Validate Run
	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UTextBlock *TxtSubTitleValidate;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UGridPanel *SectionPanelValidate;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UButton *BtnSubTitleValidate;

	UFUNCTION(BlueprintCallable)
	void BtnSubTitleValidateOnClick();

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UButton *BtnRunValidate;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UButton *BtnRunValidateReset;
	
	UFUNCTION(BlueprintCallable)
	void BtnRunValidateOnClick();
	
	UFUNCTION(BlueprintCallable)
	void BtnRunValidateResetOnClick();

	UFUNCTION(BlueprintCallable)
	void AppendOutput(UScrollBox *ScrollBoxOutput, UMultiLineEditableTextBox *TxtBoxOutput, const FString& Arg);

	UFUNCTION(BlueprintCallable)
	void ClearOutput(UMultiLineEditableTextBox *TxtBoxOutput);

	// Validate Errors
	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UTextBlock *TxtSubTitleValidateErrors;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UGridPanel *SectionPanelValidateErrors;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UButton *BtnSubTitleValidateErrors;

	UFUNCTION(BlueprintCallable)
	void BtnSubTitleValidateErrorsOnClick();

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UScrollBox *ScrollBoxOutputValidateErrors;
	
	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UMultiLineEditableTextBox *TxtBoxOutputValidateErrors;

	// Validate Warnings
	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UTextBlock *TxtSubTitleValidateWarnings;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UGridPanel *SectionPanelValidateWarnings;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UButton *BtnSubTitleValidateWarnings;

	UFUNCTION(BlueprintCallable)
	void BtnSubTitleValidateWarningsOnClick();

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UScrollBox *ScrollBoxOutputValidateWarnings;
	
	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UMultiLineEditableTextBox *TxtBoxOutputValidateWarnings;

	// Help
	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UTextBlock *TxtSubTitleOtherTools;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UVerticalBox *SectionPanelOtherTools;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UButton *BtnSubTitleOtherTools;

	UFUNCTION(BlueprintCallable)
	void BtnSubTitleOtherToolsOnClick();

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UTextBlock *TxtSubTitleImportLevelStaticMesh;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UVerticalBox *SectionPanelImportLevelStaticMesh;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UButton *BtnSubTitleImportLevelStaticMesh;

	UFUNCTION(BlueprintCallable)
	void BtnSubTitleImportLevelStaticMeshOnClick();

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UTextBlock *TxtSubTitleLevelStaticMeshSetup;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UVerticalBox *SectionPanelLevelStaticMeshSetup;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UButton *BtnSubTitleLevelStaticMeshSetup;

	UFUNCTION(BlueprintCallable)
	void BtnSubTitleLevelStaticMeshSetupOnClick();

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UTextBlock *TxtSubTitleLevelStaticMeshLightmapSetup;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UVerticalBox *SectionPanelLevelStaticMeshLightmapSetup;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UButton *BtnSubTitleLevelStaticMeshLightmapSetup;

	UFUNCTION(BlueprintCallable)
	void BtnSubTitleLevelStaticMeshLightmapSetupOnClick();

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UTextBlock *TxtSubTitleProjectLightBuildSetup;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UVerticalBox *SectionPanelProjectLightBuildSetup;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UButton *BtnSubTitleProjectLightBuildSetup;

	UFUNCTION(BlueprintCallable)
	void BtnSubTitleProjectLightBuildSetupOnClick();

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UTextBlock *TxtSubTitleMeshTool;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UVerticalBox *SectionPanelMeshTool;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UButton *BtnSubTitleMeshTool;

	UFUNCTION(BlueprintCallable)
	void BtnSubTitleMeshToolOnClick();

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UTextBlock *TxtSubTitleTips;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UVerticalBox *SectionPanelTips;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UButton *BtnSubTitleTips;

	UFUNCTION(BlueprintCallable)
	void BtnSubTitleTipsOnClick();

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UTextBlock *TxtSubTitleLinks;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UVerticalBox *SectionPanelLinks;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UButton *BtnSubTitleLinks;

	UFUNCTION(BlueprintCallable)
	void BtnSubTitleLinksOnClick();

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UButton *BtnOtherToolsDesLevelObjDownload;

	UFUNCTION(BlueprintCallable)
	void BtnOtherToolsDesLevelObjDownloadOnClick();

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UButton *BtnOtherToolsDesLevelObjDownloadTextureRemapFile;

	UFUNCTION(BlueprintCallable)
	void BtnOtherToolsDesLevelObjDownloadTextureRemapFileOnClick();

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UButton *BtnOtherToolsFbxConverterDownload;
	
	UFUNCTION(BlueprintCallable)
	void BtnOtherToolsFbxConverterDownloadOnClick();

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UButton *BtnOtherToolsFbxReviewDownload;

	UFUNCTION(BlueprintCallable)
	void BtnOtherToolsFbxReviewDownloadOnClick();

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UButton *BtnOtherToolsMeshToolDownloadEpic;

	UFUNCTION(BlueprintCallable)
	void BtnOtherToolsMeshToolDownloadEpicOnClick();

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UButton *BtnOtherToolsMeshToolDownloadItch;

	UFUNCTION(BlueprintCallable)
	void BtnOtherToolsMeshToolDownloadItchOnClick();

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UButton *BtnOtherToolsSnappingHelperDownloadEpic;
	
	UFUNCTION(BlueprintCallable)
	void BtnOtherToolsSnappingHelperDownloadEpicOnClick();

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UButton *BtnOtherToolsBlenderDownload;

	UFUNCTION(BlueprintCallable)
	void BtnOtherToolsBlenderDownloadOnClick();

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UButton *BtnLinksAscentroidLink;

	UFUNCTION(BlueprintCallable)
	void BtnLinksAscentroidLinkOnClick();

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UButton *BtnLinksDiscordLink;

	UFUNCTION(BlueprintCallable)
	void BtnLinksDiscordLinkOnClick();

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UButton *BtnLinksYouTubeLink;

	UFUNCTION(BlueprintCallable)
	void BtnLinksYouTubeLinkOnClick();

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UButton *BtnLinksUeNamingLink;

	UFUNCTION(BlueprintCallable)
	void BtnLinksUeNamingLinkOnClick();

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UButton *BtnLinksUeTurboSquidLink;

	UFUNCTION(BlueprintCallable)
	void BtnLinksUeTurboSquidLinkOnClick();

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UButton *BtnLinksAmbientCgLink;

	UFUNCTION(BlueprintCallable)
	void BtnLinksAmbientCgLinkOnClick();

	// Easy Buttons
	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UAscMapKitEditorToolsSelfRefButtonWidget *BtnCreateAreaAcid;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UAscMapKitEditorToolsSelfRefButtonWidget *BtnCreateAreaElectric;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UAscMapKitEditorToolsSelfRefButtonWidget *BtnCreateAreaLava;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UAscMapKitEditorToolsSelfRefButtonWidget *BtnCreateAreaLavaFalls;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UAscMapKitEditorToolsSelfRefButtonWidget *BtnCreateAreaLiquid;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UAscMapKitEditorToolsSelfRefButtonWidget *BtnCreateAreaPowerStation;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UAscMapKitEditorToolsSelfRefButtonWidget *BtnCreateAreaSludge;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UAscMapKitEditorToolsSelfRefButtonWidget *BtnCreateDecorGrate10x20mBasic001;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UAscMapKitEditorToolsSelfRefButtonWidget *BtnCreateDecorGrate20x5mBasic001;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UAscMapKitEditorToolsSelfRefButtonWidget *BtnCreateDecorGrate20x5mBasic002;
	
	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UAscMapKitEditorToolsSelfRefButtonWidget *BtnCreateDecorGrate20x20mBasic001;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UAscMapKitEditorToolsSelfRefButtonWidget *BtnCreateDecorLadderSet001;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UAscMapKitEditorToolsSelfRefButtonWidget *BtnCreateDecorLetter;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UAscMapKitEditorToolsSelfRefButtonWidget *BtnCreateDecorPiece001;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UAscMapKitEditorToolsSelfRefButtonWidget *BtnCreateDecorSign001;
	
	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UAscMapKitEditorToolsSelfRefButtonWidget *BtnCreateDecorSign002;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UAscMapKitEditorToolsSelfRefButtonWidget *BtnCreateDecorSign003;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UAscMapKitEditorToolsSelfRefButtonWidget *BtnCreateDecorSign004;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UAscMapKitEditorToolsSelfRefButtonWidget *BtnCreateDecorSign005;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UAscMapKitEditorToolsSelfRefButtonWidget *BtnCreateDecorSign006;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UAscMapKitEditorToolsSelfRefButtonWidget *BtnCreateDoorAnimated20x20mBasic001;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UAscMapKitEditorToolsSelfRefButtonWidget *BtnCreateDoorAnimated20x20mBasic002;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UAscMapKitEditorToolsSelfRefButtonWidget *BtnCreateDoorAnimated20x20mBasic003;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UAscMapKitEditorToolsSelfRefButtonWidget *BtnCreateDoorAnimated20x20mBasic004;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UAscMapKitEditorToolsSelfRefButtonWidget *BtnCreateDoorAnimated20x20mBasic005;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UAscMapKitEditorToolsSelfRefButtonWidget *BtnCreateDoorAnimated20x20mSciFiDoorsDoor1;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UAscMapKitEditorToolsSelfRefButtonWidget *BtnCreateDoorAnimated20x20mSciFiDoorsDoor2;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UAscMapKitEditorToolsSelfRefButtonWidget *BtnCreateDoorAnimated20x20mSciFiDoorsDoor4;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UAscMapKitEditorToolsSelfRefButtonWidget *BtnCreateDoorAnimated20x20mSciFiPropsDoor1;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UAscMapKitEditorToolsSelfRefButtonWidget *BtnCreateDoorAnimated40x20mBasic001;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UAscMapKitEditorToolsSelfRefButtonWidget *BtnCreateDoorAnimated40x20mSciFiDoorsDoor3;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UAscMapKitEditorToolsSelfRefButtonWidget *BtnCreateDoorDestructible20x20mBasic001;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UAscMapKitEditorToolsSelfRefButtonWidget *BtnCreateDoorCustom;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UAscMapKitEditorToolsSelfRefButtonWidget *BtnCreateEnemyAlienCylon;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UAscMapKitEditorToolsSelfRefButtonWidget *BtnCreateEnemyAlienGrawn;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UAscMapKitEditorToolsSelfRefButtonWidget *BtnCreateEnemyMachineAssaultCache;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UAscMapKitEditorToolsSelfRefButtonWidget *BtnCreateEnemyMachineAssaultTank;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UAscMapKitEditorToolsSelfRefButtonWidget *BtnCreateEnemyMachineGeminiTurret;
	
	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UAscMapKitEditorToolsSelfRefButtonWidget *BtnCreateEnemyMachineSarkTurret;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UAscMapKitEditorToolsSelfRefButtonWidget *BtnCreateEnemyMachineSecureGage;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UAscMapKitEditorToolsSelfRefButtonWidget *BtnCreateEnemyMachineServasTurret;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UAscMapKitEditorToolsSelfRefButtonWidget *BtnCreateFanAnimated20x20mBasic001;
	
	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UAscMapKitEditorToolsSelfRefButtonWidget *BtnCreateFanCustom;
	
	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UAscMapKitEditorToolsSelfRefButtonWidget *BtnCreateTriggerInvisible;
	
	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UAscMapKitEditorToolsSelfRefButtonWidget *BtnCreateTriggerBasic001;
	
	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UAscMapKitEditorToolsSelfRefButtonWidget *BtnCreateTriggerCustom;

	UFUNCTION(BlueprintCallable)
	void BtnEasyOnClick(UAscMapKitEditorToolsSelfRefButtonWidget *Button);

private:
	UPROPERTY()
	UStaticMesh *CubeStaticMesh;

	UPROPERTY()
	UStaticMesh *CylinderStaticMesh;
	
	UPROPERTY()
	UStaticMesh *PlaneStaticMesh;
	
	UPROPERTY()
	UMaterialInstanceConstant *AcidMaterial;

	UPROPERTY()
	UMaterialInstanceConstant *LavaMaterial;

	UPROPERTY()
	UMaterialInstanceConstant *LavaFallsMaterial;

	UPROPERTY()
	UMaterialInstanceConstant *LiquidMaterial;

	UPROPERTY()
	UMaterialInstanceConstant *SludgeMaterial;

	UPROPERTY()
	UMaterialInstanceConstant *AcidFogMaterial;

	UPROPERTY()
	UMaterialInstanceConstant *LavaFogMaterial;
	
	UPROPERTY()
	UMaterialInstanceConstant *LiquidFogMaterial;

	UPROPERTY()
	UMaterialInstanceConstant *SludgeFogMaterial;

	UPROPERTY()
	UMaterial *CausticMaterial;

	UPROPERTY()
	UParticleSystem *ElectricalZapsParticleTemplate;
	//UNiagaraSystem *ElectricalZapsParticleTemplate;

	UPROPERTY()
	UParticleSystem *LiquidBubblesParticleTemplate;
	//UNiagaraSystem *LiquidBubblesParticleTemplate;

	UPROPERTY()
	UParticleSystem *PowerStationParticleTemplate;
	//UNiagaraSystem *PowerStationParticleTemplate;

	UPROPERTY()
	UStaticMesh *DecorGrate10x20mBasic001StaticMesh;

	UPROPERTY()
	UStaticMesh *DecorGrate20x5mBasic001StaticMesh;

	UPROPERTY()
	UStaticMesh *DecorGrate20x5mBasic002StaticMesh;

	UPROPERTY()
	UStaticMesh *DecorGrate20x20mBasic001StaticMesh;

	UPROPERTY()
	UStaticMesh *DecorLetterStaticMesh;

	UPROPERTY()
	UStaticMesh *DecorPiece001StaticMesh;

	UPROPERTY()
	UStaticMesh *DecorSign001StaticMesh;

	UPROPERTY()
	UStaticMesh *DecorSign002StaticMesh;

	UPROPERTY()
	UStaticMesh *DecorSign003StaticMesh;

	UPROPERTY()
	UStaticMesh *DecorSign004StaticMesh;

	UPROPERTY()
	UStaticMesh *DecorSign005StaticMesh;

	UPROPERTY()
	UStaticMesh *DecorSign006StaticMesh;

	UPROPERTY()
	UMaterialInstanceConstant *MaterialEmitColorBlue;

	UPROPERTY()
	UMaterialInstanceConstant *MaterialEmitColorBlueDark;

	UPROPERTY()
	UMaterialInstanceConstant *MaterialEmitColorCyan;

	UPROPERTY()
	UMaterialInstanceConstant *MaterialEmitColorCyanDark;

	UPROPERTY()
	UMaterialInstanceConstant *MaterialEmitColorGreen;

	UPROPERTY()
	UMaterialInstanceConstant *MaterialEmitColorGreenDark;

	UPROPERTY()
	UMaterialInstanceConstant *MaterialEmitColorOrange;

	UPROPERTY()
	UMaterialInstanceConstant *MaterialEmitColorOrangeDark;

	UPROPERTY()
	UMaterialInstanceConstant *MaterialEmitColorPurple;

	UPROPERTY()
	UMaterialInstanceConstant *MaterialEmitColorPurpleDark;

	UPROPERTY()
	UMaterialInstanceConstant *MaterialEmitColorRed;

	UPROPERTY()
	UMaterialInstanceConstant *MaterialEmitColorRedDark;

	UPROPERTY()
	UMaterialInstanceConstant *MaterialEmitColorWhite;

	UPROPERTY()
	UMaterialInstanceConstant *MaterialEmitColorYellow;

	UPROPERTY()
	UMaterialInstanceConstant *MaterialEmitColorYellowDark;

	UPROPERTY()
	FLinearColor TabUnselectedColor;

	UPROPERTY()
	FLinearColor TabSelectedColor;

	UPROPERTY()
	TMap<EAscMapKitMaterialEmitColorTypeEnum, FString> MaterialEmitColorTypeMap;
	
	UPROPERTY()
	TMap<EAscMapKitMaterialEmitColorTypeEnum, UMaterialInstanceConstant *> MaterialEmitColorTypeMaterialMap;
	
	UPROPERTY()
	TMap<EAscMapKitDecorTypeEnum, FString> DecorTypeMap;
	
	UPROPERTY()
	TMap<EAscMapKitDecorTypeEnum, UStaticMesh *> DecorTypeStaticMeshMap;

	UPROPERTY()
	TMap<EAscMapKitDecorTypeEnum, int32> DecorTypeStaticMeshMaterialEmitColorOverrideMap;

	UPROPERTY()
	TArray<EAscMapKitDecorTypeEnum> DecorTypeLightSupport;

	UPROPERTY()
	TMap<EAscMapKitDoorTypeEnum, FString> DoorTypeMap;

	UPROPERTY()
	TMap<EAscMapKitDoorTypeEnum, int32> DoorTypeStaticMeshMaterialEmitColorOverrideMap;

	UPROPERTY()
	TMap<EAscMapKitEnemyTypeEnum, FString> EnemyTypeMap;
	
	UPROPERTY()
	TMap<EAscMapKitFanTypeEnum, FString> FanTypeMap;

	UPROPERTY()
	TMap<EAscMapKitFanTypeEnum, int32> FanTypeStaticMeshMaterialEmitColorOverrideMap;
	
	UPROPERTY()
	TMap<EAscMapKitPowerupTypeEnum, FString> PowerupTypeMap;

	UPROPERTY()
	TMap<EAscMapKitPowerupTypeEnum, int32> PowerupDefaultCounts;

	UPROPERTY()
	TMap<EAscMapKitTriggerTypeEnum, FString> TriggerTypeMap;
	
	UPROPERTY()
	TMap<EAscMapKitTriggerTypeEnum, int32> TriggerTypeStaticMeshMaterialEmitColorOverrideMap;

	UFUNCTION()
	void ToggleSection(const FString &TitleText, UTextBlock *TxtSubTitleWidget, UWidget *SectionPanelWidget);
};