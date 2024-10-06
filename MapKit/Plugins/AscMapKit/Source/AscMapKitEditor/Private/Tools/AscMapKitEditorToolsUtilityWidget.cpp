#include "AscMapKitEditor/Public/Tools/AscMapKitEditorToolsUtilityWidget.h"

// UE
#include "Runtime/CoreUObject/Public/UObject/ConstructorHelpers.h"
#include "Runtime/Core/Public/Algo/MaxElement.h"
#include "Runtime/Core/Public/Internationalization/Regex.h"
#include "Runtime/Engine/Classes/Atmosphere/AtmosphericFog.h"
#include "Runtime/Engine/Classes/Atmosphere/AtmosphericFogComponent.h"
#include "Runtime/Engine/Classes/Components/ExponentialHeightFogComponent.h"
#include "Runtime/Engine/Classes/Components/PointLightComponent.h"
#include "Runtime/Engine/Classes/Components/RectLightComponent.h"
#include "Runtime/Engine/Classes/Components/ReflectionCaptureComponent.h"
#include "Runtime/Engine/Classes/Components/SphereReflectionCaptureComponent.h"
#include "Runtime/Engine/Classes/Components/SpotLightComponent.h"
#include "Runtime/Engine/Classes/Engine/ExponentialHeightFog.h"
#include "Runtime/Engine/Classes/Engine/PointLight.h"
#include "Runtime/Engine/Classes/Engine/RectLight.h"
#include "Runtime/Engine/Classes/Engine/Selection.h"
#include "Runtime/Engine/Classes/Engine/SphereReflectionCapture.h"
#include "Runtime/Engine/Classes/Engine/SpotLight.h"
#include "Runtime/Engine/Classes/Engine/StaticMeshActor.h"
#include "Runtime/Engine/Classes/Kismet/GameplayStatics.h"
#include "Runtime/Engine/Classes/Kismet/KismetSystemLibrary.h"
#include "Runtime/Engine/Classes/Lightmass/LightmassImportanceVolume.h"
#include "Runtime/Engine/Public/DrawDebugHelpers.h"

// Ascentroid
#include "AscMapKit/Public/Area/AscMapKitEnvironmentAreaActor.h"
#include "AscMapKit/Public/Decor/AscMapKitDecorActor.h"
#include "AscMapKit/Public/Door/AscMapKitDoorActor.h"
#include "AscMapKit/Public/Enemy/AscMapKitEnemyActor.h"
#include "AscMapKit/Public/Fan/AscMapKitFanActor.h"
#include "AscMapKit/Public/Forcefield/AscMapKitForcefieldActor.h"
#include "AscMapKit/Public/Navmap/AscMapKitNavmapActor.h"
#include "AscMapKit/Public/Player/AscMapKitDefaultPostProcessActor.h"
#include "AscMapKit/Public/Player/AscMapKitPlayerStart.h"
#include "AscMapKit/Public/Powerup/AscMapKitPowerupActor.h"
#include "AscMapKit/Public/Powerup/AscMapKitPowerupRespawnTriggerBox.h"
#include "AscMapKit/Public/Trigger/AscMapKitTriggerActor.h"
#include "AscMapKitEditor/Public/Tools/Helpers/AscMapKitEditorToolsHelper.h"
#include "AscMapKitEditor/Public/Tools/Helpers/AscMapKitEditorToolsLightHelper.h"
#include "AscMapKitEditor/Public/Tools/Helpers/AscMapKitEditorToolsPowerupHelper.h"
#include "AscMapKitEditor/Public/Tools/Helpers/AscMapKitEditorToolsPowerupRespawnTriggerHelper.h"

const auto NavmapBoundsPadding = 4000.f;

UAscMapKitEditorToolsUtilityWidget::UAscMapKitEditorToolsUtilityWidget()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh> CubeStaticMeshRef(TEXT("/Engine/BasicShapes/Cube.Cube"));
	static ConstructorHelpers::FObjectFinder<UStaticMesh> CylinderStaticMeshRef(TEXT("/Engine/BasicShapes/Cylinder.Cylinder"));
	static ConstructorHelpers::FObjectFinder<UStaticMesh> PlaneStaticMeshRef(TEXT("/Engine/BasicShapes/Plane.Plane"));

	static ConstructorHelpers::FObjectFinder<UStaticMesh> DecorGrate10x20mBasic001StaticMeshRef(TEXT("StaticMesh'/AscMapKit/Shared/Decor/Grate/10x20m/Basic/001/SM_Decor_Grate_10x20m_Basic_001.SM_Decor_Grate_10x20m_Basic_001'"));
	static ConstructorHelpers::FObjectFinder<UStaticMesh> DecorGrate20x5mBasic001StaticMeshRef(TEXT("StaticMesh'/AscMapKit/Shared/Decor/Grate/20x5m/Basic/001/SM_Decor_Grate_20x5m_Basic_001.SM_Decor_Grate_20x5m_Basic_001'"));
	static ConstructorHelpers::FObjectFinder<UStaticMesh> DecorGrate20x5mBasic002StaticMeshRef(TEXT("StaticMesh'/AscMapKit/Shared/Decor/Grate/20x5m/Basic/002/SM_Decor_Grate_20x5m_Basic_002.SM_Decor_Grate_20x5m_Basic_002'"));
	static ConstructorHelpers::FObjectFinder<UStaticMesh> DecorGrate20x20mBasic001StaticMeshRef(TEXT("StaticMesh'/AscMapKit/Shared/Decor/Grate/20x20m/Basic/001/SM_Decor_Grate_20x20m_Basic_001.SM_Decor_Grate_20x20m_Basic_001'"));
	static ConstructorHelpers::FObjectFinder<UStaticMesh> DecorLetterStaticMeshRef(TEXT("StaticMesh'/AscMapKit/Shared/Decor/Letters/SM_Letter_X.SM_Letter_X'"));
	static ConstructorHelpers::FObjectFinder<UStaticMesh> DecorPiece001StaticMeshRef(TEXT("StaticMesh'/AscMapKit/Shared/Decor/Piece/001/SM_Decor_Piece_001.SM_Decor_Piece_001'"));
	static ConstructorHelpers::FObjectFinder<UStaticMesh> DecorSign001StaticMeshRef(TEXT("StaticMesh'/AscMapKit/Shared/Decor/Sign/001/SM_Decor_Sign_001.SM_Decor_Sign_001'"));
	static ConstructorHelpers::FObjectFinder<UStaticMesh> DecorSign002StaticMeshRef(TEXT("StaticMesh'/AscMapKit/Shared/Decor/Sign/002/SM_Decor_Sign_002.SM_Decor_Sign_002'"));
	static ConstructorHelpers::FObjectFinder<UStaticMesh> DecorSign003StaticMeshRef(TEXT("StaticMesh'/AscMapKit/Shared/Decor/Sign/003/SM_Decor_Sign_003.SM_Decor_Sign_003'"));
	static ConstructorHelpers::FObjectFinder<UStaticMesh> DecorSign004StaticMeshRef(TEXT("StaticMesh'/AscMapKit/Shared/Decor/Sign/004/SM_Decor_Sign_004.SM_Decor_Sign_004'"));
	static ConstructorHelpers::FObjectFinder<UStaticMesh> DecorSign005StaticMeshRef(TEXT("StaticMesh'/AscMapKit/Shared/Decor/Sign/005/SM_Decor_Sign_005.SM_Decor_Sign_005'"));
	static ConstructorHelpers::FObjectFinder<UStaticMesh> DecorSign006StaticMeshRef(TEXT("StaticMesh'/AscMapKit/Shared/Decor/Sign/006/SM_Decor_Sign_006.SM_Decor_Sign_006'"));

	static ConstructorHelpers::FObjectFinder<UMaterialInstanceConstant> MaterialEmitColorBlueRef(TEXT("MaterialInstanceConstant'/AscMapKit/Shared/Materials/MI_Shared_Emit_Blue.MI_Shared_Emit_Blue'"));
	static ConstructorHelpers::FObjectFinder<UMaterialInstanceConstant> MaterialEmitColorBlueDarkRef(TEXT("MaterialInstanceConstant'/AscMapKit/Shared/Materials/MI_Shared_Emit_Blue_Dark.MI_Shared_Emit_Blue_Dark'"));
	static ConstructorHelpers::FObjectFinder<UMaterialInstanceConstant> MaterialEmitColorCyanRef(TEXT("MaterialInstanceConstant'/AscMapKit/Shared/Materials/MI_Shared_Emit_Cyan.MI_Shared_Emit_Cyan'"));
	static ConstructorHelpers::FObjectFinder<UMaterialInstanceConstant> MaterialEmitColorCyanDarkRef(TEXT("MaterialInstanceConstant'/AscMapKit/Shared/Materials/MI_Shared_Emit_Cyan_Dark.MI_Shared_Emit_Cyan_Dark'"));
	static ConstructorHelpers::FObjectFinder<UMaterialInstanceConstant> MaterialEmitColorGreenRef(TEXT("MaterialInstanceConstant'/AscMapKit/Shared/Materials/MI_Shared_Emit_Green.MI_Shared_Emit_Green'"));
	static ConstructorHelpers::FObjectFinder<UMaterialInstanceConstant> MaterialEmitColorGreenDarkRef(TEXT("MaterialInstanceConstant'/AscMapKit/Shared/Materials/MI_Shared_Emit_Green_Dark.MI_Shared_Emit_Green_Dark'"));
	static ConstructorHelpers::FObjectFinder<UMaterialInstanceConstant> MaterialEmitColorOrangeRef(TEXT("MaterialInstanceConstant'/AscMapKit/Shared/Materials/MI_Shared_Emit_Orange.MI_Shared_Emit_Orange'"));
	static ConstructorHelpers::FObjectFinder<UMaterialInstanceConstant> MaterialEmitColorOrangeDarkRef(TEXT("MaterialInstanceConstant'/AscMapKit/Shared/Materials/MI_Shared_Emit_Orange_Dark.MI_Shared_Emit_Orange_Dark'"));
	static ConstructorHelpers::FObjectFinder<UMaterialInstanceConstant> MaterialEmitColorPurpleRef(TEXT("MaterialInstanceConstant'/AscMapKit/Shared/Materials/MI_Shared_Emit_Purple.MI_Shared_Emit_Purple'"));
	static ConstructorHelpers::FObjectFinder<UMaterialInstanceConstant> MaterialEmitColorPurpleDarkRef(TEXT("MaterialInstanceConstant'/AscMapKit/Shared/Materials/MI_Shared_Emit_Purple_Dark.MI_Shared_Emit_Purple_Dark'"));
	static ConstructorHelpers::FObjectFinder<UMaterialInstanceConstant> MaterialEmitColorRedRef(TEXT("MaterialInstanceConstant'/AscMapKit/Shared/Materials/MI_Shared_Emit_Red.MI_Shared_Emit_Red'"));
	static ConstructorHelpers::FObjectFinder<UMaterialInstanceConstant> MaterialEmitColorRedDarkRef(TEXT("MaterialInstanceConstant'/AscMapKit/Shared/Materials/MI_Shared_Emit_Red_Dark.MI_Shared_Emit_Red_Dark'"));
	static ConstructorHelpers::FObjectFinder<UMaterialInstanceConstant> MaterialEmitColorWhiteRef(TEXT("MaterialInstanceConstant'/AscMapKit/Shared/Materials/MI_Shared_Emit_White.MI_Shared_Emit_White'"));
	static ConstructorHelpers::FObjectFinder<UMaterialInstanceConstant> MaterialEmitColorYellowRef(TEXT("MaterialInstanceConstant'/AscMapKit/Shared/Materials/MI_Shared_Emit_Yellow.MI_Shared_Emit_Yellow'"));
	static ConstructorHelpers::FObjectFinder<UMaterialInstanceConstant> MaterialEmitColorYellowDarkRef(TEXT("MaterialInstanceConstant'/AscMapKit/Shared/Materials/MI_Shared_Emit_Yellow_Dark.MI_Shared_Emit_Yellow_Dark'"));

	static ConstructorHelpers::FObjectFinder<UMaterialInstanceConstant> AcidMaterialRef(TEXT("MaterialInstanceConstant'/AscMapKit/Conversion/Materials/High/MI_Acid_001.MI_Acid_001'"));
	static ConstructorHelpers::FObjectFinder<UMaterialInstanceConstant> LavaMaterialRef(TEXT("MaterialInstanceConstant'/AscMapKit/Conversion/Materials/High/MI_Lava_004.MI_Lava_004'"));
	static ConstructorHelpers::FObjectFinder<UMaterialInstanceConstant> LavaFallsMaterialRef(TEXT("MaterialInstanceConstant'/AscMapKit/Conversion/Materials/High/MI_Lava_Falls_001.MI_Lava_Falls_001'"));
	static ConstructorHelpers::FObjectFinder<UMaterialInstanceConstant> LiquidMaterialRef(TEXT("MaterialInstanceConstant'/AscMapKit/Shared/Materials/MI_Water_Simple.MI_Water_Simple'"));
	static ConstructorHelpers::FObjectFinder<UMaterialInstanceConstant> SludgeMaterialRef(TEXT("MaterialInstanceConstant'/AscMapKit/Conversion/Materials/High/MI_Sludge_001.MI_Sludge_001'"));

	static ConstructorHelpers::FObjectFinder<UMaterialInstanceConstant> AcidFogMaterialRef(TEXT("MaterialInstanceConstant'/AscMapKit/Shared/Materials/MI_Area_Cloudy_Green.MI_Area_Cloudy_Green'"));
	static ConstructorHelpers::FObjectFinder<UMaterialInstanceConstant> LavaFogMaterialRef(TEXT("MaterialInstanceConstant'/AscMapKit/Shared/Materials/MI_Area_Cloudy_Orange.MI_Area_Cloudy_Orange'"));
	static ConstructorHelpers::FObjectFinder<UMaterialInstanceConstant> LiquidFogMaterialRef(TEXT("MaterialInstanceConstant'/AscMapKit/Shared/Materials/MI_Area_Cloudy_Blue.MI_Area_Cloudy_Blue'"));
	static ConstructorHelpers::FObjectFinder<UMaterialInstanceConstant> SludgeFogMaterialRef(TEXT("MaterialInstanceConstant'/AscMapKit/Shared/Materials/MI_Area_Cloudy_Purple.MI_Area_Cloudy_Purple'"));

	static ConstructorHelpers::FObjectFinder<UMaterial> CausticMaterialRef(TEXT("Material'/AscMapKit/Shared/Materials/M_Area_Water_Caustics.M_Area_Water_Caustics'"));
	
#if USE_PARTICLES_CASCADE
	const ConstructorHelpers::FObjectFinder<UParticleSystem> ElectricalZapsParticleTemplateRef(TEXT("ParticleSystem'/AscMapKit/Shared/Particles/P_Electrical_Zaps_Blue.P_Electrical_Zaps_Blue'"));
	const ConstructorHelpers::FObjectFinder<UParticleSystem> LiquidBubblesParticleTemplateRef(TEXT("ParticleSystem'/AscMapKit/Editor/Particles/Area/Water/PS_Area_Bubbles.PS_Area_Bubbles'"));
	const ConstructorHelpers::FObjectFinder<UParticleSystem> PowerStationParticleTemplateRef(TEXT("ParticleSystem'/AscMapKit/Editor/Particles/Area/PowerStation/PS_Power_Station_Sprites.PS_Power_Station_Sprites'"));
#else
	const ConstructorHelpers::FObjectFinder<UNiagaraSystem> ElectricalZapsParticleTemplateRef(TEXT("NiagaraSystem'/AscMapKit/Shared/Particles/P_Electrical_Zaps_Blue_Niagara.P_Electrical_Zaps_Blue_Niagara'"));
	const ConstructorHelpers::FObjectFinder<UNiagaraSystem> LiquidBubblesParticleTemplateRef(TEXT("NiagaraSystem'/AscMapKit/Editor/Particles/Area/Water/P_Area_Bubbles_Niagara.P_Area_Bubbles_Niagara'"));
	const ConstructorHelpers::FObjectFinder<UNiagaraSystem> PowerStationParticleTemplateRef(TEXT("NiagaraSystem'/AscMapKit/Editor/Particles/Area/PowerStation/P_Power_Station_Sprites_Niagara.P_Power_Station_Sprites_Niagara'"));
#endif

	if (CubeStaticMeshRef.Succeeded())
		CubeStaticMesh = CubeStaticMeshRef.Object;

	if (CylinderStaticMeshRef.Succeeded())
		CylinderStaticMesh = CylinderStaticMeshRef.Object;

	if (PlaneStaticMeshRef.Succeeded())
		PlaneStaticMesh = PlaneStaticMeshRef.Object;

	if (DecorGrate10x20mBasic001StaticMeshRef.Succeeded())
		DecorGrate10x20mBasic001StaticMesh = DecorGrate10x20mBasic001StaticMeshRef.Object;

	if (DecorGrate20x5mBasic001StaticMeshRef.Succeeded())
		DecorGrate20x5mBasic001StaticMesh = DecorGrate20x5mBasic001StaticMeshRef.Object;

	if (DecorGrate20x5mBasic002StaticMeshRef.Succeeded())
		DecorGrate20x5mBasic002StaticMesh = DecorGrate20x5mBasic002StaticMeshRef.Object;

	if (DecorGrate20x20mBasic001StaticMeshRef.Succeeded())
		DecorGrate20x20mBasic001StaticMesh = DecorGrate20x20mBasic001StaticMeshRef.Object;

	if (DecorLetterStaticMeshRef.Succeeded())
		DecorLetterStaticMesh = DecorLetterStaticMeshRef.Object;

	if (DecorPiece001StaticMeshRef.Succeeded())
		DecorPiece001StaticMesh = DecorPiece001StaticMeshRef.Object;

	if (DecorSign001StaticMeshRef.Succeeded())
		DecorSign001StaticMesh = DecorSign001StaticMeshRef.Object;

	if (DecorSign002StaticMeshRef.Succeeded())
		DecorSign002StaticMesh = DecorSign002StaticMeshRef.Object;

	if (DecorSign003StaticMeshRef.Succeeded())
		DecorSign003StaticMesh = DecorSign003StaticMeshRef.Object;

	if (DecorSign004StaticMeshRef.Succeeded())
		DecorSign004StaticMesh = DecorSign004StaticMeshRef.Object;

	if (DecorSign005StaticMeshRef.Succeeded())
		DecorSign005StaticMesh = DecorSign005StaticMeshRef.Object;
		
	if (DecorSign006StaticMeshRef.Succeeded())
		DecorSign006StaticMesh = DecorSign006StaticMeshRef.Object;

	if (MaterialEmitColorBlueRef.Succeeded())
		MaterialEmitColorBlue = MaterialEmitColorBlueRef.Object;

	if (MaterialEmitColorBlueDarkRef.Succeeded())
		MaterialEmitColorBlueDark = MaterialEmitColorBlueDarkRef.Object;
	
	if (MaterialEmitColorCyanRef.Succeeded())
		MaterialEmitColorCyan = MaterialEmitColorCyanRef.Object;

	if (MaterialEmitColorCyanDarkRef.Succeeded())
		MaterialEmitColorCyanDark = MaterialEmitColorCyanDarkRef.Object;

	if (MaterialEmitColorGreenRef.Succeeded())
		MaterialEmitColorGreen = MaterialEmitColorGreenRef.Object;

	if (MaterialEmitColorGreenDarkRef.Succeeded())
		MaterialEmitColorGreenDark = MaterialEmitColorGreenDarkRef.Object;

	if (MaterialEmitColorOrangeRef.Succeeded())
		MaterialEmitColorOrange = MaterialEmitColorOrangeRef.Object;

	if (MaterialEmitColorOrangeDarkRef.Succeeded())
		MaterialEmitColorOrangeDark = MaterialEmitColorOrangeDarkRef.Object;

	if (MaterialEmitColorPurpleRef.Succeeded())
		MaterialEmitColorPurple = MaterialEmitColorPurpleRef.Object;

	if (MaterialEmitColorPurpleDarkRef.Succeeded())
		MaterialEmitColorPurpleDark = MaterialEmitColorPurpleDarkRef.Object;

	if (MaterialEmitColorRedRef.Succeeded())
		MaterialEmitColorRed = MaterialEmitColorRedRef.Object;

	if (MaterialEmitColorRedDarkRef.Succeeded())
		MaterialEmitColorRedDark = MaterialEmitColorRedDarkRef.Object;

	if (MaterialEmitColorWhiteRef.Succeeded())
		MaterialEmitColorWhite = MaterialEmitColorWhiteRef.Object;

	if (MaterialEmitColorYellowRef.Succeeded())
		MaterialEmitColorYellow = MaterialEmitColorYellowRef.Object;
	
	if (MaterialEmitColorYellowDarkRef.Succeeded())
		MaterialEmitColorYellowDark = MaterialEmitColorYellowDarkRef.Object;
	
	if (AcidMaterialRef.Succeeded())
		AcidMaterial = AcidMaterialRef.Object;

	if (LavaMaterialRef.Succeeded())
		LavaMaterial = LavaMaterialRef.Object;

	if (LavaFallsMaterialRef.Succeeded())
		LavaFallsMaterial = LavaFallsMaterialRef.Object;

	if (LiquidMaterialRef.Succeeded())
		LiquidMaterial = LiquidMaterialRef.Object;

	if (SludgeMaterialRef.Succeeded())
		SludgeMaterial = SludgeMaterialRef.Object;

	if (AcidFogMaterialRef.Succeeded())
		AcidFogMaterial = AcidFogMaterialRef.Object;

	if (LavaFogMaterialRef.Succeeded())
		LavaFogMaterial = LavaFogMaterialRef.Object;

	if (LiquidFogMaterialRef.Succeeded())
		LiquidFogMaterial = LiquidFogMaterialRef.Object;

	if (SludgeFogMaterialRef.Succeeded())
		SludgeFogMaterial = SludgeFogMaterialRef.Object;

	if (CausticMaterialRef.Succeeded())
		CausticMaterial = CausticMaterialRef.Object;

	if (ElectricalZapsParticleTemplateRef.Succeeded())
		ElectricalZapsParticleTemplate = ElectricalZapsParticleTemplateRef.Object;

	if (LiquidBubblesParticleTemplateRef.Succeeded())
		LiquidBubblesParticleTemplate = LiquidBubblesParticleTemplateRef.Object;

	if (PowerStationParticleTemplateRef.Succeeded())
		PowerStationParticleTemplate = PowerStationParticleTemplateRef.Object;

	PowerupDefaultCounts.Empty();
	PowerupDefaultCounts.Add(EAscMapKitPowerupTypeEnum::Weapon_Pri_01, 20); // Laser
	PowerupDefaultCounts.Add(EAscMapKitPowerupTypeEnum::Weapon_Pri_02, 2); // Shred
	PowerupDefaultCounts.Add(EAscMapKitPowerupTypeEnum::Weapon_Pri_03, 2); // Mech
	PowerupDefaultCounts.Add(EAscMapKitPowerupTypeEnum::Weapon_Pri_04, 2); // Tox
	PowerupDefaultCounts.Add(EAscMapKitPowerupTypeEnum::Weapon_Pri_05, 2); // Coil
	PowerupDefaultCounts.Add(EAscMapKitPowerupTypeEnum::Weapon_Pri_06, 2); // Phase
	PowerupDefaultCounts.Add(EAscMapKitPowerupTypeEnum::Weapon_Pri_07, 1); // Hydra
	PowerupDefaultCounts.Add(EAscMapKitPowerupTypeEnum::Weapon_Pri_08, 2); // Neutron
	PowerupDefaultCounts.Add(EAscMapKitPowerupTypeEnum::Weapon_Sec_02, 2); // Assault Pack
	PowerupDefaultCounts.Add(EAscMapKitPowerupTypeEnum::Weapon_Sec_04, 4); // Prowler Pack
	PowerupDefaultCounts.Add(EAscMapKitPowerupTypeEnum::Weapon_Sec_05, 8); // RNA
	PowerupDefaultCounts.Add(EAscMapKitPowerupTypeEnum::Weapon_Sec_07, 4); // Deadeye Pack
	PowerupDefaultCounts.Add(EAscMapKitPowerupTypeEnum::Weapon_Sec_08, 1); // Vex
	PowerupDefaultCounts.Add(EAscMapKitPowerupTypeEnum::Weapon_Sec_09, 1); // Aftershock
	PowerupDefaultCounts.Add(EAscMapKitPowerupTypeEnum::Weapon_Tet_02, 1); // Radial Pack
	PowerupDefaultCounts.Add(EAscMapKitPowerupTypeEnum::Weapon_Tet_04, 1); // Bio Pack
	PowerupDefaultCounts.Add(EAscMapKitPowerupTypeEnum::Weapon_Tet_06, 1); // Howler Pack
	PowerupDefaultCounts.Add(EAscMapKitPowerupTypeEnum::Weapon_Tet_07, 8); // Chaff
	PowerupDefaultCounts.Add(EAscMapKitPowerupTypeEnum::Aux_03, 1); // Conceal
	PowerupDefaultCounts.Add(EAscMapKitPowerupTypeEnum::Aux_04, 1); // Invincible
	PowerupDefaultCounts.Add(EAscMapKitPowerupTypeEnum::Aux_05, 4); // Laser Coupler
	PowerupDefaultCounts.Add(EAscMapKitPowerupTypeEnum::Aux_06, 1); // Ammo
	PowerupDefaultCounts.Add(EAscMapKitPowerupTypeEnum::Aux_07, 4); // Ammo Cache
	PowerupDefaultCounts.Add(EAscMapKitPowerupTypeEnum::Aux_08, 4); // Boost
	PowerupDefaultCounts.Add(EAscMapKitPowerupTypeEnum::Aux_09, 2); // Power Transfer
	PowerupDefaultCounts.Add(EAscMapKitPowerupTypeEnum::Aux_10, 1); // Navmap Reveal
	
	DecorTypeStaticMeshMap.Empty();
	DecorTypeStaticMeshMap.Add(EAscMapKitDecorTypeEnum::Grate_10x20m_Basic_001, DecorGrate10x20mBasic001StaticMesh);
	DecorTypeStaticMeshMap.Add(EAscMapKitDecorTypeEnum::Grate_20x5m_Basic_001, DecorGrate20x5mBasic001StaticMesh);
	DecorTypeStaticMeshMap.Add(EAscMapKitDecorTypeEnum::Grate_20x5m_Basic_002, DecorGrate20x5mBasic002StaticMesh);
	DecorTypeStaticMeshMap.Add(EAscMapKitDecorTypeEnum::Grate_20x20m_Basic_001, DecorGrate20x20mBasic001StaticMesh);
	DecorTypeStaticMeshMap.Add(EAscMapKitDecorTypeEnum::Ladder_Set_001, DecorPiece001StaticMesh);
	DecorTypeStaticMeshMap.Add(EAscMapKitDecorTypeEnum::Letter, DecorLetterStaticMesh);
	DecorTypeStaticMeshMap.Add(EAscMapKitDecorTypeEnum::Piece_001, DecorPiece001StaticMesh);
	DecorTypeStaticMeshMap.Add(EAscMapKitDecorTypeEnum::Sign_001, DecorSign001StaticMesh);
	DecorTypeStaticMeshMap.Add(EAscMapKitDecorTypeEnum::Sign_002, DecorSign002StaticMesh);
	DecorTypeStaticMeshMap.Add(EAscMapKitDecorTypeEnum::Sign_003, DecorSign003StaticMesh);
	DecorTypeStaticMeshMap.Add(EAscMapKitDecorTypeEnum::Sign_004, DecorSign004StaticMesh);
	DecorTypeStaticMeshMap.Add(EAscMapKitDecorTypeEnum::Sign_005, DecorSign005StaticMesh);
	DecorTypeStaticMeshMap.Add(EAscMapKitDecorTypeEnum::Sign_006, DecorSign006StaticMesh);

	DecorTypeStaticMeshMaterialEmitColorOverrideMap.Empty();
	DecorTypeStaticMeshMaterialEmitColorOverrideMap.Add(EAscMapKitDecorTypeEnum::Grate_20x20m_Basic_001, 1);
	DecorTypeStaticMeshMaterialEmitColorOverrideMap.Add(EAscMapKitDecorTypeEnum::Letter, 0);
	DecorTypeStaticMeshMaterialEmitColorOverrideMap.Add(EAscMapKitDecorTypeEnum::Sign_001, 2);
	DecorTypeStaticMeshMaterialEmitColorOverrideMap.Add(EAscMapKitDecorTypeEnum::Sign_002, 2);
	DecorTypeStaticMeshMaterialEmitColorOverrideMap.Add(EAscMapKitDecorTypeEnum::Sign_004, 2);
	DecorTypeStaticMeshMaterialEmitColorOverrideMap.Add(EAscMapKitDecorTypeEnum::Sign_005, 2);
	DecorTypeStaticMeshMaterialEmitColorOverrideMap.Add(EAscMapKitDecorTypeEnum::Sign_006, 0);

	DecorTypeLightSupport.Empty();
	DecorTypeLightSupport.Add(EAscMapKitDecorTypeEnum::Grate_20x20m_Basic_001);
	DecorTypeLightSupport.Add(EAscMapKitDecorTypeEnum::Letter);
	DecorTypeLightSupport.Add(EAscMapKitDecorTypeEnum::Sign_001);
	DecorTypeLightSupport.Add(EAscMapKitDecorTypeEnum::Sign_002);
	DecorTypeLightSupport.Add(EAscMapKitDecorTypeEnum::Sign_004);
	DecorTypeLightSupport.Add(EAscMapKitDecorTypeEnum::Sign_005);
	DecorTypeLightSupport.Add(EAscMapKitDecorTypeEnum::Sign_006);

	DoorTypeStaticMeshMaterialEmitColorOverrideMap.Empty();
	DoorTypeStaticMeshMaterialEmitColorOverrideMap.Add(EAscMapKitDoorTypeEnum::Animated20x20mBasic004, 4);
	DoorTypeStaticMeshMaterialEmitColorOverrideMap.Add(EAscMapKitDoorTypeEnum::Animated20x20mBasic005, 2);

	FanTypeStaticMeshMaterialEmitColorOverrideMap.Empty();
	FanTypeStaticMeshMaterialEmitColorOverrideMap.Add(EAscMapKitFanTypeEnum::Animated20x20mBasic001, 3);

	// todo: triggers don't have emit materials yet
	TriggerTypeStaticMeshMaterialEmitColorOverrideMap.Empty();
	//TriggerTypeStaticMeshMaterialEmitColorOverrideMap.Add(EAscMapKitTriggerTypeEnum::Basic001, 0);

	MaterialEmitColorTypeMaterialMap.Empty();
	MaterialEmitColorTypeMaterialMap.Add(EAscMapKitMaterialEmitColorTypeEnum::Blue, MaterialEmitColorBlue);
	MaterialEmitColorTypeMaterialMap.Add(EAscMapKitMaterialEmitColorTypeEnum::BlueDark, MaterialEmitColorBlueDark);
	MaterialEmitColorTypeMaterialMap.Add(EAscMapKitMaterialEmitColorTypeEnum::Cyan, MaterialEmitColorCyan);
	MaterialEmitColorTypeMaterialMap.Add(EAscMapKitMaterialEmitColorTypeEnum::CyanDark, MaterialEmitColorCyanDark);
	MaterialEmitColorTypeMaterialMap.Add(EAscMapKitMaterialEmitColorTypeEnum::Green, MaterialEmitColorGreen);
	MaterialEmitColorTypeMaterialMap.Add(EAscMapKitMaterialEmitColorTypeEnum::GreenDark, MaterialEmitColorGreenDark);
	MaterialEmitColorTypeMaterialMap.Add(EAscMapKitMaterialEmitColorTypeEnum::Orange, MaterialEmitColorOrange);
	MaterialEmitColorTypeMaterialMap.Add(EAscMapKitMaterialEmitColorTypeEnum::OrangeDark, MaterialEmitColorOrangeDark);
	MaterialEmitColorTypeMaterialMap.Add(EAscMapKitMaterialEmitColorTypeEnum::Purple, MaterialEmitColorPurple);
	MaterialEmitColorTypeMaterialMap.Add(EAscMapKitMaterialEmitColorTypeEnum::PurpleDark, MaterialEmitColorPurpleDark);
	MaterialEmitColorTypeMaterialMap.Add(EAscMapKitMaterialEmitColorTypeEnum::Red, MaterialEmitColorRed);
	MaterialEmitColorTypeMaterialMap.Add(EAscMapKitMaterialEmitColorTypeEnum::RedDark, MaterialEmitColorRedDark);
	MaterialEmitColorTypeMaterialMap.Add(EAscMapKitMaterialEmitColorTypeEnum::White, MaterialEmitColorWhite);
	MaterialEmitColorTypeMaterialMap.Add(EAscMapKitMaterialEmitColorTypeEnum::Yellow, MaterialEmitColorYellow);
	MaterialEmitColorTypeMaterialMap.Add(EAscMapKitMaterialEmitColorTypeEnum::YellowDark, MaterialEmitColorYellowDark);

	TabUnselectedColor = FLinearColor(1.f, 1.f, 1.f, 0.f);
	TabSelectedColor = FLinearColor(0.730461f, 0.366253f, 0.002732f, 1.f);
}

void UAscMapKitEditorToolsUtilityWidget::NativeConstruct()
{
	Super::NativeConstruct();

	// Material Emit Color
	MaterialEmitColorTypeMap.Empty();

	const UEnum *MaterialEmitColorTypeEnum = StaticEnum<EAscMapKitMaterialEmitColorTypeEnum>();

	for (auto i = 0; i < MaterialEmitColorTypeEnum->GetMaxEnumValue(); ++i)
	{
		if (MaterialEmitColorTypeEnum->IsValidEnumValue(i))
		{
			const auto EnumValue = static_cast<EAscMapKitMaterialEmitColorTypeEnum>(MaterialEmitColorTypeEnum->GetValueByIndex(i));
			const auto DisplayName = MaterialEmitColorTypeEnum->GetDisplayNameTextByIndex(i).ToString();

			MaterialEmitColorTypeMap.Add(EnumValue, DisplayName);
		}
	}

	// Decor
	DecorTypeMap.Empty();
	DecorTypeMap.Add(EAscMapKitDecorTypeEnum::None, TEXT("Please Select"));

	const UEnum *DecorTypeEnum = StaticEnum<EAscMapKitDecorTypeEnum>();

	for (auto i = 0; i < DecorTypeEnum->GetMaxEnumValue(); ++i)
	{
		if (DecorTypeEnum->IsValidEnumValue(i))
		{
			const auto EnumValue = static_cast<EAscMapKitDecorTypeEnum>(DecorTypeEnum->GetValueByIndex(i));
			const auto DisplayName = DecorTypeEnum->GetDisplayNameTextByIndex(i).ToString();

			DecorTypeMap.Add(EnumValue, DisplayName);
		}
	}
	
	// Door
	DoorTypeMap.Empty();
	DoorTypeMap.Add(EAscMapKitDoorTypeEnum::None, TEXT("Please Select"));

	const UEnum *DoorTypeEnum = StaticEnum<EAscMapKitDoorTypeEnum>();

	for (auto i = 0; i < DoorTypeEnum->GetMaxEnumValue(); ++i)
	{
		if (DoorTypeEnum->IsValidEnumValue(i))
		{
			const auto EnumValue = static_cast<EAscMapKitDoorTypeEnum>(DoorTypeEnum->GetValueByIndex(i));
			const auto DisplayName = DoorTypeEnum->GetDisplayNameTextByIndex(i).ToString();

			DoorTypeMap.Add(EnumValue, DisplayName);
		}
	}

	// Enemy
	EnemyTypeMap.Empty();
	EnemyTypeMap.Add(EAscMapKitEnemyTypeEnum::None, TEXT("Please Select"));

	const UEnum *EnemyTypeEnum = StaticEnum<EAscMapKitEnemyTypeEnum>();

	for (auto i = 0; i < EnemyTypeEnum->GetMaxEnumValue(); ++i)
	{
		if (EnemyTypeEnum->IsValidEnumValue(i))
		{
			const auto EnumValue = static_cast<EAscMapKitEnemyTypeEnum>(EnemyTypeEnum->GetValueByIndex(i));
			const auto DisplayName = EnemyTypeEnum->GetDisplayNameTextByIndex(i).ToString();

			EnemyTypeMap.Add(EnumValue, DisplayName);
		}
	}

	// Fan
	FanTypeMap.Empty();
	FanTypeMap.Add(EAscMapKitFanTypeEnum::None, TEXT("Please Select"));

	const UEnum *FanTypeEnum = StaticEnum<EAscMapKitFanTypeEnum>();

	for (auto i = 0; i < FanTypeEnum->GetMaxEnumValue(); ++i)
	{
		if (FanTypeEnum->IsValidEnumValue(i))
		{
			const auto EnumValue = static_cast<EAscMapKitFanTypeEnum>(FanTypeEnum->GetValueByIndex(i));
			const auto DisplayName = FanTypeEnum->GetDisplayNameTextByIndex(i).ToString();

			FanTypeMap.Add(EnumValue, DisplayName);
		}
	}
	
	// Powerup
	PowerupTypeMap.Empty();
	PowerupTypeMap.Add(EAscMapKitPowerupTypeEnum::None, TEXT("Please Select"));

	const UEnum *PowerupTypeEnum = StaticEnum<EAscMapKitPowerupTypeEnum>();

	for (auto i = 0; i < PowerupTypeEnum->GetMaxEnumValue(); ++i)
	{
		if (PowerupTypeEnum->IsValidEnumValue(i))
		{
			const auto EnumValue = static_cast<EAscMapKitPowerupTypeEnum>(PowerupTypeEnum->GetValueByIndex(i));
			const auto DisplayName = PowerupTypeEnum->GetDisplayNameTextByIndex(i).ToString();

			PowerupTypeMap.Add(EnumValue, DisplayName);
		}
	}

	// Trigger
	TriggerTypeMap.Empty();
	TriggerTypeMap.Add(EAscMapKitTriggerTypeEnum::None, TEXT("Please Select"));

	const UEnum *TriggerTypeEnum = StaticEnum<EAscMapKitTriggerTypeEnum>();

	for (auto i = 0; i < TriggerTypeEnum->GetMaxEnumValue(); ++i)
	{
		if (TriggerTypeEnum->IsValidEnumValue(i))
		{
			const auto EnumValue = static_cast<EAscMapKitTriggerTypeEnum>(TriggerTypeEnum->GetValueByIndex(i));
			const auto DisplayName = TriggerTypeEnum->GetDisplayNameTextByIndex(i).ToString();

			TriggerTypeMap.Add(EnumValue, DisplayName);
		}
	}

	BtnCreate->OnClicked.Clear();
	BtnCreate->OnClicked.AddDynamic(this, &UAscMapKitEditorToolsUtilityWidget::BtnCreateOnClick);

	BtnGenerate->OnClicked.Clear();
	BtnGenerate->OnClicked.AddDynamic(this, &UAscMapKitEditorToolsUtilityWidget::BtnGenerateOnClick);

	BtnValidate->OnClicked.Clear();
	BtnValidate->OnClicked.AddDynamic(this, &UAscMapKitEditorToolsUtilityWidget::BtnValidateOnClick);

	BtnHelp->OnClicked.Clear();
	BtnHelp->OnClicked.AddDynamic(this, &UAscMapKitEditorToolsUtilityWidget::BtnHelpOnClick);
	
	BtnAbout->OnClicked.Clear();
	BtnAbout->OnClicked.AddDynamic(this, &UAscMapKitEditorToolsUtilityWidget::BtnAboutOnClick);

	BtnSubTitleCreateArea->OnClicked.Clear();
	BtnSubTitleCreateArea->OnClicked.AddDynamic(this, &UAscMapKitEditorToolsUtilityWidget::BtnSubTitleCreateAreaOnClick);

	BtnSubTitleCreateDecor->OnClicked.Clear();
	BtnSubTitleCreateDecor->OnClicked.AddDynamic(this, &UAscMapKitEditorToolsUtilityWidget::BtnSubTitleCreateDecorOnClick);

	BtnSubTitleCreateDestructible->OnClicked.Clear();
	BtnSubTitleCreateDestructible->OnClicked.AddDynamic(this, &UAscMapKitEditorToolsUtilityWidget::BtnSubTitleCreateDestructibleOnClick);

	BtnSubTitleCreateDoor->OnClicked.Clear();
	BtnSubTitleCreateDoor->OnClicked.AddDynamic(this, &UAscMapKitEditorToolsUtilityWidget::BtnSubTitleCreateDoorOnClick);

	BtnSubTitleCreateEnemy->OnClicked.Clear();
	BtnSubTitleCreateEnemy->OnClicked.AddDynamic(this, &UAscMapKitEditorToolsUtilityWidget::BtnSubTitleCreateEnemyOnClick);

	BtnSubTitleCreateFan->OnClicked.Clear();
	BtnSubTitleCreateFan->OnClicked.AddDynamic(this, &UAscMapKitEditorToolsUtilityWidget::BtnSubTitleCreateFanOnClick);

	BtnSubTitleCreateForcefield->OnClicked.Clear();
	BtnSubTitleCreateForcefield->OnClicked.AddDynamic(this, &UAscMapKitEditorToolsUtilityWidget::BtnSubTitleCreateForcefieldOnClick);

	BtnSubTitleCreateLight->OnClicked.Clear();
	BtnSubTitleCreateLight->OnClicked.AddDynamic(this, &UAscMapKitEditorToolsUtilityWidget::BtnSubTitleCreateLightOnClick);

	BtnSubTitleCreatePlayer->OnClicked.Clear();
	BtnSubTitleCreatePlayer->OnClicked.AddDynamic(this, &UAscMapKitEditorToolsUtilityWidget::BtnSubTitleCreatePlayerOnClick);
	
	BtnSubTitleCreatePowerup->OnClicked.Clear();
	BtnSubTitleCreatePowerup->OnClicked.AddDynamic(this, &UAscMapKitEditorToolsUtilityWidget::BtnSubTitleCreatePowerupOnClick);

	BtnSubTitleCreateTrigger->OnClicked.Clear();
	BtnSubTitleCreateTrigger->OnClicked.AddDynamic(this, &UAscMapKitEditorToolsUtilityWidget::BtnSubTitleCreateTriggerOnClick);

	// Create Area
	ComboBoxAddArea->ClearOptions();
	ComboBoxAddArea->AddOption(TEXT("Please Select"));
	ComboBoxAddArea->AddOption(TEXT("Acid"));
	ComboBoxAddArea->AddOption(TEXT("Electric"));
	ComboBoxAddArea->AddOption(TEXT("Lava"));
	ComboBoxAddArea->AddOption(TEXT("Lava Falls"));
	ComboBoxAddArea->AddOption(TEXT("Liquid"));
	ComboBoxAddArea->AddOption(TEXT("Power Station"));
	ComboBoxAddArea->AddOption(TEXT("Sludge"));
	ComboBoxAddArea->SetSelectedIndex(0);

	ComboBoxAddAreaCount->ClearOptions();
	ComboBoxAddAreaCount->AddOption(TEXT("How Many?"));

	for (auto i = 1; i <= 10; i++)
		ComboBoxAddAreaCount->AddOption(FString::Printf(TEXT("%d"), i));

	ComboBoxAddAreaCount->SetSelectedIndex(1);

	ComboBoxAddAreaWhere->ClearOptions();
	ComboBoxAddAreaWhere->AddOption(TEXT("Where?"));
	ComboBoxAddAreaWhere->AddOption(TEXT("0, 0, 0"));
	ComboBoxAddAreaWhere->AddOption(TEXT("Selected"));
	ComboBoxAddAreaWhere->SetSelectedIndex(2);

	BtnAddArea->OnClicked.Clear();
	BtnAddArea->OnClicked.AddDynamic(this, &UAscMapKitEditorToolsUtilityWidget::BtnAddAreaOnClick);

	// Create Decor
	ComboBoxAddDecorType->ClearOptions();

	for (const auto &Item : DecorTypeMap)
		ComboBoxAddDecorType->AddOption(Item.Value);

	ComboBoxAddDecorType->SetSelectedIndex(0);

	ComboBoxAddDecorColor->ClearOptions();

	for (const auto &Item : MaterialEmitColorTypeMap)
		ComboBoxAddDecorColor->AddOption(Item.Value);

	ComboBoxAddDecorColor->SetSelectedIndex(0);

	ComboBoxAddDecorCount->ClearOptions();
	ComboBoxAddDecorCount->AddOption(TEXT("How Many?"));

	for (auto i = 1; i <= 10; i++)
		ComboBoxAddDecorCount->AddOption(FString::Printf(TEXT("%d"), i));

	ComboBoxAddDecorCount->SetSelectedIndex(1);

	ComboBoxAddDecorWhere->ClearOptions();
	ComboBoxAddDecorWhere->AddOption(TEXT("Where?"));
	ComboBoxAddDecorWhere->AddOption(TEXT("0, 0, 0"));
	ComboBoxAddDecorWhere->AddOption(TEXT("Selected"));
	ComboBoxAddDecorWhere->SetSelectedIndex(2);

	ChkBoxAddDecorLight->SetIsChecked(true);
	
	BtnAddDecor->OnClicked.Clear();
	BtnAddDecor->OnClicked.AddDynamic(this, &UAscMapKitEditorToolsUtilityWidget::BtnAddDecorOnClick);

	// Create Door
	ComboBoxAddDoorType->ClearOptions();

	for (const auto &Item : DoorTypeMap)
		ComboBoxAddDoorType->AddOption(Item.Value);

	ComboBoxAddDoorType->SetSelectedIndex(0);

	ComboBoxAddDoorColor->ClearOptions();

	for (const auto &Item : MaterialEmitColorTypeMap)
		ComboBoxAddDoorColor->AddOption(Item.Value);

	ComboBoxAddDoorColor->SetSelectedIndex(0);

	ComboBoxAddDoorCount->ClearOptions();
	ComboBoxAddDoorCount->AddOption(TEXT("How Many?"));

	for (auto i = 1; i <= 10; i++)
		ComboBoxAddDoorCount->AddOption(FString::Printf(TEXT("%d"), i));

	ComboBoxAddDoorCount->SetSelectedIndex(1);

	ComboBoxAddDoorWhere->ClearOptions();
	ComboBoxAddDoorWhere->AddOption(TEXT("Where?"));
	ComboBoxAddDoorWhere->AddOption(TEXT("0, 0, 0"));
	ComboBoxAddDoorWhere->AddOption(TEXT("Selected"));
	ComboBoxAddDoorWhere->SetSelectedIndex(2);

	BtnAddDoor->OnClicked.Clear();
	BtnAddDoor->OnClicked.AddDynamic(this, &UAscMapKitEditorToolsUtilityWidget::BtnAddDoorOnClick);

	// Create Enemy
	ComboBoxAddEnemyType->ClearOptions();

	for (const auto &Item : EnemyTypeMap)
		ComboBoxAddEnemyType->AddOption(Item.Value);

	ComboBoxAddEnemyType->SetSelectedIndex(0);

	ComboBoxAddEnemyColor->ClearOptions();

	for (const auto &Item : MaterialEmitColorTypeMap)
		ComboBoxAddEnemyColor->AddOption(Item.Value);

	ComboBoxAddEnemyColor->SetSelectedIndex(0);

	ComboBoxAddEnemyCount->ClearOptions();
	ComboBoxAddEnemyCount->AddOption(TEXT("How Many?"));

	for (auto i = 1; i <= 10; i++)
		ComboBoxAddEnemyCount->AddOption(FString::Printf(TEXT("%d"), i));

	ComboBoxAddEnemyCount->SetSelectedIndex(1);

	ComboBoxAddEnemyWhere->ClearOptions();
	ComboBoxAddEnemyWhere->AddOption(TEXT("Where?"));
	ComboBoxAddEnemyWhere->AddOption(TEXT("0, 0, 0"));
	ComboBoxAddEnemyWhere->AddOption(TEXT("Selected"));
	ComboBoxAddEnemyWhere->SetSelectedIndex(2);

	BtnAddEnemy->OnClicked.Clear();
	BtnAddEnemy->OnClicked.AddDynamic(this, &UAscMapKitEditorToolsUtilityWidget::BtnAddEnemyOnClick);

	// Create Fan
	ComboBoxAddFanType->ClearOptions();

	for (const auto &Item : FanTypeMap)
		ComboBoxAddFanType->AddOption(Item.Value);

	ComboBoxAddFanType->SetSelectedIndex(0);

	ComboBoxAddFanColor->ClearOptions();

	for (const auto &Item : MaterialEmitColorTypeMap)
		ComboBoxAddFanColor->AddOption(Item.Value);

	ComboBoxAddFanColor->SetSelectedIndex(0);

	ComboBoxAddFanCount->ClearOptions();
	ComboBoxAddFanCount->AddOption(TEXT("How Many?"));

	for (auto i = 1; i <= 10; i++)
		ComboBoxAddFanCount->AddOption(FString::Printf(TEXT("%d"), i));

	ComboBoxAddFanCount->SetSelectedIndex(1);

	ComboBoxAddFanWhere->ClearOptions();
	ComboBoxAddFanWhere->AddOption(TEXT("Where?"));
	ComboBoxAddFanWhere->AddOption(TEXT("0, 0, 0"));
	ComboBoxAddFanWhere->AddOption(TEXT("Selected"));
	ComboBoxAddFanWhere->SetSelectedIndex(2);

	BtnAddFan->OnClicked.Clear();
	BtnAddFan->OnClicked.AddDynamic(this, &UAscMapKitEditorToolsUtilityWidget::BtnAddFanOnClick);

	// Create Forcefield
	ComboBoxAddForcefieldColor->ClearOptions();

	for (const auto &Item : MaterialEmitColorTypeMap)
		ComboBoxAddForcefieldColor->AddOption(Item.Value);

	ComboBoxAddForcefieldColor->SetSelectedIndex(0);

	ComboBoxAddForcefieldCount->ClearOptions();
	ComboBoxAddForcefieldCount->AddOption(TEXT("How Many?"));

	for (auto i = 1; i <= 10; i++)
		ComboBoxAddForcefieldCount->AddOption(FString::Printf(TEXT("%d"), i));

	ComboBoxAddForcefieldCount->SetSelectedIndex(1);

	ComboBoxAddForcefieldWhere->ClearOptions();
	ComboBoxAddForcefieldWhere->AddOption(TEXT("Where?"));
	ComboBoxAddForcefieldWhere->AddOption(TEXT("0, 0, 0"));
	ComboBoxAddForcefieldWhere->AddOption(TEXT("Selected"));
	ComboBoxAddForcefieldWhere->SetSelectedIndex(2);

	BtnAddForcefield->OnClicked.Clear();
	BtnAddForcefield->OnClicked.AddDynamic(this, &UAscMapKitEditorToolsUtilityWidget::BtnAddForcefieldOnClick);

	// Create Light
	ComboBoxAddLightType->ClearOptions();
	ComboBoxAddLightType->AddOption(TEXT("Please Select"));
	ComboBoxAddLightType->AddOption(TEXT("Standalone: Point"));
	ComboBoxAddLightType->AddOption(TEXT("Standalone: Rectangular"));
	ComboBoxAddLightType->AddOption(TEXT("Standalone: Spot"));
	ComboBoxAddLightType->AddOption(TEXT("Pre-made set: Round"));
	ComboBoxAddLightType->AddOption(TEXT("Pre-made set: Square"));
	ComboBoxAddLightType->SetSelectedIndex(1);

	ComboBoxAddLightColor->ClearOptions();

	for (const auto &Item : MaterialEmitColorTypeMap)
		ComboBoxAddLightColor->AddOption(Item.Value);

	ComboBoxAddLightColor->SetSelectedIndex(0);

	ComboBoxAddLightCount->ClearOptions();
	ComboBoxAddLightCount->AddOption(TEXT("How Many?"));

	for (auto i = 1; i <= 10; i++)
		ComboBoxAddLightCount->AddOption(FString::Printf(TEXT("%d"), i));

	ComboBoxAddLightCount->SetSelectedIndex(1);

	ComboBoxAddLightWhere->ClearOptions();
	ComboBoxAddLightWhere->AddOption(TEXT("Where?"));
	ComboBoxAddLightWhere->AddOption(TEXT("0, 0, 0"));
	ComboBoxAddLightWhere->AddOption(TEXT("Selected"));
	ComboBoxAddLightWhere->SetSelectedIndex(2);

	BtnAddLight->OnClicked.Clear();
	BtnAddLight->OnClicked.AddDynamic(this, &UAscMapKitEditorToolsUtilityWidget::BtnAddLightOnClick);

	// Create Player
	ComboBoxAddPlayerCount->ClearOptions();
	ComboBoxAddPlayerCount->AddOption(TEXT("How Many?"));

	for (auto i = 1; i <= 8; i++)
		ComboBoxAddPlayerCount->AddOption(FString::Printf(TEXT("%d"), i));

	ComboBoxAddPlayerCount->SetSelectedIndex(1);

	ComboBoxAddPlayerWhere->ClearOptions();
	ComboBoxAddPlayerWhere->AddOption(TEXT("Where?"));
	ComboBoxAddPlayerWhere->AddOption(TEXT("0, 0, 0"));
	ComboBoxAddPlayerWhere->AddOption(TEXT("Selected"));
	ComboBoxAddPlayerWhere->SetSelectedIndex(2);

	BtnAddPlayer->OnClicked.Clear();
	BtnAddPlayer->OnClicked.AddDynamic(this, &UAscMapKitEditorToolsUtilityWidget::BtnAddPlayerOnClick);
	
	// Create Powerup
	ComboBoxAddPowerupType->ClearOptions();

	for (const auto &Item : PowerupTypeMap)
		ComboBoxAddPowerupType->AddOption(Item.Value);

	ComboBoxAddPowerupType->SetSelectedIndex(0);

	ComboBoxAddPowerupCount->ClearOptions();
	ComboBoxAddPowerupCount->AddOption(TEXT("How Many?"));

	for (auto i = 1; i <= 10; i++)
		ComboBoxAddPowerupCount->AddOption(FString::Printf(TEXT("%d"), i));

	ComboBoxAddPowerupCount->SetSelectedIndex(1);

	ComboBoxAddPowerupWhere->ClearOptions();
	ComboBoxAddPowerupWhere->AddOption(TEXT("Where?"));
	ComboBoxAddPowerupWhere->AddOption(TEXT("0, 0, 0"));
	ComboBoxAddPowerupWhere->AddOption(TEXT("Selected"));
	ComboBoxAddPowerupWhere->SetSelectedIndex(2);

	ChkBoxAddPowerupIncludeDefaultNames->SetIsChecked(true);

	BtnAddPowerup->OnClicked.Clear();
	BtnAddPowerup->OnClicked.AddDynamic(this, &UAscMapKitEditorToolsUtilityWidget::BtnAddPowerupOnClick);

	ComboBoxAddPowerupDefaultsWhere->ClearOptions();
	ComboBoxAddPowerupDefaultsWhere->AddOption(TEXT("Where?"));
	ComboBoxAddPowerupDefaultsWhere->AddOption(TEXT("0, 0, 0"));
	ComboBoxAddPowerupDefaultsWhere->AddOption(TEXT("Selected"));
	ComboBoxAddPowerupDefaultsWhere->SetSelectedIndex(2);

	ChkBoxAddDefaultPowerupIncludeDefaultNames->SetIsChecked(true);

	BtnAddPowerupsDefaults->OnClicked.Clear();
	BtnAddPowerupsDefaults->OnClicked.AddDynamic(this, &UAscMapKitEditorToolsUtilityWidget::BtnAddPowerupsDefaultsOnClick);

	// Create Trigger
	ComboBoxAddTriggerType->ClearOptions();

	for (const auto &Item : TriggerTypeMap)
		ComboBoxAddTriggerType->AddOption(Item.Value);

	ComboBoxAddTriggerType->SetSelectedIndex(0);

	ComboBoxAddTriggerColor->ClearOptions();

	for (const auto &Item : MaterialEmitColorTypeMap)
		ComboBoxAddTriggerColor->AddOption(Item.Value);

	ComboBoxAddTriggerColor->SetSelectedIndex(0);

	ComboBoxAddTriggerCount->ClearOptions();
	ComboBoxAddTriggerCount->AddOption(TEXT("How Many?"));

	for (auto i = 1; i <= 10; i++)
		ComboBoxAddTriggerCount->AddOption(FString::Printf(TEXT("%d"), i));

	ComboBoxAddTriggerCount->SetSelectedIndex(1);

	ComboBoxAddTriggerWhere->ClearOptions();
	ComboBoxAddTriggerWhere->AddOption(TEXT("Where?"));
	ComboBoxAddTriggerWhere->AddOption(TEXT("0, 0, 0"));
	ComboBoxAddTriggerWhere->AddOption(TEXT("Selected"));
	ComboBoxAddTriggerWhere->SetSelectedIndex(2);

	BtnAddTrigger->OnClicked.Clear();
	BtnAddTrigger->OnClicked.AddDynamic(this, &UAscMapKitEditorToolsUtilityWidget::BtnAddTriggerOnClick);

	// Generate Effects
	BtnSubTitleGenerateEffects->OnClicked.Clear();
	BtnSubTitleGenerateEffects->OnClicked.AddDynamic(this, &UAscMapKitEditorToolsUtilityWidget::BtnSubTitleGenerateEffectsOnClick);

	BtnGenerateEffects->OnClicked.Clear();
	BtnGenerateEffects->OnClicked.AddDynamic(this, &UAscMapKitEditorToolsUtilityWidget::BtnGenerateEffectsOnClick);

	// Generate Navmap Bounds
	BtnSubTitleGenerateNavmapBounds->OnClicked.Clear();
	BtnSubTitleGenerateNavmapBounds->OnClicked.AddDynamic(this, &UAscMapKitEditorToolsUtilityWidget::BtnSubTitleGenerateNavmapBoundsOnClick);

	BtnGenerateNavmapBounds->OnClicked.Clear();
	BtnGenerateNavmapBounds->OnClicked.AddDynamic(this, &UAscMapKitEditorToolsUtilityWidget::BtnGenerateNavmapBoundsOnClick);

	// Generate Powerup Respawn Triggers
	BtnSubTitleGeneratePowerupRespawns->OnClicked.Clear();
	BtnSubTitleGeneratePowerupRespawns->OnClicked.AddDynamic(this, &UAscMapKitEditorToolsUtilityWidget::BtnSubTitleGeneratePowerupRespawnsOnClick);

	BtnGeneratePowerupRespawns->OnClicked.Clear();
	BtnGeneratePowerupRespawns->OnClicked.AddDynamic(this, &UAscMapKitEditorToolsUtilityWidget::BtnGeneratePowerupRespawnsOnClick);

	// Validate Run
	BtnSubTitleValidate->OnClicked.Clear();
	BtnSubTitleValidate->OnClicked.AddDynamic(this, &UAscMapKitEditorToolsUtilityWidget::BtnSubTitleValidateOnClick);

	BtnRunValidate->OnClicked.Clear();
	BtnRunValidate->OnClicked.AddDynamic(this, &UAscMapKitEditorToolsUtilityWidget::BtnRunValidateOnClick);

	BtnRunValidateReset->OnClicked.Clear();
	BtnRunValidateReset->OnClicked.AddDynamic(this, &UAscMapKitEditorToolsUtilityWidget::BtnRunValidateResetOnClick);

	// Validate Errors
	BtnSubTitleValidateErrors->OnClicked.Clear();
	BtnSubTitleValidateErrors->OnClicked.AddDynamic(this, &UAscMapKitEditorToolsUtilityWidget::BtnSubTitleValidateErrorsOnClick);

	// Validate Warnings
	BtnSubTitleValidateWarnings->OnClicked.Clear();
	BtnSubTitleValidateWarnings->OnClicked.AddDynamic(this, &UAscMapKitEditorToolsUtilityWidget::BtnSubTitleValidateWarningsOnClick);

	// Help
	BtnSubTitleOtherTools->OnClicked.Clear();
	BtnSubTitleOtherTools->OnClicked.AddDynamic(this, &UAscMapKitEditorToolsUtilityWidget::BtnSubTitleOtherToolsOnClick);

	BtnSubTitleImportLevelStaticMesh->OnClicked.Clear();
	BtnSubTitleImportLevelStaticMesh->OnClicked.AddDynamic(this, &UAscMapKitEditorToolsUtilityWidget::BtnSubTitleImportLevelStaticMeshOnClick);

	BtnSubTitleLevelStaticMeshSetup->OnClicked.Clear();
	BtnSubTitleLevelStaticMeshSetup->OnClicked.AddDynamic(this, &UAscMapKitEditorToolsUtilityWidget::BtnSubTitleLevelStaticMeshSetupOnClick);

	BtnSubTitleLevelStaticMeshLightmapSetup->OnClicked.Clear();
	BtnSubTitleLevelStaticMeshLightmapSetup->OnClicked.AddDynamic(this, &UAscMapKitEditorToolsUtilityWidget::BtnSubTitleLevelStaticMeshLightmapSetupOnClick);

	BtnSubTitleProjectLightBuildSetup->OnClicked.Clear();
	BtnSubTitleProjectLightBuildSetup->OnClicked.AddDynamic(this, &UAscMapKitEditorToolsUtilityWidget::BtnSubTitleProjectLightBuildSetupOnClick);

	BtnSubTitleMeshTool->OnClicked.Clear();
	BtnSubTitleMeshTool->OnClicked.AddDynamic(this, &UAscMapKitEditorToolsUtilityWidget::BtnSubTitleMeshToolOnClick);

	BtnSubTitleTips->OnClicked.Clear();
	BtnSubTitleTips->OnClicked.AddDynamic(this, &UAscMapKitEditorToolsUtilityWidget::BtnSubTitleTipsOnClick);

	BtnSubTitleLinks->OnClicked.Clear();
	BtnSubTitleLinks->OnClicked.AddDynamic(this, &UAscMapKitEditorToolsUtilityWidget::BtnSubTitleLinksOnClick);

	// Urls
	BtnOtherToolsDesLevelObjDownload->OnClicked.Clear();
	BtnOtherToolsDesLevelObjDownload->OnClicked.AddDynamic(this, &UAscMapKitEditorToolsUtilityWidget::BtnOtherToolsDesLevelObjDownloadOnClick);
	
	BtnOtherToolsDesLevelObjDownloadTextureRemapFile->OnClicked.Clear();
    BtnOtherToolsDesLevelObjDownloadTextureRemapFile->OnClicked.AddDynamic(this, &UAscMapKitEditorToolsUtilityWidget::BtnOtherToolsDesLevelObjDownloadTextureRemapFileOnClick);

	BtnOtherToolsFbxConverterDownload->OnClicked.Clear();
	BtnOtherToolsFbxConverterDownload->OnClicked.AddDynamic(this, &UAscMapKitEditorToolsUtilityWidget::BtnOtherToolsFbxConverterDownloadOnClick);

	BtnOtherToolsFbxReviewDownload->OnClicked.Clear();
	BtnOtherToolsFbxReviewDownload->OnClicked.AddDynamic(this, &UAscMapKitEditorToolsUtilityWidget::BtnOtherToolsFbxReviewDownloadOnClick);

	BtnOtherToolsMeshToolDownloadEpic->OnClicked.Clear();
	BtnOtherToolsMeshToolDownloadEpic->OnClicked.AddDynamic(this, &UAscMapKitEditorToolsUtilityWidget::BtnOtherToolsMeshToolDownloadEpicOnClick);

	BtnOtherToolsMeshToolDownloadItch->OnClicked.Clear();
	BtnOtherToolsMeshToolDownloadItch->OnClicked.AddDynamic(this, &UAscMapKitEditorToolsUtilityWidget::BtnOtherToolsMeshToolDownloadItchOnClick);

	BtnOtherToolsSnappingHelperDownloadEpic->OnClicked.Clear();
	BtnOtherToolsSnappingHelperDownloadEpic->OnClicked.AddDynamic(this, &UAscMapKitEditorToolsUtilityWidget::BtnOtherToolsSnappingHelperDownloadEpicOnClick);

	BtnOtherToolsBlenderDownload->OnClicked.Clear();
	BtnOtherToolsBlenderDownload->OnClicked.AddDynamic(this, &UAscMapKitEditorToolsUtilityWidget::BtnOtherToolsBlenderDownloadOnClick);

	BtnLinksAscentroidLink->OnClicked.Clear();
	BtnLinksAscentroidLink->OnClicked.AddDynamic(this, &UAscMapKitEditorToolsUtilityWidget::BtnLinksAscentroidLinkOnClick);

	BtnLinksDiscordLink->OnClicked.Clear();
	BtnLinksDiscordLink->OnClicked.AddDynamic(this, &UAscMapKitEditorToolsUtilityWidget::BtnLinksDiscordLinkOnClick);

	BtnLinksYouTubeLink->OnClicked.Clear();
	BtnLinksYouTubeLink->OnClicked.AddDynamic(this, &UAscMapKitEditorToolsUtilityWidget::BtnLinksYouTubeLinkOnClick);

	BtnLinksUeNamingLink->OnClicked.Clear();
	BtnLinksUeNamingLink->OnClicked.AddDynamic(this, &UAscMapKitEditorToolsUtilityWidget::BtnLinksUeNamingLinkOnClick);

	BtnLinksUeTurboSquidLink->OnClicked.Clear();
	BtnLinksUeTurboSquidLink->OnClicked.AddDynamic(this, &UAscMapKitEditorToolsUtilityWidget::BtnLinksUeTurboSquidLinkOnClick);

	BtnLinksAmbientCgLink->OnClicked.Clear();
	BtnLinksAmbientCgLink->OnClicked.AddDynamic(this, &UAscMapKitEditorToolsUtilityWidget::BtnLinksAmbientCgLinkOnClick);

	// Easy Buttons
	BtnCreateAreaAcid->SelfRefButtonOnClicked.Clear();
	BtnCreateAreaAcid->SelfRefButtonOnClicked.AddUniqueDynamic(this, &UAscMapKitEditorToolsUtilityWidget::BtnEasyOnClick);

	BtnCreateAreaElectric->SelfRefButtonOnClicked.Clear();
	BtnCreateAreaElectric->SelfRefButtonOnClicked.AddUniqueDynamic(this, &UAscMapKitEditorToolsUtilityWidget::BtnEasyOnClick);

	BtnCreateAreaLava->SelfRefButtonOnClicked.Clear();
	BtnCreateAreaLava->SelfRefButtonOnClicked.AddUniqueDynamic(this, &UAscMapKitEditorToolsUtilityWidget::BtnEasyOnClick);

	BtnCreateAreaLavaFalls->SelfRefButtonOnClicked.Clear();
	BtnCreateAreaLavaFalls->SelfRefButtonOnClicked.AddUniqueDynamic(this, &UAscMapKitEditorToolsUtilityWidget::BtnEasyOnClick);

	BtnCreateAreaLiquid->SelfRefButtonOnClicked.Clear();
	BtnCreateAreaLiquid->SelfRefButtonOnClicked.AddUniqueDynamic(this, &UAscMapKitEditorToolsUtilityWidget::BtnEasyOnClick);

	BtnCreateAreaPowerStation->SelfRefButtonOnClicked.Clear();
	BtnCreateAreaPowerStation->SelfRefButtonOnClicked.AddUniqueDynamic(this, &UAscMapKitEditorToolsUtilityWidget::BtnEasyOnClick);

	BtnCreateAreaSludge->SelfRefButtonOnClicked.Clear();
	BtnCreateAreaSludge->SelfRefButtonOnClicked.AddUniqueDynamic(this, &UAscMapKitEditorToolsUtilityWidget::BtnEasyOnClick);

	BtnCreateDecorGrate10x20mBasic001->SelfRefButtonOnClicked.Clear();
	BtnCreateDecorGrate10x20mBasic001->SelfRefButtonOnClicked.AddUniqueDynamic(this, &UAscMapKitEditorToolsUtilityWidget::BtnEasyOnClick);
	
	BtnCreateDecorGrate20x5mBasic001->SelfRefButtonOnClicked.Clear();
	BtnCreateDecorGrate20x5mBasic001->SelfRefButtonOnClicked.AddUniqueDynamic(this, &UAscMapKitEditorToolsUtilityWidget::BtnEasyOnClick);
	
	BtnCreateDecorGrate20x5mBasic002->SelfRefButtonOnClicked.Clear();
	BtnCreateDecorGrate20x5mBasic002->SelfRefButtonOnClicked.AddUniqueDynamic(this, &UAscMapKitEditorToolsUtilityWidget::BtnEasyOnClick);

	BtnCreateDecorGrate20x20mBasic001->SelfRefButtonOnClicked.Clear();
	BtnCreateDecorGrate20x20mBasic001->SelfRefButtonOnClicked.AddUniqueDynamic(this, &UAscMapKitEditorToolsUtilityWidget::BtnEasyOnClick);

	BtnCreateDecorLadderSet001->SelfRefButtonOnClicked.Clear();
	BtnCreateDecorLadderSet001->SelfRefButtonOnClicked.AddUniqueDynamic(this, &UAscMapKitEditorToolsUtilityWidget::BtnEasyOnClick);
	
	BtnCreateDecorLetter->SelfRefButtonOnClicked.Clear();
	BtnCreateDecorLetter->SelfRefButtonOnClicked.AddUniqueDynamic(this, &UAscMapKitEditorToolsUtilityWidget::BtnEasyOnClick);

	BtnCreateDecorPiece001->SelfRefButtonOnClicked.Clear();
	BtnCreateDecorPiece001->SelfRefButtonOnClicked.AddUniqueDynamic(this, &UAscMapKitEditorToolsUtilityWidget::BtnEasyOnClick);

	BtnCreateDecorSign001->SelfRefButtonOnClicked.Clear();
	BtnCreateDecorSign001->SelfRefButtonOnClicked.AddUniqueDynamic(this, &UAscMapKitEditorToolsUtilityWidget::BtnEasyOnClick);

	BtnCreateDecorSign002->SelfRefButtonOnClicked.Clear();
	BtnCreateDecorSign002->SelfRefButtonOnClicked.AddUniqueDynamic(this, &UAscMapKitEditorToolsUtilityWidget::BtnEasyOnClick);

	BtnCreateDecorSign003->SelfRefButtonOnClicked.Clear();
	BtnCreateDecorSign003->SelfRefButtonOnClicked.AddUniqueDynamic(this, &UAscMapKitEditorToolsUtilityWidget::BtnEasyOnClick);

	BtnCreateDecorSign004->SelfRefButtonOnClicked.Clear();
	BtnCreateDecorSign004->SelfRefButtonOnClicked.AddUniqueDynamic(this, &UAscMapKitEditorToolsUtilityWidget::BtnEasyOnClick);

	BtnCreateDecorSign005->SelfRefButtonOnClicked.Clear();
	BtnCreateDecorSign005->SelfRefButtonOnClicked.AddUniqueDynamic(this, &UAscMapKitEditorToolsUtilityWidget::BtnEasyOnClick);

	BtnCreateDecorSign006->SelfRefButtonOnClicked.Clear();
	BtnCreateDecorSign006->SelfRefButtonOnClicked.AddUniqueDynamic(this, &UAscMapKitEditorToolsUtilityWidget::BtnEasyOnClick);

	BtnCreateDoorAnimated20x20mBasic001->SelfRefButtonOnClicked.Clear();
	BtnCreateDoorAnimated20x20mBasic001->SelfRefButtonOnClicked.AddUniqueDynamic(this, &UAscMapKitEditorToolsUtilityWidget::BtnEasyOnClick);

	BtnCreateDoorAnimated20x20mBasic002->SelfRefButtonOnClicked.Clear();
	BtnCreateDoorAnimated20x20mBasic002->SelfRefButtonOnClicked.AddUniqueDynamic(this, &UAscMapKitEditorToolsUtilityWidget::BtnEasyOnClick);

	BtnCreateDoorAnimated20x20mBasic003->SelfRefButtonOnClicked.Clear();
	BtnCreateDoorAnimated20x20mBasic003->SelfRefButtonOnClicked.AddUniqueDynamic(this, &UAscMapKitEditorToolsUtilityWidget::BtnEasyOnClick);

	BtnCreateDoorAnimated20x20mBasic004->SelfRefButtonOnClicked.Clear();
	BtnCreateDoorAnimated20x20mBasic004->SelfRefButtonOnClicked.AddUniqueDynamic(this, &UAscMapKitEditorToolsUtilityWidget::BtnEasyOnClick);

	BtnCreateDoorAnimated20x20mBasic005->SelfRefButtonOnClicked.Clear();
	BtnCreateDoorAnimated20x20mBasic005->SelfRefButtonOnClicked.AddUniqueDynamic(this, &UAscMapKitEditorToolsUtilityWidget::BtnEasyOnClick);

	BtnCreateDoorAnimated20x20mSciFiDoorsDoor1->SelfRefButtonOnClicked.Clear();
	BtnCreateDoorAnimated20x20mSciFiDoorsDoor1->SelfRefButtonOnClicked.AddUniqueDynamic(this, &UAscMapKitEditorToolsUtilityWidget::BtnEasyOnClick);

	BtnCreateDoorAnimated20x20mSciFiDoorsDoor2->SelfRefButtonOnClicked.Clear();
	BtnCreateDoorAnimated20x20mSciFiDoorsDoor2->SelfRefButtonOnClicked.AddUniqueDynamic(this, &UAscMapKitEditorToolsUtilityWidget::BtnEasyOnClick);

	BtnCreateDoorAnimated20x20mSciFiDoorsDoor4->SelfRefButtonOnClicked.Clear();
	BtnCreateDoorAnimated20x20mSciFiDoorsDoor4->SelfRefButtonOnClicked.AddUniqueDynamic(this, &UAscMapKitEditorToolsUtilityWidget::BtnEasyOnClick);

	BtnCreateDoorAnimated20x20mSciFiPropsDoor1->SelfRefButtonOnClicked.Clear();
	BtnCreateDoorAnimated20x20mSciFiPropsDoor1->SelfRefButtonOnClicked.AddUniqueDynamic(this, &UAscMapKitEditorToolsUtilityWidget::BtnEasyOnClick);

	BtnCreateDoorAnimated40x20mBasic001->SelfRefButtonOnClicked.Clear();
	BtnCreateDoorAnimated40x20mBasic001->SelfRefButtonOnClicked.AddUniqueDynamic(this, &UAscMapKitEditorToolsUtilityWidget::BtnEasyOnClick);

	BtnCreateDoorAnimated40x20mSciFiDoorsDoor3->SelfRefButtonOnClicked.Clear();
	BtnCreateDoorAnimated40x20mSciFiDoorsDoor3->SelfRefButtonOnClicked.AddUniqueDynamic(this, &UAscMapKitEditorToolsUtilityWidget::BtnEasyOnClick);

	BtnCreateDoorDestructible20x20mBasic001->SelfRefButtonOnClicked.Clear();
	BtnCreateDoorDestructible20x20mBasic001->SelfRefButtonOnClicked.AddUniqueDynamic(this, &UAscMapKitEditorToolsUtilityWidget::BtnEasyOnClick);

	BtnCreateDoorCustom->SelfRefButtonOnClicked.Clear();
	BtnCreateDoorCustom->SelfRefButtonOnClicked.AddUniqueDynamic(this, &UAscMapKitEditorToolsUtilityWidget::BtnEasyOnClick);

	BtnCreateEnemyAlienCylon->SelfRefButtonOnClicked.Clear();
	BtnCreateEnemyAlienCylon->SelfRefButtonOnClicked.AddUniqueDynamic(this, &UAscMapKitEditorToolsUtilityWidget::BtnEasyOnClick);
	
	BtnCreateEnemyAlienGrawn->SelfRefButtonOnClicked.Clear();
	BtnCreateEnemyAlienGrawn->SelfRefButtonOnClicked.AddUniqueDynamic(this, &UAscMapKitEditorToolsUtilityWidget::BtnEasyOnClick);
	
	BtnCreateEnemyMachineAssaultCache->SelfRefButtonOnClicked.Clear();
	BtnCreateEnemyMachineAssaultCache->SelfRefButtonOnClicked.AddUniqueDynamic(this, &UAscMapKitEditorToolsUtilityWidget::BtnEasyOnClick);
	
	BtnCreateEnemyMachineAssaultTank->SelfRefButtonOnClicked.Clear();
	BtnCreateEnemyMachineAssaultTank->SelfRefButtonOnClicked.AddUniqueDynamic(this, &UAscMapKitEditorToolsUtilityWidget::BtnEasyOnClick);
	
	BtnCreateEnemyMachineGeminiTurret->SelfRefButtonOnClicked.Clear();
	BtnCreateEnemyMachineGeminiTurret->SelfRefButtonOnClicked.AddUniqueDynamic(this, &UAscMapKitEditorToolsUtilityWidget::BtnEasyOnClick);
	
	BtnCreateEnemyMachineSarkTurret->SelfRefButtonOnClicked.Clear();
	BtnCreateEnemyMachineSarkTurret->SelfRefButtonOnClicked.AddUniqueDynamic(this, &UAscMapKitEditorToolsUtilityWidget::BtnEasyOnClick);
	
	BtnCreateEnemyMachineSecureGage->SelfRefButtonOnClicked.Clear();
	BtnCreateEnemyMachineSecureGage->SelfRefButtonOnClicked.AddUniqueDynamic(this, &UAscMapKitEditorToolsUtilityWidget::BtnEasyOnClick);
	
	BtnCreateEnemyMachineServasTurret->SelfRefButtonOnClicked.Clear();
	BtnCreateEnemyMachineServasTurret->SelfRefButtonOnClicked.AddUniqueDynamic(this, &UAscMapKitEditorToolsUtilityWidget::BtnEasyOnClick);

	BtnCreateFanAnimated20x20mBasic001->SelfRefButtonOnClicked.Clear();
	BtnCreateFanAnimated20x20mBasic001->SelfRefButtonOnClicked.AddUniqueDynamic(this, &UAscMapKitEditorToolsUtilityWidget::BtnEasyOnClick);
	
	BtnCreateFanCustom->SelfRefButtonOnClicked.Clear();
	BtnCreateFanCustom->SelfRefButtonOnClicked.AddUniqueDynamic(this, &UAscMapKitEditorToolsUtilityWidget::BtnEasyOnClick);

	BtnCreateTriggerInvisible->SelfRefButtonOnClicked.Clear();
	BtnCreateTriggerInvisible->SelfRefButtonOnClicked.AddUniqueDynamic(this, &UAscMapKitEditorToolsUtilityWidget::BtnEasyOnClick);

	BtnCreateTriggerBasic001->SelfRefButtonOnClicked.Clear();
	BtnCreateTriggerBasic001->SelfRefButtonOnClicked.AddUniqueDynamic(this, &UAscMapKitEditorToolsUtilityWidget::BtnEasyOnClick);

	BtnCreateTriggerCustom->SelfRefButtonOnClicked.Clear();
	BtnCreateTriggerCustom->SelfRefButtonOnClicked.AddUniqueDynamic(this, &UAscMapKitEditorToolsUtilityWidget::BtnEasyOnClick);
}

void UAscMapKitEditorToolsUtilityWidget::BtnCreateOnClick()
{
	WidgetSwitcherToolButtons->SetActiveWidgetIndex(0);
	
	ResetAllTabColors();

	BtnCreate->SetBackgroundColor(TabSelectedColor);
}

void UAscMapKitEditorToolsUtilityWidget::BtnGenerateOnClick()
{
	WidgetSwitcherToolButtons->SetActiveWidgetIndex(1);

	ResetAllTabColors();

	BtnGenerate->SetBackgroundColor(TabSelectedColor);
}

void UAscMapKitEditorToolsUtilityWidget::BtnValidateOnClick()
{
	WidgetSwitcherToolButtons->SetActiveWidgetIndex(2);

	ResetAllTabColors();

	BtnValidate->SetBackgroundColor(TabSelectedColor);
}

void UAscMapKitEditorToolsUtilityWidget::BtnHelpOnClick()
{
	WidgetSwitcherToolButtons->SetActiveWidgetIndex(3);

	ResetAllTabColors();

	BtnHelp->SetBackgroundColor(TabSelectedColor);
}

void UAscMapKitEditorToolsUtilityWidget::BtnAboutOnClick()
{
	WidgetSwitcherToolButtons->SetActiveWidgetIndex(4);

	ResetAllTabColors();

	BtnAbout->SetBackgroundColor(TabSelectedColor);
}

void UAscMapKitEditorToolsUtilityWidget::ResetAllTabColors()
{
	BtnCreate->SetBackgroundColor(TabUnselectedColor);
	BtnGenerate->SetBackgroundColor(TabUnselectedColor);
	BtnValidate->SetBackgroundColor(TabUnselectedColor);
	BtnHelp->SetBackgroundColor(TabUnselectedColor);
	BtnAbout->SetBackgroundColor(TabUnselectedColor);
}

void UAscMapKitEditorToolsUtilityWidget::BtnSubTitleCreateAreaOnClick()
{
	ToggleSection(TEXT("Area"), TxtSubTitleCreateArea, SectionPanelArea);
}

void UAscMapKitEditorToolsUtilityWidget::BtnAddAreaOnClick()
{
	if (ComboBoxAddArea->GetSelectedIndex() == 0)
	{
		UAscMapKitEditorToolsHelper::ShowErrorMessage(TEXT("Please select an environment area type!"));
		return;
	}

	if (ComboBoxAddAreaCount->GetSelectedIndex() == 0)
	{
		UAscMapKitEditorToolsHelper::ShowErrorMessage(TEXT("Please select how many environment area(s) to add!"));
		return;
	}

	if (ComboBoxAddAreaWhere->GetSelectedIndex() == 0)
	{
		UAscMapKitEditorToolsHelper::ShowErrorMessage(TEXT("Please select where to add the environment area(s)!"));
		return;
	}

	const auto TransactionContext = FString::Printf(TEXT("%s::%hc"), *GetClass()->GetName(), *__FUNCTION__);

	UKismetSystemLibrary::BeginTransaction(TransactionContext, FText::FromString(TEXT("Add Environment Area(s)")), nullptr);

	const auto Area = ComboBoxAddArea->GetSelectedOption();
	const auto Count = FCString::Atoi(*ComboBoxAddAreaCount->GetSelectedOption());
	const auto Where = ComboBoxAddAreaWhere->GetSelectedOption();

	auto SpawnLocation = FVector::ZeroVector;

	if (Where == TEXT("Selected"))
	{
		const auto bFoundSelectedActor = UAscMapKitEditorToolsHelper::GetEditorFirstSelectedActor(SpawnLocation);

		if (!bFoundSelectedActor)
			UAscMapKitEditorToolsHelper::ShowWarnMessage(TEXT("Nothing was selected in the editor. Using spawn location (0, 0, 0)."));
	}

	const TSubclassOf<AActor> AreaActorClass = AAscMapKitEnvironmentAreaActor::StaticClass();
	
	auto AreaType = EAscMapKitEnvironmentAreaTypeEnum::Unknown;

	const auto bIsLavaFalls = Area == TEXT("Lava Falls");

	if (Area == TEXT("Acid"))
		AreaType = EAscMapKitEnvironmentAreaTypeEnum::Acid;
	else if (Area == TEXT("Electric"))
		AreaType = EAscMapKitEnvironmentAreaTypeEnum::Electric;
	else if (Area == TEXT("Lava") || bIsLavaFalls)
		AreaType = EAscMapKitEnvironmentAreaTypeEnum::Lava;
	else if (Area == TEXT("Liquid"))
		AreaType = EAscMapKitEnvironmentAreaTypeEnum::Liquid;
	else if (Area == TEXT("Power Station"))
		AreaType = EAscMapKitEnvironmentAreaTypeEnum::PowerStationWithoutEffects;
	else if (Area == TEXT("Sludge"))
		AreaType = EAscMapKitEnvironmentAreaTypeEnum::Sludge;

	bool bHasSurface = false;
	bool bHasFog = false;
	bool bHasParticle = false;

	switch (AreaType)
	{
		case EAscMapKitEnvironmentAreaTypeEnum::Acid:
			SpawnLocation.Z -= 1000.f;
			bHasSurface = true;
			bHasFog = true;
			break;
		case EAscMapKitEnvironmentAreaTypeEnum::Electric:
			bHasParticle = true;
			break;
		case EAscMapKitEnvironmentAreaTypeEnum::Lava:
			SpawnLocation.Z -= 1000.f;
			bHasSurface = true;
			bHasFog = true;
			break;
		case EAscMapKitEnvironmentAreaTypeEnum::Liquid:
			SpawnLocation.Z -= 1000.f;
			bHasSurface = true;
			bHasFog = true;
			bHasParticle = true;
			break;
		case EAscMapKitEnvironmentAreaTypeEnum::PowerStationWithoutEffects:
			bHasParticle = true;
			break;
		case EAscMapKitEnvironmentAreaTypeEnum::Sludge:
			SpawnLocation.Z -= 1000.f;
			bHasSurface = true;
			bHasFog = true;
			break;
	}

	if (bIsLavaFalls)
	{
		SpawnLocation.Z = 0.f;
		bHasSurface = true;
		bHasFog = false;
		bHasParticle = false;
	}

	const auto AreaNamePrefix = FString::Printf(TEXT("%sArea"), *Area.Replace(TEXT(" "), TEXT("")));
	const auto AreaNameSequence = UAscMapKitEditorToolsHelper::GetEditorNextActorSequence(AreaActorClass, AreaNamePrefix);

	GEditor->SelectNone(true, true, false);

	for (auto i = 0; i < Count; i++)
	{
		auto bAreaNameAlreadyExists = false;

		FString OutActorName = TEXT("");
		FString OutActorDefaultName = TEXT("");

		const auto AscMapKitEnvironmentAreaActorSpawned = UAscMapKitEditorToolsHelper::SpawnInEditor(
			AreaActorClass,
			FTransform(SpawnLocation),
			AreaNamePrefix,
			AreaNameSequence + i,
			bAreaNameAlreadyExists,
			OutActorName,
			OutActorDefaultName
		);

		if (bAreaNameAlreadyExists)
			UAscMapKitEditorToolsHelper::ShowWarnMessage(FString::Printf(TEXT("Environment area '%s' already exists (name conflict?). Using a default name instead (sorry): %s"), *OutActorName, *OutActorDefaultName));

		if (AscMapKitEnvironmentAreaActorSpawned && AscMapKitEnvironmentAreaActorSpawned->IsA(AreaActorClass))
		{
			const auto AscMapKitEnvironmentAreaActor = Cast<AAscMapKitEnvironmentAreaActor>(AscMapKitEnvironmentAreaActorSpawned);

			if (AscMapKitEnvironmentAreaActor)
			{
				AscMapKitEnvironmentAreaActor->MapKit.EnvironmentAreaName = Area;
				AscMapKitEnvironmentAreaActor->MapKit.EnvironmentAreaType = AreaType;
				AscMapKitEnvironmentAreaActor->BillboardComponent->EditorUpdateEnvironmentAreaType(AscMapKitEnvironmentAreaActor->MapKit.EnvironmentAreaType);

				AscMapKitEnvironmentAreaActor->Box->SetBoxExtent(FVector(1000.f, 1000.f, 1000.f));

				if (bIsLavaFalls)
					AscMapKitEnvironmentAreaActor->Box->SetBoxExtent(FVector(40.f, 1000.f, 1000.f));

				if (bHasSurface && PlaneStaticMesh)
				{
					AStaticMeshActor *SurfaceActor = UAscMapKitEditorToolsHelper::GetEditorWorld()->SpawnActor<AStaticMeshActor>(SpawnLocation, FRotator::ZeroRotator);

					if (SurfaceActor && SurfaceActor->GetStaticMeshComponent())
					{
						const auto SurfaceStaticMeshComponent = SurfaceActor->GetStaticMeshComponent();

						if (SurfaceStaticMeshComponent)
						{
							SurfaceStaticMeshComponent->SetStaticMesh(PlaneStaticMesh);
							SurfaceStaticMeshComponent->SetWorldScale3D(FVector(20.f, 20.f, 1.f));
							SurfaceStaticMeshComponent->SetCollisionEnabled(ECollisionEnabled::NoCollision);
							SurfaceStaticMeshComponent->SetCollisionProfileName(UCollisionProfile::NoCollision_ProfileName);

							if (!bIsLavaFalls)
								SurfaceStaticMeshComponent->SetRelativeLocation(FVector(0.f, 0.f, 1000.f));

							if (bIsLavaFalls)
								SurfaceStaticMeshComponent->SetRelativeRotation(FRotator(-90.f, 0.f, 0.f));

							auto UseMaterial = LiquidMaterial;

							switch (AreaType)
							{
								case EAscMapKitEnvironmentAreaTypeEnum::Acid:
									UseMaterial = AcidMaterial;
									break;
								case EAscMapKitEnvironmentAreaTypeEnum::Lava:
									UseMaterial = LavaMaterial;
									break;
								case EAscMapKitEnvironmentAreaTypeEnum::Liquid:
									UseMaterial = LiquidMaterial;
									break;
								case EAscMapKitEnvironmentAreaTypeEnum::Sludge:
									UseMaterial = SludgeMaterial;
									break;
							}

							if (bIsLavaFalls)
								UseMaterial = LavaFallsMaterial;

							if (UseMaterial)
								SurfaceStaticMeshComponent->SetMaterial(0, UseMaterial);

							SurfaceStaticMeshComponent->RegisterComponent();
						}

						auto SurfaceActorName = FString::Printf(TEXT("Surface_%s"), *AscMapKitEnvironmentAreaActor->GetHumanReadableName());

						if (bIsLavaFalls)
							SurfaceActorName = FString::Printf(TEXT("Lava_Falls_%s"), *AscMapKitEnvironmentAreaActor->GetHumanReadableName());

						SurfaceActor->Rename(*(SurfaceActorName + FGuid::NewGuid().ToString()));
						SurfaceActor->SetActorLabel(*SurfaceActorName);
						SurfaceActor->AttachToActor(AscMapKitEnvironmentAreaActor, FAttachmentTransformRules::KeepRelativeTransform);

						UKismetSystemLibrary::TransactObject(SurfaceActor);
					}
				}

				if (bHasFog && !bIsLavaFalls)
				{
					AStaticMeshActor *FogAreaActor = UAscMapKitEditorToolsHelper::GetEditorWorld()->SpawnActor<AStaticMeshActor>(SpawnLocation, FRotator::ZeroRotator);
					
					if (FogAreaActor)
					{
						const auto FogStaticMeshComponent = FogAreaActor->GetStaticMeshComponent();

						if (FogStaticMeshComponent && CubeStaticMesh)
						{
							FogStaticMeshComponent->SetStaticMesh(CubeStaticMesh);
							FogStaticMeshComponent->SetWorldScale3D(FVector(20.f, 20.f, 20.f));
							FogStaticMeshComponent->SetRelativeLocation(FVector(0.f, 0.f, 0.f));
							FogStaticMeshComponent->SetCollisionEnabled(ECollisionEnabled::NoCollision);

							auto UseMaterial = LiquidFogMaterial;

							switch (AreaType)
							{
								case EAscMapKitEnvironmentAreaTypeEnum::Acid:
									UseMaterial = AcidFogMaterial;
									break;
								case EAscMapKitEnvironmentAreaTypeEnum::Lava:
									UseMaterial = LavaFogMaterial;
									break;
								case EAscMapKitEnvironmentAreaTypeEnum::Liquid:
									UseMaterial = LiquidFogMaterial;
									break;
								case EAscMapKitEnvironmentAreaTypeEnum::Sludge:
									UseMaterial = SludgeFogMaterial;
									break;
							}
							
							if (UseMaterial)
								FogStaticMeshComponent->SetMaterial(0, UseMaterial);
						}
					
						const auto FogAreaActorName = FString::Printf(TEXT("Fog_%s"), *AscMapKitEnvironmentAreaActor->GetHumanReadableName());

						FogAreaActor->Rename(*(FogAreaActorName + FGuid::NewGuid().ToString()));
						FogAreaActor->SetActorLabel(*FogAreaActorName);
						FogAreaActor->AttachToActor(AscMapKitEnvironmentAreaActor, FAttachmentTransformRules::KeepRelativeTransform);

						UKismetSystemLibrary::TransactObject(FogAreaActor);
					}
				}

				if (bHasParticle && !bIsLavaFalls)
				{
					AEmitter *ParticleEmitter = UAscMapKitEditorToolsHelper::GetEditorWorld()->SpawnActor<AEmitter>(SpawnLocation, FRotator::ZeroRotator);

					if (ParticleEmitter)
					{
#if USE_PARTICLES_CASCADE
						UParticleSystemComponent *ParticleComponent = NewObject<UParticleSystemComponent>(ParticleEmitter);
						UParticleSystem *UseParticleTemplate = PowerStationParticleTemplate;
#else
						UNiagaraComponent *ParticleComponent = NewObject<UNiagaraComponent>(LiquidBubblesParticleActor);
						UNiagaraSystem *UseParticleTemplate = LiquidBubblesParticleTemplate;
#endif

						if (ParticleComponent)
						{
							switch (AreaType)
							{
								case EAscMapKitEnvironmentAreaTypeEnum::Electric:
									UseParticleTemplate = ElectricalZapsParticleTemplate;
									break;
								case EAscMapKitEnvironmentAreaTypeEnum::Liquid:
									UseParticleTemplate = LiquidBubblesParticleTemplate;
									break;
								case EAscMapKitEnvironmentAreaTypeEnum::PowerStationWithEffects:
								case EAscMapKitEnvironmentAreaTypeEnum::PowerStationWithoutEffects:
									UseParticleTemplate = PowerStationParticleTemplate;
									break;
							}

							ParticleComponent->SetupAttachment(ParticleEmitter->GetRootComponent());
							ParticleComponent->SetTemplate(UseParticleTemplate);

							if (AreaType == EAscMapKitEnvironmentAreaTypeEnum::Electric)
								ParticleComponent->SetRelativeLocation(FVector(-1000.f, 0.f, 0.f));
							else if (AreaType != EAscMapKitEnvironmentAreaTypeEnum::PowerStationWithoutEffects)
								ParticleComponent->SetRelativeLocation(FVector(0.f, 0.f, 1000.f));

							ParticleComponent->RegisterComponent();

							const auto ParticleActorName = FString::Printf(TEXT("Particle_%s"), *AscMapKitEnvironmentAreaActor->GetHumanReadableName());

							ParticleEmitter->Rename(*(ParticleActorName + FGuid::NewGuid().ToString()));
							ParticleEmitter->SetActorLabel(*ParticleActorName);
							ParticleEmitter->AttachToActor(AscMapKitEnvironmentAreaActor, FAttachmentTransformRules::KeepRelativeTransform);

							UKismetSystemLibrary::TransactObject(ParticleEmitter);
						}
					}
				}

				if (AscMapKitEnvironmentAreaActor->MapKit.PostProcess.PostProcessComponent)
				{
					switch (AreaType)
					{
						case EAscMapKitEnvironmentAreaTypeEnum::Acid:
							AscMapKitEnvironmentAreaActor->MapKit.PostProcess.PostProcessComponent->Settings.bOverride_ColorSaturation = true;
							AscMapKitEnvironmentAreaActor->MapKit.PostProcess.PostProcessComponent->Settings.bOverride_FilmWhitePoint = true;
							AscMapKitEnvironmentAreaActor->MapKit.PostProcess.PostProcessComponent->Settings.bOverride_FilmShadowTint = true;

							AscMapKitEnvironmentAreaActor->MapKit.PostProcess.PostProcessComponent->Settings.ColorSaturation = FLinearColor(1.27311f, 2.f, 0.208941f, 1.f);
							AscMapKitEnvironmentAreaActor->MapKit.PostProcess.PostProcessComponent->Settings.FilmWhitePoint = FLinearColor(1.599017f, 2.f, 0.148176f, 1.f);
							AscMapKitEnvironmentAreaActor->MapKit.PostProcess.PostProcessComponent->Settings.FilmShadowTint = FLinearColor(1.414633f, 2.f, 0.108292f, 1.f);
							break;
						case EAscMapKitEnvironmentAreaTypeEnum::Electric:
						case EAscMapKitEnvironmentAreaTypeEnum::PowerStationWithoutEffects:
							AscMapKitEnvironmentAreaActor->MapKit.PostProcess.EnableForPlayer = false;
							break;
						case EAscMapKitEnvironmentAreaTypeEnum::Lava:
							AscMapKitEnvironmentAreaActor->MapKit.PostProcess.PostProcessComponent->Settings.bOverride_ColorSaturation = true;
							AscMapKitEnvironmentAreaActor->MapKit.PostProcess.PostProcessComponent->Settings.bOverride_FilmWhitePoint = true;
							AscMapKitEnvironmentAreaActor->MapKit.PostProcess.PostProcessComponent->Settings.bOverride_FilmShadowTint = true;

							AscMapKitEnvironmentAreaActor->MapKit.PostProcess.PostProcessComponent->Settings.ColorSaturation = FLinearColor(1.f, 0.03f, 0.f, 1.f);
							AscMapKitEnvironmentAreaActor->MapKit.PostProcess.PostProcessComponent->Settings.FilmWhitePoint = FLinearColor(2.f, 0.454234f, 0.f, 1.f);
							AscMapKitEnvironmentAreaActor->MapKit.PostProcess.PostProcessComponent->Settings.FilmShadowTint = FLinearColor(2.f, 0.751108f, 0.f, 1.f);
							break;
						case EAscMapKitEnvironmentAreaTypeEnum::Liquid:
							AscMapKitEnvironmentAreaActor->MapKit.PostProcess.PostProcessComponent->Settings.bOverride_ColorSaturation = true;
							AscMapKitEnvironmentAreaActor->MapKit.PostProcess.PostProcessComponent->Settings.bOverride_FilmWhitePoint = true;
							AscMapKitEnvironmentAreaActor->MapKit.PostProcess.PostProcessComponent->Settings.bOverride_FilmShadowTint = true;

							AscMapKitEnvironmentAreaActor->MapKit.PostProcess.PostProcessComponent->Settings.ColorSaturation = FLinearColor(0.f, 2.f, 1.3f, 1.f);
							AscMapKitEnvironmentAreaActor->MapKit.PostProcess.PostProcessComponent->Settings.FilmWhitePoint = FLinearColor(0.f, 2.f, 1.3f, 1.f);
							AscMapKitEnvironmentAreaActor->MapKit.PostProcess.PostProcessComponent->Settings.FilmShadowTint = FLinearColor(0.f, 2.f, 1.3f, 1.f);
							break;
						case EAscMapKitEnvironmentAreaTypeEnum::Sludge:
							AscMapKitEnvironmentAreaActor->MapKit.PostProcess.PostProcessComponent->Settings.bOverride_ColorSaturation = true;
							AscMapKitEnvironmentAreaActor->MapKit.PostProcess.PostProcessComponent->Settings.bOverride_FilmWhitePoint = true;
							AscMapKitEnvironmentAreaActor->MapKit.PostProcess.PostProcessComponent->Settings.bOverride_FilmShadowTint = true;

							AscMapKitEnvironmentAreaActor->MapKit.PostProcess.PostProcessComponent->Settings.ColorSaturation = FLinearColor(2.f, 0.5f, 2.f, 1.f);
							AscMapKitEnvironmentAreaActor->MapKit.PostProcess.PostProcessComponent->Settings.FilmWhitePoint = FLinearColor(2.f, 0.5f, 2.f, 1.f);
							AscMapKitEnvironmentAreaActor->MapKit.PostProcess.PostProcessComponent->Settings.FilmShadowTint = FLinearColor(2.f, 0.5f, 2.f, 1.f);
							break;
					}
				}
				
				switch (AreaType)
				{
					case EAscMapKitEnvironmentAreaTypeEnum::Acid:
						AscMapKitEnvironmentAreaActor->MapKit.LiquidDrips.EnableForPlayerOnOverlapEnd = true;
						AscMapKitEnvironmentAreaActor->MapKit.LiquidDrips.PreTintColor = FLinearColor(1.599017f, 2.f, 0.148176f, 1.f);
						AscMapKitEnvironmentAreaActor->MapKit.LiquidDrips.PostTintColor = FLinearColor(1.599017f, 2.f, 0.148176f, 1.f);

						AscMapKitEnvironmentAreaActor->MapKit.LiquidDripsCockpit.EnableForPlayerOnOverlapEnd = true;
						AscMapKitEnvironmentAreaActor->MapKit.LiquidDripsCockpit.OpacityAmount = 2.f;
						AscMapKitEnvironmentAreaActor->MapKit.LiquidDripsCockpit.EmitColor = FLinearColor(1.599017f, 2.f, 0.148176f, 1.f);

						AscMapKitEnvironmentAreaActor->MapKit.DamageShared.DamageEventType = EAscMapKitDamageEventTypeEnum::Acid;
						AscMapKitEnvironmentAreaActor->MapKit.DamagePlayers.Enable = true;
						AscMapKitEnvironmentAreaActor->MapKit.DamageEnemies.Enable = true;
						AscMapKitEnvironmentAreaActor->MapKit.SplashDamage.Enable = true;
						break;
					case EAscMapKitEnvironmentAreaTypeEnum::Electric:
						AscMapKitEnvironmentAreaActor->MapKit.LiquidDrips.EnableForPlayerOnOverlapEnd = false;
						AscMapKitEnvironmentAreaActor->MapKit.LiquidDripsCockpit.EnableForPlayerOnOverlapEnd = false;
						AscMapKitEnvironmentAreaActor->MapKit.PlayerShaking.Factor = 15.f;
						AscMapKitEnvironmentAreaActor->MapKit.PlayerMovementModifier.Enable = false;
						AscMapKitEnvironmentAreaActor->MapKit.ProjectileMovementModifier.Enable = false;
						AscMapKitEnvironmentAreaActor->MapKit.EnemyMovementModifier.Enable = false;

						AscMapKitEnvironmentAreaActor->MapKit.DamageShared.DamageEventType = EAscMapKitDamageEventTypeEnum::Electricity;
						AscMapKitEnvironmentAreaActor->MapKit.DamageShared.AutoDestroyBombs = true;
						AscMapKitEnvironmentAreaActor->MapKit.DamagePlayers.Enable = true;
						AscMapKitEnvironmentAreaActor->MapKit.DamageEnemies.Enable = true;
						AscMapKitEnvironmentAreaActor->MapKit.SplashDamage.Enable = true;
						break;
					case EAscMapKitEnvironmentAreaTypeEnum::Lava:
						AscMapKitEnvironmentAreaActor->MapKit.LiquidDrips.EnableForPlayerOnOverlapEnd = true;
						AscMapKitEnvironmentAreaActor->MapKit.LiquidDrips.PreTintColor = FLinearColor(3.f, 0.8f, 0.1f, 1.f);
						AscMapKitEnvironmentAreaActor->MapKit.LiquidDrips.PostTintColor = FLinearColor(3.f, 0.8f, 0.1f, 1.f);

						AscMapKitEnvironmentAreaActor->MapKit.LiquidDripsCockpit.EnableForPlayerOnOverlapEnd = true;
						AscMapKitEnvironmentAreaActor->MapKit.LiquidDripsCockpit.OpacityAmount = 2.f;
						AscMapKitEnvironmentAreaActor->MapKit.LiquidDripsCockpit.EmitColor = FLinearColor(10.f, 1.f, 0.f, 1.f);

						AscMapKitEnvironmentAreaActor->MapKit.DamageShared.DamageEventType = EAscMapKitDamageEventTypeEnum::Lava;
						AscMapKitEnvironmentAreaActor->MapKit.DamagePlayers.Enable = true;
						AscMapKitEnvironmentAreaActor->MapKit.DamageEnemies.Enable = true;
						AscMapKitEnvironmentAreaActor->MapKit.SplashDamage.Enable = true;
						break;
					case EAscMapKitEnvironmentAreaTypeEnum::Liquid:
						AscMapKitEnvironmentAreaActor->MapKit.LiquidDrips.EnableForPlayerOnOverlapEnd = true;
						AscMapKitEnvironmentAreaActor->MapKit.LiquidDripsCockpit.EnableForPlayerOnOverlapEnd = true;
						AscMapKitEnvironmentAreaActor->MapKit.LiquidDripsCockpit.OpacityAmount = 2.f;
						AscMapKitEnvironmentAreaActor->MapKit.LiquidDripsCockpit.EmitColor = FLinearColor(0.f, 1.f, 10.f, 1.f);
						break;
					case EAscMapKitEnvironmentAreaTypeEnum::PowerStationWithoutEffects:
						AscMapKitEnvironmentAreaActor->MapKit.LiquidDrips.EnableForPlayerOnOverlapEnd = false;
						AscMapKitEnvironmentAreaActor->MapKit.LiquidDripsCockpit.EnableForPlayerOnOverlapEnd = false;
						AscMapKitEnvironmentAreaActor->MapKit.PlayerMovementModifier.Enable = false;
						AscMapKitEnvironmentAreaActor->MapKit.ProjectileMovementModifier.Enable = false;
						AscMapKitEnvironmentAreaActor->MapKit.EnemyMovementModifier.Enable = false;
						AscMapKitEnvironmentAreaActor->MapKit.DamageShared.DamageEventType = EAscMapKitDamageEventTypeEnum::Unknown;
						AscMapKitEnvironmentAreaActor->MapKit.DamageShared.AutoDestroyBombs = false;
						AscMapKitEnvironmentAreaActor->MapKit.DamagePlayers.Enable = false;
						AscMapKitEnvironmentAreaActor->MapKit.DamageEnemies.Enable = false;
						AscMapKitEnvironmentAreaActor->MapKit.SplashDamage.Enable = false;
						break;
					case EAscMapKitEnvironmentAreaTypeEnum::Sludge:
						AscMapKitEnvironmentAreaActor->MapKit.LiquidDrips.EnableForPlayerOnOverlapEnd = true;
						AscMapKitEnvironmentAreaActor->MapKit.LiquidDrips.PreTintFactor = 1.f;
						AscMapKitEnvironmentAreaActor->MapKit.LiquidDrips.PostTintFactor = 1.f;
						AscMapKitEnvironmentAreaActor->MapKit.LiquidDrips.PreTintColor = FLinearColor(2.f, 0.5f, 2.f, 1.f);
						AscMapKitEnvironmentAreaActor->MapKit.LiquidDrips.PostTintColor = FLinearColor(2.f, 0.5f, 2.f, 1.f);

						AscMapKitEnvironmentAreaActor->MapKit.LiquidDripsCockpit.EnableForPlayerOnOverlapEnd = true;
						AscMapKitEnvironmentAreaActor->MapKit.LiquidDripsCockpit.OpacityAmount = 2.f;
						AscMapKitEnvironmentAreaActor->MapKit.LiquidDripsCockpit.EmitColor = FLinearColor(2.f, 0.5f, 2.f, 1.f);

						AscMapKitEnvironmentAreaActor->MapKit.DamageShared.DamageEventType = EAscMapKitDamageEventTypeEnum::Sludge;
						AscMapKitEnvironmentAreaActor->MapKit.DamagePlayers.Enable = true;
						AscMapKitEnvironmentAreaActor->MapKit.DamageEnemies.Enable = true;
						AscMapKitEnvironmentAreaActor->MapKit.SplashDamage.Enable = true;
						break;
				}

				if (AreaType == EAscMapKitEnvironmentAreaTypeEnum::Liquid)
				{
					const auto CausticSpotLightActorName = FString::Printf(TEXT("SpotLight_%s"), *AscMapKitEnvironmentAreaActor->GetHumanReadableName());

					auto bCausticSpotLightNameAlreadyExists = false;

					FString OutCausticSpotLightActorName = TEXT("");
					FString OutCausticSpotLightActorDefaultName = TEXT("");

					const auto AscMapKitLightActorSpawned = UAscMapKitEditorToolsHelper::SpawnInEditor(
						ASpotLight::StaticClass(),
						FTransform(SpawnLocation),
						CausticSpotLightActorName,
						-1,
						bCausticSpotLightNameAlreadyExists,
						OutCausticSpotLightActorName,
						OutCausticSpotLightActorDefaultName
					);

					if (bCausticSpotLightNameAlreadyExists)
						UAscMapKitEditorToolsHelper::ShowWarnMessage(FString::Printf(TEXT("Light for liquid '%s' already exists (name conflict?). Using a default name instead (sorry): %s"), *OutCausticSpotLightActorName, *OutCausticSpotLightActorDefaultName));

					if (AscMapKitLightActorSpawned && AscMapKitLightActorSpawned->IsA(ASpotLight::StaticClass()))
					{
						const auto SpotLightActor = Cast<ASpotLight>(AscMapKitLightActorSpawned);

						if (SpotLightActor && SpotLightActor->SpotLightComponent)
						{
							UAscMapKitEditorToolsLightHelper::SetSpotLightDefaults(
								SpotLightActor,
								EAscMapKitMaterialEmitColorTypeEnum::Cyan,
								450.f,
								false,
								false,
								true,
								CausticMaterial
							);

							SpotLightActor->SpotLightComponent->RegisterComponent();

							SpotLightActor->AttachToActor(AscMapKitEnvironmentAreaActor, FAttachmentTransformRules::KeepRelativeTransform);

							SpotLightActor->SpotLightComponent->SetRelativeLocation(FVector(0.f, 0.f, 999.f));

							UKismetSystemLibrary::TransactObject(SpotLightActor);
						}
					}
				}
				else if (AreaType == EAscMapKitEnvironmentAreaTypeEnum::PowerStationWithoutEffects)
				{
					const auto PointLightActorName = FString::Printf(TEXT("PointLight_%s"), *AscMapKitEnvironmentAreaActor->GetHumanReadableName());

					auto bPointLightNameAlreadyExists = false;

					FString OutPointLightActorName = TEXT("");
					FString OutPointLightActorDefaultName = TEXT("");

					const auto AscMapKitLightActorSpawned = UAscMapKitEditorToolsHelper::SpawnInEditor(
						APointLight::StaticClass(),
						FTransform(SpawnLocation),
						PointLightActorName,
						-1,
						bPointLightNameAlreadyExists,
						OutPointLightActorName,
						OutPointLightActorDefaultName
					);

					if (bPointLightNameAlreadyExists)
						UAscMapKitEditorToolsHelper::ShowWarnMessage(FString::Printf(TEXT("Light for power station '%s' already exists (name conflict?). Using a default name instead (sorry): %s"), *OutPointLightActorName, *OutPointLightActorDefaultName));

					if (AscMapKitLightActorSpawned && AscMapKitLightActorSpawned->IsA(APointLight::StaticClass()))
					{
						const auto PointLightActor = Cast<APointLight>(AscMapKitLightActorSpawned);

						if (PointLightActor && PointLightActor->PointLightComponent)
						{
							UAscMapKitEditorToolsLightHelper::SetPointLightDefaults(
								PointLightActor,
								EAscMapKitMaterialEmitColorTypeEnum::Orange,
								10.f,
								true
							);

							PointLightActor->PointLightComponent->RegisterComponent();
							PointLightActor->AttachToActor(AscMapKitEnvironmentAreaActor, FAttachmentTransformRules::KeepRelativeTransform);

							UKismetSystemLibrary::TransactObject(PointLightActor);
						}
					}
				}

				UAscMapKitEditorToolsHelper::ShowInfoMessage(FString::Printf(TEXT("Created environment area: %s"), *AscMapKitEnvironmentAreaActor->GetHumanReadableName()));
			}

			if (AscMapKitEnvironmentAreaActor)
			{
				AscMapKitEnvironmentAreaActor->SetFolderPath(FName("Areas"));
				GEditor->SelectActor(AscMapKitEnvironmentAreaActor, true, true);
				UKismetSystemLibrary::TransactObject(AscMapKitEnvironmentAreaActor);
			}
		}
	}

	GEditor->NoteSelectionChange();

	UKismetSystemLibrary::EndTransaction();
}

void UAscMapKitEditorToolsUtilityWidget::BtnSubTitleCreateDecorOnClick()
{
	ToggleSection(TEXT("Decor"), TxtSubTitleCreateDecor, SectionPanelDecor);
}

void UAscMapKitEditorToolsUtilityWidget::BtnAddDecorOnClick()
{
	if (ComboBoxAddDecorType->GetSelectedIndex() == 0)
	{
		UAscMapKitEditorToolsHelper::ShowErrorMessage(TEXT("Please select what type of decor to add!"));
		return;
	}
	
	if (ComboBoxAddDecorCount->GetSelectedIndex() == 0)
	{
		UAscMapKitEditorToolsHelper::ShowErrorMessage(TEXT("Please select how many decor to add!"));
		return;
	}

	if (ComboBoxAddDecorWhere->GetSelectedIndex() == 0)
	{
		UAscMapKitEditorToolsHelper::ShowErrorMessage(TEXT("Please select where to add the decor!"));
		return;
	}

	const auto DecorTypeAsFString = ComboBoxAddDecorType->GetSelectedOption();
	const auto DecorColorTypeAsFString = ComboBoxAddDecorColor->GetSelectedOption();
	const auto Count = FCString::Atoi(*ComboBoxAddDecorCount->GetSelectedOption());
	const auto Where = ComboBoxAddDecorWhere->GetSelectedOption();

	auto bFoundDecorType = false;
	auto DecorType = EAscMapKitDecorTypeEnum::None;

	for (const TPair<EAscMapKitDecorTypeEnum, FString> &Pair : DecorTypeMap)
	{
		if (Pair.Value == DecorTypeAsFString)
		{
			bFoundDecorType = true;
			DecorType = Pair.Key;
			break;
		}
	}

	if (!bFoundDecorType)
	{
		UAscMapKitEditorToolsHelper::ShowErrorMessage(FString::Printf(TEXT("Developer error (contact Ascentroid support)! DecorTypeMap does not contain: %s"), *DecorTypeAsFString));
		return;
	}

	auto bFoundDecorColorType = false;
	auto DecorColorType = EAscMapKitMaterialEmitColorTypeEnum::None;

	for (const TPair<EAscMapKitMaterialEmitColorTypeEnum, FString> &Pair : MaterialEmitColorTypeMap)
	{
		if (Pair.Value == DecorColorTypeAsFString)
		{
			bFoundDecorColorType = true;
			DecorColorType = Pair.Key;
			break;
		}
	}

	if (!bFoundDecorColorType)
	{
		UAscMapKitEditorToolsHelper::ShowErrorMessage(FString::Printf(TEXT("Developer error (contact Ascentroid support)! DecorColorTypeMap does not contain: %s"), *DecorColorTypeAsFString));
		return;
	}

	if (DecorColorType == EAscMapKitMaterialEmitColorTypeEnum::None)
		DecorColorType = EAscMapKitMaterialEmitColorTypeEnum::Green;

	auto SpawnLocation = FVector::ZeroVector;

	if (Where == TEXT("Selected"))
	{
		const auto bFoundSelectedActor = UAscMapKitEditorToolsHelper::GetEditorFirstSelectedActor(SpawnLocation);

		if (!bFoundSelectedActor)
			UAscMapKitEditorToolsHelper::ShowWarnMessage(TEXT("Nothing was selected in the editor. Using spawn location (0, 0, 0)."));
	}

	const TSubclassOf<AActor> DecorActorClass = AAscMapKitDecorActor::StaticClass();

	FString DecorNamePrefix = FString::Printf(TEXT("Decor_%s"), *DecorTypeAsFString.Replace(TEXT(" "), TEXT("_")));

	if (DecorType == EAscMapKitDecorTypeEnum::Letter)
		DecorNamePrefix += TEXT("_X");

	const auto DecorNameSequence = UAscMapKitEditorToolsHelper::GetEditorNextActorSequence(DecorActorClass, DecorNamePrefix);

	const auto TransactionContext = FString::Printf(TEXT("%s::%hc"), *GetClass()->GetName(), *__FUNCTION__);

	UKismetSystemLibrary::BeginTransaction(TransactionContext, FText::FromString(TEXT("Add Decor")), nullptr);

	GEditor->SelectNone(true, true, false);

	for (auto i = 0; i < Count; i++)
	{
		auto bDecorNameAlreadyExists = false;

		FString OutActorName = TEXT("");
		FString OutActorDefaultName = TEXT("");

		const auto AscMapKitDecorActorSpawned = UAscMapKitEditorToolsHelper::SpawnInEditor(
			DecorActorClass,
			FTransform(SpawnLocation),
			DecorNamePrefix,
			DecorNameSequence + i,
			bDecorNameAlreadyExists,
			OutActorName,
			OutActorDefaultName
		);

		if (bDecorNameAlreadyExists)
			UAscMapKitEditorToolsHelper::ShowWarnMessage(FString::Printf(TEXT("Decor '%s' already exists (name conflict?). Using a default name instead (sorry): %s"), *OutActorName, *OutActorDefaultName));

		if (AscMapKitDecorActorSpawned && AscMapKitDecorActorSpawned->IsA(DecorActorClass))
		{
			const auto AscMapKitDecorActor = Cast<AAscMapKitDecorActor>(AscMapKitDecorActorSpawned);

			if (AscMapKitDecorActor)
			{
				if (AscMapKitDecorActor->StaticMeshComponent)
				{
					UStaticMesh *UseStaticMesh = nullptr;

					if (DecorTypeStaticMeshMap.Contains(DecorType))
						UseStaticMesh = DecorTypeStaticMeshMap[DecorType];

					if (UseStaticMesh)
					{
						AscMapKitDecorActor->StaticMeshComponent->SetStaticMesh(UseStaticMesh);
						AscMapKitDecorActor->StaticMeshComponent->SetCastShadow(false);
						
						if (DecorType == EAscMapKitDecorTypeEnum::Ladder_Set_001)
						{
							for (auto x = 1; x <= 6; x++)
							{
								auto bLadderActorNameAlreadyExists = false;

								FString OutLadderActorName = TEXT("");
								FString OutLadderActorDefaultName = TEXT("");
							
								const auto LadderActorName = FString::Printf(TEXT("Ladder_%s_%d"), *AscMapKitDecorActor->GetHumanReadableName(), x);

								const auto LadderSetPieceActor = UAscMapKitEditorToolsHelper::SpawnInEditor(
									DecorActorClass,
									FTransform(SpawnLocation),
									LadderActorName,
									-1,
									bLadderActorNameAlreadyExists,
									OutLadderActorName,
									OutLadderActorDefaultName
								);

								if (bLadderActorNameAlreadyExists)
									UAscMapKitEditorToolsHelper::ShowWarnMessage(FString::Printf(TEXT("Piece for ladder set '%s' already exists (name conflict?). Using a default name instead (sorry): %s"), *OutLadderActorName, *OutLadderActorDefaultName));

								if (LadderSetPieceActor && LadderSetPieceActor->IsA(DecorActorClass))
								{
									const auto LadderSetPieceStaticMeshActor = Cast<AAscMapKitDecorActor>(LadderSetPieceActor);
									
									if (LadderSetPieceStaticMeshActor && LadderSetPieceStaticMeshActor->StaticMeshComponent)
									{
										LadderSetPieceStaticMeshActor->StaticMeshComponent->SetStaticMesh(UseStaticMesh);
										LadderSetPieceStaticMeshActor->StaticMeshComponent->SetCastShadow(false);

										LadderSetPieceStaticMeshActor->Rename(*(LadderActorName + FGuid::NewGuid().ToString()));
										LadderSetPieceStaticMeshActor->SetActorLabel(*LadderActorName);
										LadderSetPieceStaticMeshActor->AttachToActor(AscMapKitDecorActor, FAttachmentTransformRules::KeepRelativeTransform);

										auto UseZOffset = 0.f;

										switch (x)
										{
											case 1:
												UseZOffset = -250.f;
												break;
											case 2:
												UseZOffset = -500.f;
												break;
											case 3:
												UseZOffset = -750.f;
												break;
											case 4:
												UseZOffset = 250.f;
												break;
											case 5:
												UseZOffset = 500.f;
												break;
											case 6:
												UseZOffset = 750.f;
												break;
										}

										LadderSetPieceStaticMeshActor->SetActorRelativeLocation(FVector(0.f, 0.f, UseZOffset));
									}
								}
							}
						}
						else
						{
							if (DecorColorType != EAscMapKitMaterialEmitColorTypeEnum::None &&
								MaterialEmitColorTypeMaterialMap.Contains(DecorColorType) &&
								DecorTypeStaticMeshMaterialEmitColorOverrideMap.Contains(DecorType))
							{
								FAscMapKitDecorPropertiesCustomMaterialStruct OverrideMaterialStruct;
								OverrideMaterialStruct.OverrideMaterial = true;
								OverrideMaterialStruct.MaterialIndex = DecorTypeStaticMeshMaterialEmitColorOverrideMap[DecorType];
								OverrideMaterialStruct.Material = MaterialEmitColorTypeMaterialMap[DecorColorType];

								AscMapKitDecorActor->MapKit.OverrideMaterials.Add(OverrideMaterialStruct);

								AscMapKitDecorActor->StaticMeshComponent->SetMaterial(OverrideMaterialStruct.MaterialIndex, OverrideMaterialStruct.Material);
							}
						}
					}
				}

				if (ChkBoxAddDecorLight->IsChecked() && DecorTypeLightSupport.Contains(DecorType))
				{
					const auto PointLightActorName = FString::Printf(TEXT("PointLight_%s"), *AscMapKitDecorActor->GetHumanReadableName());

					auto bPointLightActorNameAlreadyExists = false;

					FString OutPointLightActorName = TEXT("");
					FString OutPointLightActorDefaultName = TEXT("");

					const auto AscMapKitLightActorSpawned = UAscMapKitEditorToolsHelper::SpawnInEditor(
						APointLight::StaticClass(),
						FTransform(SpawnLocation),
						PointLightActorName,
						-1,
						bPointLightActorNameAlreadyExists,
						OutPointLightActorName,
						OutPointLightActorDefaultName
					);

					if (bPointLightActorNameAlreadyExists)
						UAscMapKitEditorToolsHelper::ShowWarnMessage(FString::Printf(TEXT("Light for sign '%s' already exists (name conflict?). Using a default name instead (sorry): %s"), *OutPointLightActorName, *OutPointLightActorDefaultName));

					if (AscMapKitLightActorSpawned && AscMapKitLightActorSpawned->IsA(APointLight::StaticClass()))
					{
						const auto PointLightActor = Cast<APointLight>(AscMapKitLightActorSpawned);

						if (PointLightActor && PointLightActor->PointLightComponent)
						{
							UAscMapKitEditorToolsLightHelper::SetPointLightDefaults(
								PointLightActor,
								DecorColorType,
								0.75f
							);

							AscMapKitLightActorSpawned->AttachToActor(AscMapKitDecorActor, FAttachmentTransformRules::KeepRelativeTransform);

							switch (DecorType)
							{
								case EAscMapKitDecorTypeEnum::Grate_20x20m_Basic_001:
									AscMapKitLightActorSpawned->SetActorRelativeLocation(FVector(0.f, 0.f, 1000.f));
									break;
								case EAscMapKitDecorTypeEnum::Letter:
								case EAscMapKitDecorTypeEnum::Sign_001:
								case EAscMapKitDecorTypeEnum::Sign_002:
								case EAscMapKitDecorTypeEnum::Sign_004:
								case EAscMapKitDecorTypeEnum::Sign_005:
									AscMapKitLightActorSpawned->SetActorRelativeLocation(FVector(0.f, 500.f, 0.f));
									break;
								case EAscMapKitDecorTypeEnum::Sign_006:
									AscMapKitLightActorSpawned->SetActorRelativeLocation(FVector(500.f, 0.f, 0.f));
									break;
							}
						}
					}
				}

				if (DecorType == EAscMapKitDecorTypeEnum::Sign_003)
				{
					ASphereReflectionCapture *SphereReflectionCaptureActorSpawned =
						UAscMapKitEditorToolsHelper::GetEditorWorld()->SpawnActorDeferred<ASphereReflectionCapture>(
							ASphereReflectionCapture::StaticClass(),
							FTransform(SpawnLocation),
							nullptr,
							nullptr,
							ESpawnActorCollisionHandlingMethod::AlwaysSpawn
						);

					if (SphereReflectionCaptureActorSpawned)
					{
						const auto SphereReflectionCaptureActorDone = UGameplayStatics::FinishSpawningActor(SphereReflectionCaptureActorSpawned, FTransform(SpawnLocation));

						if (SphereReflectionCaptureActorDone && SphereReflectionCaptureActorDone->IsA(ASphereReflectionCapture::StaticClass()))
						{
							const auto SphereReflectionCaptureActor = Cast<AReflectionCapture>(SphereReflectionCaptureActorDone);

							if (SphereReflectionCaptureActor)
							{
								const auto ReflectionCaptureActorName = FString::Printf(TEXT("ReflectionCapture_%s"), *AscMapKitDecorActor->GetHumanReadableName());

								SphereReflectionCaptureActor->Rename(*(ReflectionCaptureActorName + FGuid::NewGuid().ToString()));
								SphereReflectionCaptureActor->SetActorLabel(*ReflectionCaptureActorName);

								SphereReflectionCaptureActor->AttachToActor(AscMapKitDecorActor, FAttachmentTransformRules::KeepRelativeTransform);
								SphereReflectionCaptureActor->SetActorRelativeLocation(FVector(0.f, 1000.f, 0.f));

								USphereReflectionCaptureComponent *ReflectionComponent = Cast<USphereReflectionCaptureComponent>(SphereReflectionCaptureActor->GetCaptureComponent());

								if (ReflectionComponent)
								{
									ReflectionComponent->InfluenceRadius = 3500.f;
									ReflectionComponent->MarkDirtyForRecaptureOrUpload();
									ReflectionComponent->UpdateReflectionCaptureContents(UAscMapKitEditorToolsHelper::GetEditorWorld());

									GEditor->RedrawLevelEditingViewports();
								}
							}
						}
					}
				}

				AscMapKitDecorActor->SetFolderPath(FName("Decor"));

				GEditor->SelectActor(AscMapKitDecorActor, true, true);

				UKismetSystemLibrary::TransactObject(AscMapKitDecorActor);

				UAscMapKitEditorToolsHelper::ShowInfoMessage(FString::Printf(TEXT("Created decor: %s"), *AscMapKitDecorActor->GetHumanReadableName()));
			}
		}
	}

	GEditor->NoteSelectionChange();

	UKismetSystemLibrary::EndTransaction();
}

void UAscMapKitEditorToolsUtilityWidget::BtnSubTitleCreateDestructibleOnClick()
{
	ToggleSection(TEXT("Destructible"), TxtSubTitleCreateDestructible, SectionPanelDestructible);
}

void UAscMapKitEditorToolsUtilityWidget::BtnSubTitleCreateDoorOnClick()
{
	ToggleSection(TEXT("Door"), TxtSubTitleCreateDoor, SectionPanelDoor);
}

void UAscMapKitEditorToolsUtilityWidget::BtnAddDoorOnClick()
{
	if (ComboBoxAddDoorType->GetSelectedIndex() == 0)
	{
		UAscMapKitEditorToolsHelper::ShowErrorMessage(TEXT("Please select a door type!"));
		return;
	}

	if (ComboBoxAddDoorCount->GetSelectedIndex() == 0)
	{
		UAscMapKitEditorToolsHelper::ShowErrorMessage(TEXT("Please select how many door(s) to add!"));
		return;
	}

	if (ComboBoxAddDoorWhere->GetSelectedIndex() == 0)
	{
		UAscMapKitEditorToolsHelper::ShowErrorMessage(TEXT("Please select where to add the door(s)!"));
		return;
	}

	const auto DoorTypeAsFString = ComboBoxAddDoorType->GetSelectedOption();
	const auto DoorColorTypeAsFString = ComboBoxAddDoorColor->GetSelectedOption();
	const auto Count = FCString::Atoi(*ComboBoxAddDoorCount->GetSelectedOption());
	const auto Where = ComboBoxAddDoorWhere->GetSelectedOption();

	const TSubclassOf<AActor> DoorActorClass = AAscMapKitDoorActor::StaticClass();

	auto bFoundDoorType = false;
	auto DoorType = EAscMapKitDoorTypeEnum::None;

	for (const TPair<EAscMapKitDoorTypeEnum, FString> &Pair : DoorTypeMap)
	{
		if (Pair.Value == DoorTypeAsFString)
		{
			bFoundDoorType = true;
			DoorType = Pair.Key;
			break;
		}
	}

	if (!bFoundDoorType)
	{
		UAscMapKitEditorToolsHelper::ShowErrorMessage(FString::Printf(TEXT("Developer error (contact Ascentroid support)! DoorTypeMap does not contain: %s"), *DoorTypeAsFString));
		return;
	}

	auto bFoundDoorColorType = false;
	auto DoorColorType = EAscMapKitMaterialEmitColorTypeEnum::None;

	for (const TPair<EAscMapKitMaterialEmitColorTypeEnum, FString> &Pair : MaterialEmitColorTypeMap)
	{
		if (Pair.Value == DoorColorTypeAsFString)
		{
			bFoundDoorColorType = true;
			DoorColorType = Pair.Key;
			break;
		}
	}

	if (!bFoundDoorColorType)
	{
		UAscMapKitEditorToolsHelper::ShowErrorMessage(FString::Printf(TEXT("Developer error (contact Ascentroid support)! DoorColorTypeMap does not contain: %s"), *DoorColorTypeAsFString));
		return;
	}

	if (DoorColorType == EAscMapKitMaterialEmitColorTypeEnum::None)
		DoorColorType = EAscMapKitMaterialEmitColorTypeEnum::Green;

	auto SpawnLocation = FVector::ZeroVector;

	if (Where == TEXT("Selected"))
	{
		const auto bFoundSelectedActor = UAscMapKitEditorToolsHelper::GetEditorFirstSelectedActor(SpawnLocation);

		if (!bFoundSelectedActor)
			UAscMapKitEditorToolsHelper::ShowWarnMessage(TEXT("Nothing was selected in the editor. Using spawn location (0, 0, 0)."));
	}

	if (DoorType == EAscMapKitDoorTypeEnum::None)
	{
		UAscMapKitEditorToolsHelper::ShowErrorMessage(FString::Printf(TEXT("Developer error (contact Ascentroid support)! DoorTypeMap resolved to 'None': %s"), *DoorTypeAsFString));
		return;
	}

	const auto DoorNamePrefix = FString::Printf(TEXT("Door_%s"), *DoorTypeAsFString.Replace(TEXT(" "), TEXT("_")));
	const auto DoorTypeNameSequence = UAscMapKitEditorToolsHelper::GetEditorNextActorSequence(DoorActorClass, DoorNamePrefix);

	const auto TransactionContext = FString::Printf(TEXT("%s::%hc"), *GetClass()->GetName(), *__FUNCTION__);

	UKismetSystemLibrary::BeginTransaction(TransactionContext, FText::FromString(TEXT("Add Door(s)")), nullptr);

	GEditor->SelectNone(true, true, false);

	for (auto i = 0; i < Count; i++)
	{
		auto UseDoorId = 0;

		TArray<AActor *> FoundDoors;
		UGameplayStatics::GetAllActorsOfClass(UAscMapKitEditorToolsHelper::GetEditorWorld(), DoorActorClass, FoundDoors);

		if (FoundDoors.Num() > 0)
		{
			TArray<int32> FoundDoorIds;

			for (const auto &FoundDoor : FoundDoors)
			{
				if (FoundDoor && FoundDoor->IsA(DoorActorClass))
				{
					const auto Door = Cast<AAscMapKitDoorActor>(FoundDoor);

					if (Door)
						FoundDoorIds.AddUnique(FCString::Atoi(*Door->MapKit.Id));
				}
			}

			if (FoundDoorIds.Num() > 0)
				UseDoorId = *Algo::MaxElement(FoundDoorIds);
		}

		auto bDoorNameAlreadyExists = false;

		FString OutActorName = TEXT("");
		FString OutActorDefaultName = TEXT("");

		const auto AscMapKitDoorActorSpawned = UAscMapKitEditorToolsHelper::SpawnInEditor(
			DoorActorClass,
			FTransform(SpawnLocation),
			DoorNamePrefix,
			DoorTypeNameSequence + i,
			bDoorNameAlreadyExists,
			OutActorName,
			OutActorDefaultName
		);

		if (bDoorNameAlreadyExists)
			UAscMapKitEditorToolsHelper::ShowWarnMessage(FString::Printf(TEXT("Door '%s' already exists (name conflict?). Using a default name instead (sorry): %s"), *OutActorName, *OutActorDefaultName));

		if (AscMapKitDoorActorSpawned && AscMapKitDoorActorSpawned->IsA(DoorActorClass))
		{
			const auto AscMapKitDoorActor = Cast<AAscMapKitDoorActor>(AscMapKitDoorActorSpawned);

			if (AscMapKitDoorActor)
			{
				AscMapKitDoorActor->MapKit.Id = FString::Printf(TEXT("%0*d"), 3, UseDoorId + 1);
				AscMapKitDoorActor->MapKit.DoorType = DoorType;

				if (DoorColorType != EAscMapKitMaterialEmitColorTypeEnum::None &&
					MaterialEmitColorTypeMaterialMap.Contains(DoorColorType) &&
					DoorTypeStaticMeshMaterialEmitColorOverrideMap.Contains(DoorType))
				{
					FAscMapKitDoorPropertiesCustomMaterialStruct OverrideMaterialStruct;
					OverrideMaterialStruct.OverrideMaterial = true;
					OverrideMaterialStruct.MaterialIndex = DoorTypeStaticMeshMaterialEmitColorOverrideMap[DoorType];
					OverrideMaterialStruct.Material = MaterialEmitColorTypeMaterialMap[DoorColorType];

					AscMapKitDoorActor->MapKit.Custom.NonDestructible.OverrideMaterials.Add(OverrideMaterialStruct);

					// todo: implement later?
					//AscMapKitDoorActor->MapKit.Custom.Destructible.OverrideMaterials.Add(OverrideMaterialStruct);
					//AscMapKitDoorActor->MapKit.Custom.Destructible.OverrideMaterialsDestroyed.Add(OverrideMaterialStruct);

					AscMapKitDoorActor->StaticMeshComponent->SetMaterial(OverrideMaterialStruct.MaterialIndex, OverrideMaterialStruct.Material);
				}

				AscMapKitDoorActor->EditorUpdateDoorType(AscMapKitDoorActor->MapKit.DoorType);
				AscMapKitDoorActor->SetFolderPath(FName("Doors"));

				GEditor->SelectActor(AscMapKitDoorActor, true, true);

				UKismetSystemLibrary::TransactObject(AscMapKitDoorActor);

				UAscMapKitEditorToolsHelper::ShowInfoMessage(FString::Printf(TEXT("Created door: %s"), *AscMapKitDoorActor->GetHumanReadableName()));
			}
		}
	}

	GEditor->NoteSelectionChange();

	UKismetSystemLibrary::EndTransaction();
}

void UAscMapKitEditorToolsUtilityWidget::BtnSubTitleCreateEnemyOnClick()
{
	ToggleSection(TEXT("Enemy"), TxtSubTitleCreateEnemy, SectionPanelEnemy);
}

void UAscMapKitEditorToolsUtilityWidget::BtnAddEnemyOnClick()
{
	if (ComboBoxAddEnemyType->GetSelectedIndex() == 0)
	{
		UAscMapKitEditorToolsHelper::ShowErrorMessage(TEXT("Please select a enemy type!"));
		return;
	}

	if (ComboBoxAddEnemyCount->GetSelectedIndex() == 0)
	{
		UAscMapKitEditorToolsHelper::ShowErrorMessage(TEXT("Please select how many enemies to add!"));
		return;
	}

	if (ComboBoxAddEnemyWhere->GetSelectedIndex() == 0)
	{
		UAscMapKitEditorToolsHelper::ShowErrorMessage(TEXT("Please select where to add the enemies!"));
		return;
	}

	const auto EnemyTypeAsFString = ComboBoxAddEnemyType->GetSelectedOption();
	const auto EnemyColorTypeAsFString = ComboBoxAddEnemyColor->GetSelectedOption();
	const auto Count = FCString::Atoi(*ComboBoxAddEnemyCount->GetSelectedOption());
	const auto Where = ComboBoxAddEnemyWhere->GetSelectedOption();

	const TSubclassOf<AActor> EnemyActorClass = AAscMapKitEnemyActor::StaticClass();

	auto bFoundEnemyType = false;
	auto EnemyType = EAscMapKitEnemyTypeEnum::None;

	for (const TPair<EAscMapKitEnemyTypeEnum, FString> &Pair : EnemyTypeMap)
	{
		if (Pair.Value == EnemyTypeAsFString)
		{
			bFoundEnemyType = true;
			EnemyType = Pair.Key;
			break;
		}
	}

	if (!bFoundEnemyType)
	{
		UAscMapKitEditorToolsHelper::ShowErrorMessage(FString::Printf(TEXT("Developer error (contact Ascentroid support)! EnemyTypeMap does not contain: %s"), *EnemyTypeAsFString));
		return;
	}

	auto bFoundEnemyColorType = false;
	auto EnemyColorType = EAscMapKitMaterialEmitColorTypeEnum::None;

	for (const TPair<EAscMapKitMaterialEmitColorTypeEnum, FString> &Pair : MaterialEmitColorTypeMap)
	{
		if (Pair.Value == EnemyColorTypeAsFString)
		{
			bFoundEnemyColorType = true;
			EnemyColorType = Pair.Key;
			break;
		}
	}

	if (!bFoundEnemyColorType)
	{
		UAscMapKitEditorToolsHelper::ShowErrorMessage(FString::Printf(TEXT("Developer error (contact Ascentroid support)! EnemyColorTypeMap does not contain: %s"), *EnemyColorTypeAsFString));
		return;
	}

	if (EnemyColorType == EAscMapKitMaterialEmitColorTypeEnum::None)
		EnemyColorType = EAscMapKitMaterialEmitColorTypeEnum::Red;

	auto UseColor = UAscMapKitEditorToolsLightHelper::GetLightColorAsFLinearColor(EnemyColorType);

	if (EnemyColorType == EAscMapKitMaterialEmitColorTypeEnum::None)
		UseColor = FLinearColor::Red;
	
	auto SpawnLocation = FVector::ZeroVector;

	if (Where == TEXT("Selected"))
	{
		const auto bFoundSelectedActor = UAscMapKitEditorToolsHelper::GetEditorFirstSelectedActor(SpawnLocation);

		if (!bFoundSelectedActor)
			UAscMapKitEditorToolsHelper::ShowWarnMessage(TEXT("Nothing was selected in the editor. Using spawn location (0, 0, 0)."));
	}

	if (EnemyType == EAscMapKitEnemyTypeEnum::None)
	{
		UAscMapKitEditorToolsHelper::ShowErrorMessage(FString::Printf(TEXT("Developer error (contact Ascentroid support)! EnemyTypeMap resolved to 'None': %s"), *EnemyTypeAsFString));
		return;
	}

	const auto EnemyNamePrefix = FString::Printf(TEXT("Enemy_%s"), *EnemyTypeAsFString.Replace(TEXT(" "), TEXT("_")));
	const auto EnemyTypeNameSequence = UAscMapKitEditorToolsHelper::GetEditorNextActorSequence(EnemyActorClass, EnemyNamePrefix);

	const auto TransactionContext = FString::Printf(TEXT("%s::%hc"), *GetClass()->GetName(), *__FUNCTION__);

	UKismetSystemLibrary::BeginTransaction(TransactionContext, FText::FromString(TEXT("Add Enemy(s)")), nullptr);

	GEditor->SelectNone(true, true, false);

	for (auto i = 0; i < Count; i++)
	{
		auto bEnemyNameAlreadyExists = false;

		FString OutActorName = TEXT("");
		FString OutActorDefaultName = TEXT("");

		const auto AscMapKitEnemyActorSpawned = UAscMapKitEditorToolsHelper::SpawnInEditor(
			EnemyActorClass,
			FTransform(SpawnLocation),
			EnemyNamePrefix,
			EnemyTypeNameSequence + i,
			bEnemyNameAlreadyExists,
			OutActorName,
			OutActorDefaultName
		);

		if (bEnemyNameAlreadyExists)
			UAscMapKitEditorToolsHelper::ShowWarnMessage(FString::Printf(TEXT("Enemy '%s' already exists (name conflict?). Using a default name instead (sorry): %s"), *OutActorName, *OutActorDefaultName));

		if (AscMapKitEnemyActorSpawned && AscMapKitEnemyActorSpawned->IsA(EnemyActorClass))
		{
			const auto AscMapKitEnemyActor = Cast<AAscMapKitEnemyActor>(AscMapKitEnemyActorSpawned);

			if (AscMapKitEnemyActor)
			{
				AscMapKitEnemyActor->MapKit.EnemyType = EnemyType;

				if (EnemyColorType != EAscMapKitMaterialEmitColorTypeEnum::None && MaterialEmitColorTypeMaterialMap.Contains(EnemyColorType))
				{
					AscMapKitEnemyActor->MapKit.Colors.OverrideEmitColor = true;
					AscMapKitEnemyActor->MapKit.Colors.EmitColor = UseColor;
				}

				AscMapKitEnemyActor->EditorUpdateEnemyType(AscMapKitEnemyActor->MapKit.EnemyType);
				AscMapKitEnemyActor->EditorUpdateWeaponSockets();
				AscMapKitEnemyActor->SetFolderPath(FName("Enemies"));

				GEditor->SelectActor(AscMapKitEnemyActor, true, true);

				UKismetSystemLibrary::TransactObject(AscMapKitEnemyActor);

				UAscMapKitEditorToolsHelper::ShowInfoMessage(FString::Printf(TEXT("Created enemy: %s"), *AscMapKitEnemyActor->GetHumanReadableName()));
			}
		}
	}

	GEditor->NoteSelectionChange();

	UKismetSystemLibrary::EndTransaction();
}

void UAscMapKitEditorToolsUtilityWidget::BtnSubTitleCreateFanOnClick()
{
	ToggleSection(TEXT("Fan"), TxtSubTitleCreateFan, SectionPanelFan);
}

void UAscMapKitEditorToolsUtilityWidget::BtnAddFanOnClick()
{
	if (ComboBoxAddFanType->GetSelectedIndex() == 0)
	{
		UAscMapKitEditorToolsHelper::ShowErrorMessage(TEXT("Please select a fan type!"));
		return;
	}

	if (ComboBoxAddFanCount->GetSelectedIndex() == 0)
	{
		UAscMapKitEditorToolsHelper::ShowErrorMessage(TEXT("Please select how many fan(s) to add!"));
		return;
	}

	if (ComboBoxAddFanWhere->GetSelectedIndex() == 0)
	{
		UAscMapKitEditorToolsHelper::ShowErrorMessage(TEXT("Please select where to add the fan(s)!"));
		return;
	}

	const auto FanTypeAsFString = ComboBoxAddFanType->GetSelectedOption();
	const auto FanColorTypeAsFString = ComboBoxAddFanColor->GetSelectedOption();
	const auto Count = FCString::Atoi(*ComboBoxAddFanCount->GetSelectedOption());
	const auto Where = ComboBoxAddFanWhere->GetSelectedOption();

	const TSubclassOf<AActor> FanActorClass = AAscMapKitFanActor::StaticClass();

	auto bFoundFanType = false;
	auto FanType = EAscMapKitFanTypeEnum::None;

	for (const TPair<EAscMapKitFanTypeEnum, FString> &Pair : FanTypeMap)
	{
		if (Pair.Value == FanTypeAsFString)
		{
			bFoundFanType = true;
			FanType = Pair.Key;
			break;
		}
	}

	if (!bFoundFanType)
	{
		UAscMapKitEditorToolsHelper::ShowErrorMessage(FString::Printf(TEXT("Developer error (contact Ascentroid support)! FanTypeMap does not contain: %s"), *FanTypeAsFString));
		return;
	}

	auto bFoundFanColorType = false;
	auto FanColorType = EAscMapKitMaterialEmitColorTypeEnum::None;

	for (const TPair<EAscMapKitMaterialEmitColorTypeEnum, FString> &Pair : MaterialEmitColorTypeMap)
	{
		if (Pair.Value == FanColorTypeAsFString)
		{
			bFoundFanColorType = true;
			FanColorType = Pair.Key;
			break;
		}
	}

	if (!bFoundFanColorType)
	{
		UAscMapKitEditorToolsHelper::ShowErrorMessage(FString::Printf(TEXT("Developer error (contact Ascentroid support)! FanColorTypeMap does not contain: %s"), *FanColorTypeAsFString));
		return;
	}

	if (FanColorType == EAscMapKitMaterialEmitColorTypeEnum::None)
		FanColorType = EAscMapKitMaterialEmitColorTypeEnum::Green;

	auto SpawnLocation = FVector::ZeroVector;

	if (Where == TEXT("Selected"))
	{
		const auto bFoundSelectedActor = UAscMapKitEditorToolsHelper::GetEditorFirstSelectedActor(SpawnLocation);

		if (!bFoundSelectedActor)
			UAscMapKitEditorToolsHelper::ShowWarnMessage(TEXT("Nothing was selected in the editor. Using spawn location (0, 0, 0)."));
	}

	if (FanType == EAscMapKitFanTypeEnum::None)
	{
		UAscMapKitEditorToolsHelper::ShowErrorMessage(FString::Printf(TEXT("Developer error (contact Ascentroid support)! FanTypeMap resolved to 'None': %s"), *FanTypeAsFString));
		return;
	}

	const auto FanNamePrefix = FString::Printf(TEXT("Fan_%s"), *FanTypeAsFString.Replace(TEXT(" "), TEXT("_")));
	const auto FanTypeNameSequence = UAscMapKitEditorToolsHelper::GetEditorNextActorSequence(FanActorClass, FanNamePrefix);

	const auto TransactionContext = FString::Printf(TEXT("%s::%hc"), *GetClass()->GetName(), *__FUNCTION__);

	UKismetSystemLibrary::BeginTransaction(TransactionContext, FText::FromString(TEXT("Add Fan(s)")), nullptr);

	GEditor->SelectNone(true, true, false);

	for (auto i = 0; i < Count; i++)
	{
		auto bFanNameAlreadyExists = false;

		FString OutActorName = TEXT("");
		FString OutActorDefaultName = TEXT("");

		const auto AscMapKitFanActorSpawned = UAscMapKitEditorToolsHelper::SpawnInEditor(
			FanActorClass,
			FTransform(SpawnLocation),
			FanNamePrefix,
			FanTypeNameSequence + i,
			bFanNameAlreadyExists,
			OutActorName,
			OutActorDefaultName
		);

		if (bFanNameAlreadyExists)
			UAscMapKitEditorToolsHelper::ShowWarnMessage(FString::Printf(TEXT("Fan '%s' already exists (name conflict?). Using a default name instead (sorry): %s"), *OutActorName, *OutActorDefaultName));

		if (AscMapKitFanActorSpawned && AscMapKitFanActorSpawned->IsA(FanActorClass))
		{
			const auto AscMapKitFanActor = Cast<AAscMapKitFanActor>(AscMapKitFanActorSpawned);

			if (AscMapKitFanActor)
			{
				AscMapKitFanActor->MapKit.FanType = FanType;

				if (FanColorType != EAscMapKitMaterialEmitColorTypeEnum::None &&
					MaterialEmitColorTypeMaterialMap.Contains(FanColorType) &&
					FanTypeStaticMeshMaterialEmitColorOverrideMap.Contains(FanType))
				{
					FAscMapKitFanPropertiesCustomMaterialStruct OverrideMaterialStruct;
					OverrideMaterialStruct.OverrideMaterial = true;
					OverrideMaterialStruct.MaterialIndex = FanTypeStaticMeshMaterialEmitColorOverrideMap[FanType];
					OverrideMaterialStruct.Material = MaterialEmitColorTypeMaterialMap[FanColorType];

					AscMapKitFanActor->MapKit.Custom.OverrideMaterials.Add(OverrideMaterialStruct);

					AscMapKitFanActor->StaticMeshComponent->SetMaterial(OverrideMaterialStruct.MaterialIndex, OverrideMaterialStruct.Material);
				}

				AscMapKitFanActor->EditorUpdateFan(TEXT("FanType"), AscMapKitFanActor->MapKit.FanType);
				AscMapKitFanActor->SetFolderPath(FName("Fans"));

				GEditor->SelectActor(AscMapKitFanActor, true, true);

				UKismetSystemLibrary::TransactObject(AscMapKitFanActor);

				UAscMapKitEditorToolsHelper::ShowInfoMessage(FString::Printf(TEXT("Created fan: %s"), *AscMapKitFanActor->GetHumanReadableName()));
			}
		}
	}

	GEditor->NoteSelectionChange();

	UKismetSystemLibrary::EndTransaction();
}

void UAscMapKitEditorToolsUtilityWidget::BtnSubTitleCreateForcefieldOnClick()
{
	ToggleSection(TEXT("Forcefield"), TxtSubTitleCreateForcefield, SectionPanelForcefield);
}

void UAscMapKitEditorToolsUtilityWidget::BtnAddForcefieldOnClick()
{
	if (ComboBoxAddForcefieldCount->GetSelectedIndex() == 0)
	{
		UAscMapKitEditorToolsHelper::ShowErrorMessage(TEXT("Please select how many forcefield(s) to add!"));
		return;
	}

	if (ComboBoxAddForcefieldWhere->GetSelectedIndex() == 0)
	{
		UAscMapKitEditorToolsHelper::ShowErrorMessage(TEXT("Please select where to add the forcefield(s)!"));
		return;
	}

	const auto ForcefieldColorTypeAsFString = ComboBoxAddForcefieldColor->GetSelectedOption();
	const auto Count = FCString::Atoi(*ComboBoxAddForcefieldCount->GetSelectedOption());
	const auto Where = ComboBoxAddForcefieldWhere->GetSelectedOption();

	const TSubclassOf<AActor> ForcefieldActorClass = AAscMapKitForcefieldActor::StaticClass();

	auto bFoundForcefieldColorType = false;
	auto ForcefieldColorType = EAscMapKitMaterialEmitColorTypeEnum::None;

	for (const TPair<EAscMapKitMaterialEmitColorTypeEnum, FString> &Pair : MaterialEmitColorTypeMap)
	{
		if (Pair.Value == ForcefieldColorTypeAsFString)
		{
			bFoundForcefieldColorType = true;
			ForcefieldColorType = Pair.Key;
			break;
		}
	}

	if (!bFoundForcefieldColorType)
	{
		UAscMapKitEditorToolsHelper::ShowErrorMessage(FString::Printf(TEXT("Developer error (contact Ascentroid support)! ForcefieldColorTypeMap does not contain: %s"), *ForcefieldColorTypeAsFString));
		return;
	}

	auto UseColor = UAscMapKitEditorToolsLightHelper::GetLightColorAsFLinearColor(ForcefieldColorType);

	if (ForcefieldColorType == EAscMapKitMaterialEmitColorTypeEnum::None)
		UseColor = FLinearColor(0.5f, 0.5f, 6.f); //BCBCFF00

	auto SpawnLocation = FVector::ZeroVector;

	if (Where == TEXT("Selected"))
	{
		const auto bFoundSelectedActor = UAscMapKitEditorToolsHelper::GetEditorFirstSelectedActor(SpawnLocation);

		if (!bFoundSelectedActor)
			UAscMapKitEditorToolsHelper::ShowWarnMessage(TEXT("Nothing was selected in the editor. Using spawn location (0, 0, 0)."));
	}

	const auto ForcefieldNamePrefix = TEXT("Forcefield");
	const auto ForcefieldTypeNameSequence = UAscMapKitEditorToolsHelper::GetEditorNextActorSequence(ForcefieldActorClass, ForcefieldNamePrefix);

	const auto TransactionContext = FString::Printf(TEXT("%s::%hc"), *GetClass()->GetName(), *__FUNCTION__);

	UKismetSystemLibrary::BeginTransaction(TransactionContext, FText::FromString(TEXT("Add Forcefield(s)")), nullptr);

	GEditor->SelectNone(true, true, false);

	for (auto i = 0; i < Count; i++)
	{
		auto UseForcefieldId = 0;

		TArray<AActor *> FoundForcefields;
		UGameplayStatics::GetAllActorsOfClass(UAscMapKitEditorToolsHelper::GetEditorWorld(), ForcefieldActorClass, FoundForcefields);

		if (FoundForcefields.Num() > 0)
		{
			TArray<int32> FoundForcefieldIds;

			for (const auto &FoundForcefield : FoundForcefields)
			{
				if (FoundForcefield && FoundForcefield->IsA(ForcefieldActorClass))
				{
					const auto Forcefield = Cast<AAscMapKitForcefieldActor>(FoundForcefield);

					if (Forcefield)
						FoundForcefieldIds.AddUnique(FCString::Atoi(*Forcefield->MapKit.Id));
				}
			}

			if (FoundForcefieldIds.Num() > 0)
				UseForcefieldId = *Algo::MaxElement(FoundForcefieldIds);
		}

		auto bForcefieldNameAlreadyExists = false;

		FString OutActorName = TEXT("");
		FString OutActorDefaultName = TEXT("");

		const auto AscMapKitForcefieldActorSpawned = UAscMapKitEditorToolsHelper::SpawnInEditor(
			ForcefieldActorClass,
			FTransform(SpawnLocation),
			ForcefieldNamePrefix,
			ForcefieldTypeNameSequence + i,
			bForcefieldNameAlreadyExists,
			OutActorName,
			OutActorDefaultName
		);

		if (bForcefieldNameAlreadyExists)
			UAscMapKitEditorToolsHelper::ShowWarnMessage(FString::Printf(TEXT("Forcefield '%s' already exists (name conflict?). Using a default name instead (sorry): %s"), *OutActorName, *OutActorDefaultName));

		if (AscMapKitForcefieldActorSpawned && AscMapKitForcefieldActorSpawned->IsA(ForcefieldActorClass))
		{
			const auto AscMapKitForcefieldActor = Cast<AAscMapKitForcefieldActor>(AscMapKitForcefieldActorSpawned);

			if (AscMapKitForcefieldActor)
			{
				AscMapKitForcefieldActor->MapKit.Id = FString::Printf(TEXT("%0*d"), 3, UseForcefieldId + 1);
				AscMapKitForcefieldActor->MapKit.StaticMesh.OverrideColor = true;
				AscMapKitForcefieldActor->MapKit.StaticMesh.Color = UseColor;

				AscMapKitForcefieldActor->SetFolderPath(FName("Forcefields"));
				AscMapKitForcefieldActor->UpdateColor();

				GEditor->SelectActor(AscMapKitForcefieldActor, true, true);

				UKismetSystemLibrary::TransactObject(AscMapKitForcefieldActor);

				UAscMapKitEditorToolsHelper::ShowInfoMessage(FString::Printf(TEXT("Created forcefield: %s"), *AscMapKitForcefieldActor->GetHumanReadableName()));
			}
		}
	}

	GEditor->NoteSelectionChange();

	UKismetSystemLibrary::EndTransaction();
}

void UAscMapKitEditorToolsUtilityWidget::BtnSubTitleCreateLightOnClick()
{
	ToggleSection(TEXT("Light"), TxtSubTitleCreateLight, SectionPanelLight);
}

void UAscMapKitEditorToolsUtilityWidget::BtnAddLightOnClick()
{
	if (ComboBoxAddLightType->GetSelectedIndex() == 0)
	{
		UAscMapKitEditorToolsHelper::ShowErrorMessage(TEXT("Please select what light type to add!"));
		return;
	}

	if (ComboBoxAddLightCount->GetSelectedIndex() == 0)
	{
		UAscMapKitEditorToolsHelper::ShowErrorMessage(TEXT("Please select how many light(s) to add!"));
		return;
	}

	if (ComboBoxAddLightWhere->GetSelectedIndex() == 0)
	{
		UAscMapKitEditorToolsHelper::ShowErrorMessage(TEXT("Please select where to add the light(s)!"));
		return;
	}

	const auto LightType = ComboBoxAddLightType->GetSelectedOption();
	const auto LightColorTypeAsFString = ComboBoxAddLightColor->GetSelectedOption();
	const auto Count = FCString::Atoi(*ComboBoxAddLightCount->GetSelectedOption());
	const auto Where = ComboBoxAddLightWhere->GetSelectedOption();

	auto bFoundLightColorType = false;
	auto LightColorType = EAscMapKitMaterialEmitColorTypeEnum::None;

	for (const TPair<EAscMapKitMaterialEmitColorTypeEnum, FString> &Pair : MaterialEmitColorTypeMap)
	{
		if (Pair.Value == LightColorTypeAsFString)
		{
			bFoundLightColorType = true;
			LightColorType = Pair.Key;
			break;
		}
	}

	if (!bFoundLightColorType)
	{
		UAscMapKitEditorToolsHelper::ShowErrorMessage(FString::Printf(TEXT("Developer error (contact Ascentroid support)! LightColorTypeMap does not contain: %s"), *LightColorTypeAsFString));
		return;
	}

	auto SpawnLocation = FVector::ZeroVector;

	if (Where == TEXT("Selected"))
	{
		const auto bFoundSelectedActor = UAscMapKitEditorToolsHelper::GetEditorFirstSelectedActor(SpawnLocation);

		if (!bFoundSelectedActor)
			UAscMapKitEditorToolsHelper::ShowWarnMessage(TEXT("Nothing was selected in the editor. Using spawn location (0, 0, 0)."));
	}

	TSubclassOf<AActor> LightActorClass = APointLight::StaticClass();
	FString LightNamePrefix = TEXT("PointLight");

	if (LightType == TEXT("Standalone: Point"))
		LightNamePrefix = TEXT("PointLight");
	else if (LightType == TEXT("Standalone: Rectangular"))
	{
		LightActorClass = ARectLight::StaticClass();
		LightNamePrefix = TEXT("RectangularLight");
	}
	else if (LightType == TEXT("Standalone: Spot"))
	{
		LightActorClass = ASpotLight::StaticClass();
		LightNamePrefix = TEXT("SpotLight");
	}
	else if (LightType == TEXT("Pre-made set: Round"))
	{
		LightActorClass = AStaticMeshActor::StaticClass();
		LightNamePrefix = TEXT("RoundLight");
	}
	else if (LightType == TEXT("Pre-made set: Square"))
	{
		LightActorClass = AStaticMeshActor::StaticClass();
		LightNamePrefix = TEXT("SquareLight");
	}

	const auto LightNameSequence = UAscMapKitEditorToolsHelper::GetEditorNextActorSequence(LightActorClass, LightNamePrefix);

	const auto TransactionContext = FString::Printf(TEXT("%s::%hc"), *GetClass()->GetName(), *__FUNCTION__);

	UKismetSystemLibrary::BeginTransaction(TransactionContext, FText::FromString(TEXT("Add Light(s)")), nullptr);

	GEditor->SelectNone(true, true, false);

	for (auto i = 0; i < Count; i++)
	{
		auto bLightNameAlreadyExists = false;

		FString OutActorName = TEXT("");
		FString OutActorDefaultName = TEXT("");

		const auto AscMapKitLightActorSpawned = UAscMapKitEditorToolsHelper::SpawnInEditor(
			LightActorClass,
			FTransform(SpawnLocation),
			LightNamePrefix,
			LightNameSequence + i,
			bLightNameAlreadyExists,
			OutActorName,
			OutActorDefaultName
		);

		if (bLightNameAlreadyExists)
			UAscMapKitEditorToolsHelper::ShowWarnMessage(FString::Printf(TEXT("Light '%s' already exists (name conflict?). Using a default name instead (sorry): %s"), *OutActorName, *OutActorDefaultName));

		if (AscMapKitLightActorSpawned)
		{
			AscMapKitLightActorSpawned->SetFolderPath(FName("Lights"));

			if (AscMapKitLightActorSpawned->IsA(APointLight::StaticClass()))
			{
				const auto LightActor = Cast<APointLight>(AscMapKitLightActorSpawned);

				if (LightActor)
					UAscMapKitEditorToolsLightHelper::SetPointLightDefaults(
						LightActor,
						LightColorType,
						6.f,
						ChkBoxLightCastShadows->IsChecked(),
						ChkBoxLightFog->IsChecked()
					);
			}
			else if (AscMapKitLightActorSpawned->IsA(ARectLight::StaticClass()))
			{
				const auto LightActor = Cast<ARectLight>(AscMapKitLightActorSpawned);

				if (LightActor)
					UAscMapKitEditorToolsLightHelper::SetRectangularLightDefaults(
						LightActor,
						LightColorType,
						150.f,
						ChkBoxLightCastShadows->IsChecked(),
						ChkBoxLightFog->IsChecked()
					);
			}
			else if (AscMapKitLightActorSpawned->IsA(ASpotLight::StaticClass()))
			{
				const auto LightActor = Cast<ASpotLight>(AscMapKitLightActorSpawned);

				if (LightActor)
					UAscMapKitEditorToolsLightHelper::SetSpotLightDefaults(
						LightActor,
						LightColorType,
						50.f,
						ChkBoxLightCastShadows->IsChecked(),
						ChkBoxLightFog->IsChecked()
					);
			}
			else if (AscMapKitLightActorSpawned->IsA(AStaticMeshActor::StaticClass()))
			{
				const auto LightStaticMeshActor = Cast<AStaticMeshActor>(AscMapKitLightActorSpawned);

				if (LightStaticMeshActor && LightStaticMeshActor->GetStaticMeshComponent())
				{
					if (LightNamePrefix == TEXT("RoundLight"))
						LightStaticMeshActor->GetStaticMeshComponent()->SetStaticMesh(CylinderStaticMesh);
					else if (LightNamePrefix == TEXT("SquareLight"))
						LightStaticMeshActor->GetStaticMeshComponent()->SetStaticMesh(CubeStaticMesh);

					auto UseMaterial = MaterialEmitColorWhite;
					auto UseLightColorType = EAscMapKitMaterialEmitColorTypeEnum::White;

					if (MaterialEmitColorTypeMaterialMap.Contains(LightColorType))
					{
						UseMaterial = MaterialEmitColorTypeMaterialMap[LightColorType];
						UseLightColorType = LightColorType;
					}

					LightStaticMeshActor->GetStaticMeshComponent()->SetCastShadow(false);
					LightStaticMeshActor->GetStaticMeshComponent()->SetMaterial(0, UseMaterial);
					LightStaticMeshActor->SetActorScale3D(FVector(6.f, 6.f, 0.5f));

					auto bPointLightNameAlreadyExists = false;
					auto bSpotLightNameAlreadyExists = false;

					FString OutPointLightActorName = TEXT("");
					FString OutSpotLightActorName = TEXT("");
					
					FString OutPointLightActorDefaultName = TEXT("");
					FString OutSpotLightActorDefaultName = TEXT("");

					const auto PointLightActorSpawned = UAscMapKitEditorToolsHelper::SpawnInEditor(
						APointLight::StaticClass(),
						FTransform(SpawnLocation),
						LightNamePrefix,
						-1,
						bPointLightNameAlreadyExists,
						OutPointLightActorName,
						OutPointLightActorDefaultName
					);

					const auto SpotLightActorSpawned = UAscMapKitEditorToolsHelper::SpawnInEditor(
						ASpotLight::StaticClass(),
						FTransform(SpawnLocation),
						LightNamePrefix,
						-1,
						bSpotLightNameAlreadyExists,
						OutSpotLightActorName,
						OutSpotLightActorDefaultName
					);

					if (bPointLightNameAlreadyExists)
						UAscMapKitEditorToolsHelper::ShowWarnMessage(FString::Printf(TEXT("Light '%s' already exists (name conflict?). Using a default name instead (sorry): %s"), *OutPointLightActorName, *OutPointLightActorDefaultName));

					if (bSpotLightNameAlreadyExists)
						UAscMapKitEditorToolsHelper::ShowWarnMessage(FString::Printf(TEXT("Light '%s' already exists (name conflict?). Using a default name instead (sorry): %s"), *OutSpotLightActorName, *OutSpotLightActorDefaultName));

					if (PointLightActorSpawned && PointLightActorSpawned->IsA(APointLight::StaticClass()))
					{
						const auto PointLightActor = Cast<APointLight>(PointLightActorSpawned);

						if (PointLightActor && PointLightActor->PointLightComponent)
						{
							UAscMapKitEditorToolsLightHelper::SetPointLightDefaults(
								PointLightActor,
								UseLightColorType,
								6.f,
								ChkBoxLightCastShadows->IsChecked(),
								ChkBoxLightFog->IsChecked()
							);

							const auto PointLightActorName = FString::Printf(TEXT("PointLight_%s"), *AscMapKitLightActorSpawned->GetHumanReadableName());

							PointLightActor->AttachToActor(AscMapKitLightActorSpawned, FAttachmentTransformRules::KeepRelativeTransform);
							PointLightActor->SetActorRelativeLocation(FVector(0.f, 0.f, -1000.f));
							PointLightActor->Rename(*(PointLightActorName + FGuid::NewGuid().ToString()));
							PointLightActor->SetActorLabel(*PointLightActorName);
						}
					}

					if (SpotLightActorSpawned && SpotLightActorSpawned->IsA(ASpotLight::StaticClass()))
					{
						const auto SpotLightActor = Cast<ASpotLight>(SpotLightActorSpawned);

						if (SpotLightActor && SpotLightActor->SpotLightComponent)
						{
							UAscMapKitEditorToolsLightHelper::SetSpotLightDefaults(
								SpotLightActor,
								UseLightColorType,
								50.f,
								ChkBoxLightCastShadows->IsChecked(),
								ChkBoxLightFog->IsChecked()
							);

							const auto SpotLightActorName = FString::Printf(TEXT("SpotLight_%s"), *AscMapKitLightActorSpawned->GetHumanReadableName());

							SpotLightActor->AttachToActor(AscMapKitLightActorSpawned, FAttachmentTransformRules::KeepRelativeTransform);
							SpotLightActor->SetActorRelativeLocation(FVector(0.f, 0.f, 1000.f));
							SpotLightActor->SpotLightComponent->AttenuationRadius = 4500.f;
							SpotLightActor->Rename(*(SpotLightActorName + FGuid::NewGuid().ToString()));
							SpotLightActor->SetActorLabel(*SpotLightActorName);
						}
					}
				}
			}

			GEditor->SelectActor(AscMapKitLightActorSpawned, true, true);

			UKismetSystemLibrary::TransactObject(AscMapKitLightActorSpawned);

			UAscMapKitEditorToolsHelper::ShowInfoMessage(FString::Printf(TEXT("Created light: %s"), *AscMapKitLightActorSpawned->GetHumanReadableName()));
		}
	}

	GEditor->NoteSelectionChange();

	UKismetSystemLibrary::EndTransaction();
}

void UAscMapKitEditorToolsUtilityWidget::BtnSubTitleCreatePlayerOnClick()
{
	ToggleSection(TEXT("Player"), TxtSubTitleCreatePlayer, SectionPanelPlayer);
}

void UAscMapKitEditorToolsUtilityWidget::BtnAddPlayerOnClick()
{
	if (ComboBoxAddPlayerCount->GetSelectedIndex() == 0)
	{
		UAscMapKitEditorToolsHelper::ShowErrorMessage(TEXT("Please select how many player start(s) to add!"));
		return;
	}

	if (ComboBoxAddPlayerWhere->GetSelectedIndex() == 0)
	{
		UAscMapKitEditorToolsHelper::ShowErrorMessage(TEXT("Please select where to add the player start(s)!"));
		return;
	}

	const auto Count = FCString::Atoi(*ComboBoxAddPlayerCount->GetSelectedOption());
	const auto Where = ComboBoxAddPlayerWhere->GetSelectedOption();

	auto SpawnLocation = FVector::ZeroVector;

	if (Where == TEXT("Selected"))
	{
		const auto bFoundSelectedActor = UAscMapKitEditorToolsHelper::GetEditorFirstSelectedActor(SpawnLocation);

		if (!bFoundSelectedActor)
			UAscMapKitEditorToolsHelper::ShowWarnMessage(TEXT("Nothing was selected in the editor. Using spawn location (0, 0, 0)."));
	}

	const TSubclassOf<AActor> PlayerStartActorClass = AAscMapKitPlayerStart::StaticClass();

	const FString PlayerStartNamePrefix = TEXT("PlayerStart");

	const auto PlayerStartNameSequence = UAscMapKitEditorToolsHelper::GetEditorNextActorSequence(PlayerStartActorClass, PlayerStartNamePrefix);

	const auto TransactionContext = FString::Printf(TEXT("%s::%hc"), *GetClass()->GetName(), *__FUNCTION__);

	UKismetSystemLibrary::BeginTransaction(TransactionContext, FText::FromString(TEXT("Add Player Start(s)")), nullptr);

	GEditor->SelectNone(true, true, false);

	for (auto i = 0; i < Count; i++)
	{
		auto bPlayerStartNameAlreadyExists = false;

		FString OutActorName = TEXT("");
		FString OutActorDefaultName = TEXT("");

		const auto AscMapKitPlayerStartActorSpawned = UAscMapKitEditorToolsHelper::SpawnInEditor(
			PlayerStartActorClass,
			FTransform(SpawnLocation),
			PlayerStartNamePrefix,
			PlayerStartNameSequence + i,
			bPlayerStartNameAlreadyExists,
			OutActorName,
			OutActorDefaultName
		);

		if (bPlayerStartNameAlreadyExists)
			UAscMapKitEditorToolsHelper::ShowWarnMessage(FString::Printf(TEXT("Player start '%s' already exists (name conflict?). Using a default name instead (sorry): %s"), *OutActorName, *OutActorDefaultName));

		if (AscMapKitPlayerStartActorSpawned && AscMapKitPlayerStartActorSpawned->IsA(PlayerStartActorClass))
		{
			const auto AscMapKitPlayerStartActor = Cast<AAscMapKitPlayerStart>(AscMapKitPlayerStartActorSpawned);

			if (AscMapKitPlayerStartActor)
			{
				AscMapKitPlayerStartActor->SetFolderPath(FName("PlayerStarts"));

				GEditor->SelectActor(AscMapKitPlayerStartActor, true, true);

				UKismetSystemLibrary::TransactObject(AscMapKitPlayerStartActor);

				UAscMapKitEditorToolsHelper::ShowInfoMessage(FString::Printf(TEXT("Created player start: %s"), *AscMapKitPlayerStartActor->GetHumanReadableName()));
			}
		}
	}

	GEditor->NoteSelectionChange();

	UKismetSystemLibrary::EndTransaction();
}

void UAscMapKitEditorToolsUtilityWidget::BtnSubTitleCreatePowerupOnClick()
{
	ToggleSection(TEXT("Powerup"), TxtSubTitleCreatePowerup, SectionPanelPowerup);
}

void UAscMapKitEditorToolsUtilityWidget::BtnAddPowerupOnClick()
{
	if (ComboBoxAddPowerupType->GetSelectedIndex() == 0)
	{
		UAscMapKitEditorToolsHelper::ShowErrorMessage(TEXT("Please select a powerup type!"));
		return;
	}

	if (ComboBoxAddPowerupCount->GetSelectedIndex() == 0)
	{
		UAscMapKitEditorToolsHelper::ShowErrorMessage(TEXT("Please select how many powerup(s) to add!"));
		return;
	}

	if (ComboBoxAddPowerupWhere->GetSelectedIndex() == 0)
	{
		UAscMapKitEditorToolsHelper::ShowErrorMessage(TEXT("Please select where to add the powerup(s)!"));
		return;
	}

	const auto PowerupTypeAsFString = ComboBoxAddPowerupType->GetSelectedOption();
	const auto Count = FCString::Atoi(*ComboBoxAddPowerupCount->GetSelectedOption());
	const auto Where = ComboBoxAddPowerupWhere->GetSelectedOption();

	const TSubclassOf<AActor> PowerupActorClass = AAscMapKitPowerupActor::StaticClass();

	auto bFoundPowerupType = false;
	auto PowerupType = EAscMapKitPowerupTypeEnum::None;

	for (const TPair<EAscMapKitPowerupTypeEnum, FString> &Pair : PowerupTypeMap)
	{
		if (Pair.Value == PowerupTypeAsFString)
		{
			bFoundPowerupType = true;
			PowerupType = Pair.Key;
			break;
		}
	}

	if (!bFoundPowerupType)
	{
		UAscMapKitEditorToolsHelper::ShowErrorMessage(FString::Printf(TEXT("Developer error (contact Ascentroid support)! PowerupTypeMap does not contain: %s"), *PowerupTypeAsFString));
		return;
	}

	auto SpawnLocation = FVector::ZeroVector;

	if (Where == TEXT("Selected"))
	{
		const auto bFoundSelectedActor = UAscMapKitEditorToolsHelper::GetEditorFirstSelectedActor(SpawnLocation);

		if (!bFoundSelectedActor)
			UAscMapKitEditorToolsHelper::ShowWarnMessage(TEXT("Nothing was selected in the editor. Using spawn location (0, 0, 0)."));
	}

	const auto PowerupNamePrefix = UAscMapKitEditorToolsPowerupHelper::GetNamePrefix(PowerupType, ChkBoxAddPowerupIncludeDefaultNames->IsChecked(), TEXT("Powerup_Unknown"));

	if (PowerupType == EAscMapKitPowerupTypeEnum::None)
	{
		UAscMapKitEditorToolsHelper::ShowErrorMessage(FString::Printf(TEXT("Developer error (contact Ascentroid support)! PowerupTypeMap resolved to 'None': %s"), *PowerupTypeAsFString));
		return;
	}

	const auto PowerupTypeNameSequence = UAscMapKitEditorToolsHelper::GetEditorNextActorSequence(PowerupActorClass, PowerupNamePrefix);

	const auto TransactionContext = FString::Printf(TEXT("%s::%hc"), *GetClass()->GetName(), *__FUNCTION__);

	UKismetSystemLibrary::BeginTransaction(TransactionContext, FText::FromString(TEXT("Add Powerup(s)")), nullptr);

	GEditor->SelectNone(true, true, false);

	for (auto i = 0; i < Count; i++)
	{
		auto bPowerupNameAlreadyExists = false;

		FString OutActorName = TEXT("");
		FString OutActorDefaultName = TEXT("");

		const auto AscMapKitPowerupActorSpawned = UAscMapKitEditorToolsHelper::SpawnInEditor(
			PowerupActorClass,
			FTransform(SpawnLocation),
			PowerupNamePrefix,
			PowerupTypeNameSequence + i,
			bPowerupNameAlreadyExists,
			OutActorName,
			OutActorDefaultName
		);

		if (bPowerupNameAlreadyExists)
			UAscMapKitEditorToolsHelper::ShowWarnMessage(FString::Printf(TEXT("Powerup '%s' already exists (name conflict?). Using a default name instead (sorry): %s"), *OutActorName, *OutActorDefaultName));

		if (AscMapKitPowerupActorSpawned && AscMapKitPowerupActorSpawned->IsA(PowerupActorClass))
		{
			const auto AscMapKitPowerupActor = Cast<AAscMapKitPowerupActor>(AscMapKitPowerupActorSpawned);

			if (AscMapKitPowerupActor)
			{
				AscMapKitPowerupActor->MapKit.PowerupType = PowerupType;
				AscMapKitPowerupActor->BillboardComponent->EditorUpdatePowerupType(AscMapKitPowerupActor->MapKit);
				AscMapKitPowerupActor->SetFolderPath(FName("Powerups"));

				GEditor->SelectActor(AscMapKitPowerupActor, true, true);

				UKismetSystemLibrary::TransactObject(AscMapKitPowerupActor);

				UAscMapKitEditorToolsHelper::ShowInfoMessage(FString::Printf(TEXT("Created powerup: %s"), *AscMapKitPowerupActor->GetHumanReadableName()));
			}
		}
	}

	GEditor->NoteSelectionChange();

	UKismetSystemLibrary::EndTransaction();
}

void UAscMapKitEditorToolsUtilityWidget::BtnAddPowerupsDefaultsOnClick()
{
	if (ComboBoxAddPowerupDefaultsWhere->GetSelectedIndex() == 0)
	{
		UAscMapKitEditorToolsHelper::ShowErrorMessage(TEXT("Please select where to add the powerups!"));
		return;
	}

	const auto Where = ComboBoxAddPowerupDefaultsWhere->GetSelectedOption();

	auto SpawnLocation = FVector::ZeroVector;

	if (Where == TEXT("Selected"))
	{
		const auto bFoundSelectedActor = UAscMapKitEditorToolsHelper::GetEditorFirstSelectedActor(SpawnLocation);

		if (!bFoundSelectedActor)
			UAscMapKitEditorToolsHelper::ShowWarnMessage(TEXT("Nothing was selected in the editor. Using spawn location (0, 0, 0)."));
	}

	const TSubclassOf<AActor> PowerupActorClass = AAscMapKitPowerupActor::StaticClass();
	
	GEditor->SelectNone(true, true, false);

	const auto TransactionContext = FString::Printf(TEXT("%s::%hc"), *GetClass()->GetName(), *__FUNCTION__);

	UKismetSystemLibrary::BeginTransaction(TransactionContext, FText::FromString(TEXT("Add Default Powerups")), nullptr);

	for (const auto &PowerupDefault : PowerupDefaultCounts)
	{
		const auto PowerupType = PowerupDefault.Key;
		const auto Count = PowerupDefault.Value;

		const auto PowerupNamePrefix = UAscMapKitEditorToolsPowerupHelper::GetNamePrefix(PowerupType, ChkBoxAddDefaultPowerupIncludeDefaultNames->IsChecked(), TEXT("Powerup_Unknown"));

		if (PowerupType == EAscMapKitPowerupTypeEnum::None)
		{
			UAscMapKitEditorToolsHelper::ShowErrorMessage(TEXT("Developer error (contact Ascentroid support)! PowerupDefaultCounts resolved to 'None'."));
			return;
		}

		const auto PowerupTypeNameSequence = UAscMapKitEditorToolsHelper::GetEditorNextActorSequence(PowerupActorClass, PowerupNamePrefix);

		for (auto i = 0; i < Count; i++)
		{
			auto bPowerupNameAlreadyExists = false;
		
			FString OutActorName = TEXT("");
			FString OutActorDefaultName = TEXT("");

			const auto AscMapKitPowerupActorSpawned = UAscMapKitEditorToolsHelper::SpawnInEditor(
				PowerupActorClass,
				FTransform(SpawnLocation),
				PowerupNamePrefix,
				PowerupTypeNameSequence + i,
				bPowerupNameAlreadyExists,
				OutActorName,
				OutActorDefaultName
			);

			if (bPowerupNameAlreadyExists)
				UAscMapKitEditorToolsHelper::ShowWarnMessage(FString::Printf(TEXT("Powerup '%s' already exists (name conflict?). Using a default name instead (sorry): %s"), *OutActorName, *OutActorDefaultName));

			if (AscMapKitPowerupActorSpawned && AscMapKitPowerupActorSpawned->IsA(PowerupActorClass))
			{
				const auto AscMapKitPowerupActor = Cast<AAscMapKitPowerupActor>(AscMapKitPowerupActorSpawned);

				if (AscMapKitPowerupActor)
				{
					AscMapKitPowerupActor->MapKit.PowerupType = PowerupType;
					AscMapKitPowerupActor->BillboardComponent->EditorUpdatePowerupType(AscMapKitPowerupActor->MapKit);
					AscMapKitPowerupActor->SetFolderPath(FName("Powerups"));

					GEditor->SelectActor(AscMapKitPowerupActor, true, true);

					UKismetSystemLibrary::TransactObject(AscMapKitPowerupActor);

					UAscMapKitEditorToolsHelper::ShowInfoMessage(FString::Printf(TEXT("Created powerup: %s"), *AscMapKitPowerupActor->GetHumanReadableName()));
				}
			}
		}
	}

	GEditor->NoteSelectionChange();

	UKismetSystemLibrary::EndTransaction();
}

void UAscMapKitEditorToolsUtilityWidget::BtnSubTitleCreateTriggerOnClick()
{
	ToggleSection(TEXT("Trigger"), TxtSubTitleCreateTrigger, SectionPanelTrigger);
}

void UAscMapKitEditorToolsUtilityWidget::BtnAddTriggerOnClick()
{
	if (ComboBoxAddTriggerType->GetSelectedIndex() == 0)
	{
		UAscMapKitEditorToolsHelper::ShowErrorMessage(TEXT("Please select a trigger type!"));
		return;
	}

	if (ComboBoxAddTriggerCount->GetSelectedIndex() == 0)
	{
		UAscMapKitEditorToolsHelper::ShowErrorMessage(TEXT("Please select how many trigger(s) to add!"));
		return;
	}

	if (ComboBoxAddTriggerWhere->GetSelectedIndex() == 0)
	{
		UAscMapKitEditorToolsHelper::ShowErrorMessage(TEXT("Please select where to add the trigger(s)!"));
		return;
	}

	const auto TriggerTypeAsFString = ComboBoxAddTriggerType->GetSelectedOption();
	const auto TriggerColorTypeAsFString = ComboBoxAddTriggerColor->GetSelectedOption();
	const auto Count = FCString::Atoi(*ComboBoxAddTriggerCount->GetSelectedOption());
	const auto Where = ComboBoxAddTriggerWhere->GetSelectedOption();

	const TSubclassOf<AActor> TriggerActorClass = AAscMapKitTriggerActor::StaticClass();

	auto bFoundTriggerType = false;
	auto TriggerType = EAscMapKitTriggerTypeEnum::None;

	for (const TPair<EAscMapKitTriggerTypeEnum, FString> &Pair : TriggerTypeMap)
	{
		if (Pair.Value == TriggerTypeAsFString)
		{
			bFoundTriggerType = true;
			TriggerType = Pair.Key;
			break;
		}
	}

	if (!bFoundTriggerType)
	{
		UAscMapKitEditorToolsHelper::ShowErrorMessage(FString::Printf(TEXT("Developer error (contact Ascentroid support)! TriggerTypeMap does not contain: %s"), *TriggerTypeAsFString));
		return;
	}

	auto bFoundTriggerColorType = false;
	auto TriggerColorType = EAscMapKitMaterialEmitColorTypeEnum::None;

	for (const TPair<EAscMapKitMaterialEmitColorTypeEnum, FString> &Pair : MaterialEmitColorTypeMap)
	{
		if (Pair.Value == TriggerColorTypeAsFString)
		{
			bFoundTriggerColorType = true;
			TriggerColorType = Pair.Key;
			break;
		}
	}

	if (!bFoundTriggerColorType)
	{
		UAscMapKitEditorToolsHelper::ShowErrorMessage(FString::Printf(TEXT("Developer error (contact Ascentroid support)! TriggerColorTypeMap does not contain: %s"), *TriggerColorTypeAsFString));
		return;
	}

	if (TriggerColorType == EAscMapKitMaterialEmitColorTypeEnum::None)
		TriggerColorType = EAscMapKitMaterialEmitColorTypeEnum::Green;

	auto SpawnLocation = FVector::ZeroVector;

	if (Where == TEXT("Selected"))
	{
		const auto bFoundSelectedActor = UAscMapKitEditorToolsHelper::GetEditorFirstSelectedActor(SpawnLocation);

		if (!bFoundSelectedActor)
			UAscMapKitEditorToolsHelper::ShowWarnMessage(TEXT("Nothing was selected in the editor. Using spawn location (0, 0, 0)."));
	}

	if (TriggerType == EAscMapKitTriggerTypeEnum::None)
	{
		UAscMapKitEditorToolsHelper::ShowErrorMessage(FString::Printf(TEXT("Developer error (contact Ascentroid support)! TriggerTypeMap resolved to 'None': %s"), *TriggerTypeAsFString));
		return;
	}

	const auto TriggerNamePrefix = FString::Printf(TEXT("Trigger_%s"), *TriggerTypeAsFString.Replace(TEXT(" "), TEXT("_")));
	const auto TriggerTypeNameSequence = UAscMapKitEditorToolsHelper::GetEditorNextActorSequence(TriggerActorClass, TriggerNamePrefix);

	const auto TransactionContext = FString::Printf(TEXT("%s::%hc"), *GetClass()->GetName(), *__FUNCTION__);

	UKismetSystemLibrary::BeginTransaction(TransactionContext, FText::FromString(TEXT("Add Trigger(s)")), nullptr);

	GEditor->SelectNone(true, true, false);

	for (auto i = 0; i < Count; i++)
	{
		auto UseTriggerId = 0;

		TArray<AActor *> FoundTriggers;
		UGameplayStatics::GetAllActorsOfClass(UAscMapKitEditorToolsHelper::GetEditorWorld(), TriggerActorClass, FoundTriggers);

		if (FoundTriggers.Num() > 0)
		{
			TArray<int32> FoundTriggerIds;

			for (const auto &FoundTrigger : FoundTriggers)
			{
				if (FoundTrigger && FoundTrigger->IsA(TriggerActorClass))
				{
					const auto Trigger = Cast<AAscMapKitTriggerActor>(FoundTrigger);

					if (Trigger)
						FoundTriggerIds.AddUnique(FCString::Atoi(*Trigger->MapKit.Id));
				}
			}

			if (FoundTriggerIds.Num() > 0)
				UseTriggerId = *Algo::MaxElement(FoundTriggerIds);
		}
		
		auto bTriggerNameAlreadyExists = false;

		FString OutActorName = TEXT("");
		FString OutActorDefaultName = TEXT("");

		const auto AscMapKitTriggerActorSpawned = UAscMapKitEditorToolsHelper::SpawnInEditor(
			TriggerActorClass,
			FTransform(SpawnLocation),
			TriggerNamePrefix,
			TriggerTypeNameSequence + i,
			bTriggerNameAlreadyExists,
			OutActorName,
			OutActorDefaultName
		);

		if (bTriggerNameAlreadyExists)
			UAscMapKitEditorToolsHelper::ShowWarnMessage(FString::Printf(TEXT("Trigger '%s' already exists (name conflict?). Using a default name instead (sorry): %s"), *OutActorName, *OutActorDefaultName));

		if (AscMapKitTriggerActorSpawned && AscMapKitTriggerActorSpawned->IsA(TriggerActorClass))
		{
			const auto AscMapKitTriggerActor = Cast<AAscMapKitTriggerActor>(AscMapKitTriggerActorSpawned);

			if (AscMapKitTriggerActor)
			{
				AscMapKitTriggerActor->MapKit.Id = FString::Printf(TEXT("%0*d"), 3, UseTriggerId + 1);
				AscMapKitTriggerActor->MapKit.TriggerType = TriggerType;

				// todo: triggers don't have emit materials yet
				// if (TriggerColorType != EAscMapKitMaterialEmitColorTypeEnum::None &&
				// 	MaterialEmitColorTypeMaterialMap.Contains(TriggerColorType) &&
				// 	TriggerTypeStaticMeshMaterialEmitColorOverrideMap.Contains(TriggerType))
				// {
				// 	FAscMapKitTriggerPropertiesCustomMaterialStruct OverrideMaterialStruct;
				// 	OverrideMaterialStruct.OverrideMaterial = true;
				// 	OverrideMaterialStruct.MaterialIndex = TriggerTypeStaticMeshMaterialEmitColorOverrideMap[TriggerType];
				// 	OverrideMaterialStruct.Material = MaterialEmitColorTypeMaterialMap[TriggerColorType];
				//
				// 	AscMapKitTriggerActor->MapKit.Custom.OverrideMaterials.Add(OverrideMaterialStruct);
				//
				// 	AscMapKitTriggerActor->StaticMeshComponent->SetMaterial(OverrideMaterialStruct.MaterialIndex, OverrideMaterialStruct.Material);
				// }

				AscMapKitTriggerActor->EditorUpdateTriggerType(AscMapKitTriggerActor->MapKit.TriggerType);
				AscMapKitTriggerActor->SetFolderPath(FName("Triggers"));

				GEditor->SelectActor(AscMapKitTriggerActor, true, true);

				UKismetSystemLibrary::TransactObject(AscMapKitTriggerActor);

				UAscMapKitEditorToolsHelper::ShowInfoMessage(FString::Printf(TEXT("Created trigger: %s"), *AscMapKitTriggerActor->GetHumanReadableName()));
			}
		}
	}

	GEditor->NoteSelectionChange();

	UKismetSystemLibrary::EndTransaction();
}

void UAscMapKitEditorToolsUtilityWidget::BtnSubTitleGenerateEffectsOnClick()
{
	ToggleSection(TEXT("Effects"), TxtSubTitleGenerateEffects, SectionPanelGenerateEffects);
}

void UAscMapKitEditorToolsUtilityWidget::BtnGenerateEffectsOnClick()
{
	const auto TransactionContext = FString::Printf(TEXT("%s::%hc"), *GetClass()->GetName(), *__FUNCTION__);

	UKismetSystemLibrary::BeginTransaction(TransactionContext, FText::FromString(TEXT("Generate Effects")), nullptr);

	if (ChkBoxGenerateEffectsFog1->IsChecked())
	{
		const auto AtmosphericFogClass = AAtmosphericFog::StaticClass();
		
		// todo: @UE5: AAtmosphericFog is deprecated, switch to ASkyAtmosphere, even though is sucks because we almost never use directional lights
		TArray<AActor *> FoundAtmosphericFogs;
		UGameplayStatics::GetAllActorsOfClass(UAscMapKitEditorToolsHelper::GetEditorWorld(), AtmosphericFogClass, FoundAtmosphericFogs);

		if (FoundAtmosphericFogs.Num() > 0)
			UAscMapKitEditorToolsHelper::ShowWarnMessage(TEXT("Atmospheric fog already exists. Delete existing actor(s) until none are left, and then this generator will create one."));
		else
		{
			const auto FogActorName = TEXT("AscMapKitDefaultAtmosphericFog");

			auto bFogNameAlreadyExists = false;

			FString OutFogActorName = TEXT("");
			FString OutFogActorDefaultName = TEXT("");

			const auto AscMapKitFogActorSpawned = UAscMapKitEditorToolsHelper::SpawnInEditor(
				AtmosphericFogClass,
				FTransform(FVector::ZeroVector),
				FogActorName,
				-1,
				bFogNameAlreadyExists,
				OutFogActorName,
				OutFogActorDefaultName
			);

			if (bFogNameAlreadyExists)
				UAscMapKitEditorToolsHelper::ShowWarnMessage(FString::Printf(TEXT("Atmospheric fog '%s' already exists (name conflict?). Using a default name instead (sorry): %s"), *OutFogActorName, *OutFogActorDefaultName));

			if (AscMapKitFogActorSpawned && AscMapKitFogActorSpawned->IsA(AtmosphericFogClass))
			{
				const auto AscMapKitFogActor = Cast<AAtmosphericFog>(AscMapKitFogActorSpawned);

				if (AscMapKitFogActor && AscMapKitFogActor->GetAtmosphericFogComponent())
				{
					AscMapKitFogActor->GetAtmosphericFogComponent()->SetMobility(EComponentMobility::Movable);
					AscMapKitFogActor->GetAtmosphericFogComponent()->SunMultiplier = 0.01f;
					AscMapKitFogActor->GetAtmosphericFogComponent()->FogMultiplier = 6.f;
					AscMapKitFogActor->GetAtmosphericFogComponent()->DensityMultiplier = 6.f;
					AscMapKitFogActor->GetAtmosphericFogComponent()->DistanceScale = 20.f;
					AscMapKitFogActor->GetAtmosphericFogComponent()->GroundOffset = -20000.f;
					AscMapKitFogActor->GetAtmosphericFogComponent()->StartDistance = 2000.f;
					AscMapKitFogActor->GetAtmosphericFogComponent()->SunDiscScale = 2.f;
					AscMapKitFogActor->GetAtmosphericFogComponent()->DefaultBrightness = 300.f;

					AscMapKitFogActor->SetFolderPath(FName("Effects"));

					AscMapKitFogActor->GetAtmosphericFogComponent()->Modify();
					AscMapKitFogActor->Modify();

					AscMapKitFogActor->GetAtmosphericFogComponent()->PostEditChange();
					AscMapKitFogActor->PostEditChange();

					AscMapKitFogActor->MarkPackageDirty();
					
					UKismetSystemLibrary::TransactObject(AscMapKitFogActor);

					UAscMapKitEditorToolsHelper::ShowInfoMessage(FString::Printf(TEXT("Created effect: %s"), *AscMapKitFogActor->GetHumanReadableName()));
				}
			}
		}
	}

	if (ChkBoxGenerateEffectsFog2->IsChecked())
	{
		const auto ExponentialHeightFogClass = AExponentialHeightFog::StaticClass();

		TArray<AActor *> FoundExponentialHeightFogs;
		UGameplayStatics::GetAllActorsOfClass(UAscMapKitEditorToolsHelper::GetEditorWorld(), ExponentialHeightFogClass, FoundExponentialHeightFogs);

		if (FoundExponentialHeightFogs.Num() > 0)
			UAscMapKitEditorToolsHelper::ShowWarnMessage(TEXT("Exponential height fog already exists. Delete existing actor(s) until none are left, and then this generator will create one."));
		else
		{
			const auto FogActorName = TEXT("AscMapKitDefaultExpontentialHeightFog");

			auto bFogNameAlreadyExists = false;

			FString OutFogActorName = TEXT("");
			FString OutFogActorDefaultName = TEXT("");

			const auto AscMapKitFogActorSpawned = UAscMapKitEditorToolsHelper::SpawnInEditor(
				ExponentialHeightFogClass,
				FTransform(FVector::ZeroVector),
				FogActorName,
				-1,
				bFogNameAlreadyExists,
				OutFogActorName,
				OutFogActorDefaultName
			);

			if (bFogNameAlreadyExists)
				UAscMapKitEditorToolsHelper::ShowWarnMessage(FString::Printf(TEXT("Exponential height fog '%s' already exists (name conflict?). Using a default name instead (sorry): %s"), *OutFogActorName, *OutFogActorDefaultName));

			if (AscMapKitFogActorSpawned && AscMapKitFogActorSpawned->IsA(ExponentialHeightFogClass))
			{
				const auto AscMapKitFogActor = Cast<AExponentialHeightFog>(AscMapKitFogActorSpawned);

				if (AscMapKitFogActor && AscMapKitFogActor->GetComponent())
				{
					AscMapKitFogActor->GetComponent()->SetMobility(EComponentMobility::Movable);
					AscMapKitFogActor->GetComponent()->FogDensity = 0.006f;
					AscMapKitFogActor->GetComponent()->FogHeightFalloff = 0.f;
					AscMapKitFogActor->GetComponent()->FogInscatteringColor = FLinearColor::White;
					AscMapKitFogActor->GetComponent()->FogMaxOpacity = 0.01f;
					AscMapKitFogActor->GetComponent()->bEnableVolumetricFog = true;
					AscMapKitFogActor->GetComponent()->VolumetricFogDistance = 200000.f;

					AscMapKitFogActor->SetFolderPath(FName("Effects"));

					AscMapKitFogActor->GetComponent()->Modify();
					AscMapKitFogActor->Modify();

					AscMapKitFogActor->GetComponent()->PostEditChange();
					AscMapKitFogActor->PostEditChange();

					AscMapKitFogActor->MarkPackageDirty();

					UKismetSystemLibrary::TransactObject(AscMapKitFogActor);

					UAscMapKitEditorToolsHelper::ShowInfoMessage(FString::Printf(TEXT("Created effect: %s"), *AscMapKitFogActor->GetHumanReadableName()));
				}
			}
		}
	}

	if (ChkBoxGenerateEffectsLightmassVolume->IsChecked())
	{
		const auto LightmassImportanceVolumeClass = ALightmassImportanceVolume::StaticClass();

		TArray<AActor *> FoundLightmassImportanceVolumes;
		UGameplayStatics::GetAllActorsOfClass(UAscMapKitEditorToolsHelper::GetEditorWorld(), LightmassImportanceVolumeClass, FoundLightmassImportanceVolumes);

		if (FoundLightmassImportanceVolumes.Num() > 0)
			UAscMapKitEditorToolsHelper::ShowWarnMessage(TEXT("Lightmass importance volume already exists. Delete existing actor(s) until none are left, and then this generator will create one."));
		else
		{
			const auto LightmassActorName = TEXT("AscMapKitDefaultLightmassImportanceVolume");

			auto bLightmassNameAlreadyExists = false;

			FString OutLightmassActorName = TEXT("");
			FString OutLightmassActorDefaultName = TEXT("");

			const auto AscMapKitLightmassActorSpawned = UAscMapKitEditorToolsHelper::SpawnInEditor(
				LightmassImportanceVolumeClass,
				FTransform(FVector::ZeroVector),
				LightmassActorName,
				-1,
				bLightmassNameAlreadyExists,
				OutLightmassActorName,
				OutLightmassActorDefaultName
			);

			if (bLightmassNameAlreadyExists)
				UAscMapKitEditorToolsHelper::ShowWarnMessage(FString::Printf(TEXT("Lightmass importance volume '%s' already exists (name conflict?). Using a default name instead (sorry): %s"), *OutLightmassActorName, *OutLightmassActorDefaultName));

			if (AscMapKitLightmassActorSpawned)
				AscMapKitLightmassActorSpawned->SetFolderPath(FName("Effects"));
			
			UKismetSystemLibrary::TransactObject(AscMapKitLightmassActorSpawned);

			UAscMapKitEditorToolsHelper::ShowInfoMessage(FString::Printf(TEXT("Created effect: %s"), *AscMapKitLightmassActorSpawned->GetHumanReadableName()));
		}
	}

	if (ChkBoxGenerateEffectsDefaultPostProcess->IsChecked())
	{
		const auto PostProcessClass = AAscMapKitDefaultPostProcessActor::StaticClass();

		TArray<AActor *> FoundPostProcesss;
		UGameplayStatics::GetAllActorsOfClass(UAscMapKitEditorToolsHelper::GetEditorWorld(), PostProcessClass, FoundPostProcesss);

		if (FoundPostProcesss.Num() > 0)
			UAscMapKitEditorToolsHelper::ShowWarnMessage(TEXT("Default post process already exists. Delete existing actor(s) until none are left, and then this generator will create one."));
		else
		{
			const auto PostProcessActorName = TEXT("AscMapKitDefaultPostProcess");

			auto bPostProcessNameAlreadyExists = false;

			FString OutPostProcessActorName = TEXT("");
			FString OutPostProcessActorDefaultName = TEXT("");

			const auto AscMapKitPostProcessActorSpawned = UAscMapKitEditorToolsHelper::SpawnInEditor(
				PostProcessClass,
				FTransform(FVector::ZeroVector),
				PostProcessActorName,
				-1,
				bPostProcessNameAlreadyExists,
				OutPostProcessActorName,
				OutPostProcessActorDefaultName
			);

			if (bPostProcessNameAlreadyExists)
				UAscMapKitEditorToolsHelper::ShowWarnMessage(FString::Printf(TEXT("Default post process '%s' already exists (name conflict?). Using a default name instead (sorry): %s"), *OutPostProcessActorName, *OutPostProcessActorDefaultName));

			if (AscMapKitPostProcessActorSpawned)
			{
				AscMapKitPostProcessActorSpawned->SetFolderPath(FName("Effects"));
				
				UKismetSystemLibrary::TransactObject(AscMapKitPostProcessActorSpawned);

				UAscMapKitEditorToolsHelper::ShowInfoMessage(FString::Printf(TEXT("Created effect: %s"), *AscMapKitPostProcessActorSpawned->GetHumanReadableName()));
			}
		}
	}

	if (ChkBoxGenerateEffectsDefaultNavmap->IsChecked())
	{
		const auto NavmapClass = AAscMapKitNavmapActor::StaticClass();

		TArray<AActor *> FoundNavmaps;
		UGameplayStatics::GetAllActorsOfClass(UAscMapKitEditorToolsHelper::GetEditorWorld(), NavmapClass, FoundNavmaps);

		if (FoundNavmaps.Num() > 0)
			UAscMapKitEditorToolsHelper::ShowWarnMessage(TEXT("Default navmap already exists. Delete existing actor(s) until none are left, and then this generator will create one."));
		else
		{
			const auto NavmapActorName = TEXT("AscMapKitDefaultNavmap");

			auto bNavmapNameAlreadyExists = false;

			FString OutNavmapActorName = TEXT("");
			FString OutNavmapActorDefaultName = TEXT("");

			const auto AscMapKitNavmapActorSpawned = UAscMapKitEditorToolsHelper::SpawnInEditor(
				NavmapClass,
				FTransform(FVector::ZeroVector),
				NavmapActorName,
				-1,
				bNavmapNameAlreadyExists,
				OutNavmapActorName,
				OutNavmapActorDefaultName
			);

			if (bNavmapNameAlreadyExists)
				UAscMapKitEditorToolsHelper::ShowWarnMessage(FString::Printf(TEXT("Default navmap '%s' already exists (name conflict?). Using a default name instead (sorry): %s"), *OutNavmapActorName, *OutNavmapActorDefaultName));

			if (AscMapKitNavmapActorSpawned && AscMapKitNavmapActorSpawned->IsA(NavmapClass))
			{
				const auto AscMapKitNavmapActor = Cast<AAscMapKitNavmapActor>(AscMapKitNavmapActorSpawned);

				if (AscMapKitNavmapActor && AscMapKitNavmapActor->Box)
				{
					AscMapKitNavmapActor->Box->SetBoxExtent(FVector(10000.f, 10000.f, 10000.f));
					AscMapKitNavmapActor->SetFolderPath(FName("Effects"));

					UKismetSystemLibrary::TransactObject(AscMapKitNavmapActor);

					UAscMapKitEditorToolsHelper::ShowInfoMessage(FString::Printf(TEXT("Created effect: %s"), *AscMapKitNavmapActor->GetHumanReadableName()));

					BtnGenerateNavmapBoundsOnClick();
				}
			}
		}
	}

	if (ChkBoxGenerateEffectsGlobalLights->IsChecked())
	{
		TSubclassOf<AActor> LightActorClass = APointLight::StaticClass();
		FString LightNamePrefix = TEXT("PointLight_Global");
		
		const auto LightNameSequence = UAscMapKitEditorToolsHelper::GetEditorNextActorSequence(LightActorClass, LightNamePrefix);
		
		for (auto i = 0; i < 6; i++)
		{
			auto bLightNameAlreadyExists = false;

			FString OutActorName = TEXT("");
			FString OutActorDefaultName = TEXT("");

			const auto AscMapKitLightActorSpawned = UAscMapKitEditorToolsHelper::SpawnInEditor(
				LightActorClass,
				FTransform(FVector::ZeroVector),
				LightNamePrefix,
				LightNameSequence + i,
				bLightNameAlreadyExists,
				OutActorName,
				OutActorDefaultName
			);

			if (bLightNameAlreadyExists)
				UAscMapKitEditorToolsHelper::ShowWarnMessage(FString::Printf(TEXT("Light '%s' already exists (name conflict?). Using a default name instead (sorry): %s"), *OutActorName, *OutActorDefaultName));

			if (AscMapKitLightActorSpawned)
			{
				AscMapKitLightActorSpawned->SetFolderPath(FName("Lights/Global"));

				if (AscMapKitLightActorSpawned->IsA(APointLight::StaticClass()))
				{
					const auto LightActor = Cast<APointLight>(AscMapKitLightActorSpawned);

					if (LightActor && LightActor->PointLightComponent)
					{
						UAscMapKitEditorToolsLightHelper::SetPointLightDefaults(
							LightActor,
							EAscMapKitMaterialEmitColorTypeEnum::White,
							0.1f
						);

						LightActor->PointLightComponent->AttenuationRadius = 1000000.f;
						LightActor->PointLightComponent->SourceRadius = 1000000.f;
						LightActor->PointLightComponent->SoftSourceRadius = 1000000.f;
						LightActor->PointLightComponent->IntensityUnits = ELightUnits::Unitless;
						LightActor->PointLightComponent->bUseInverseSquaredFalloff = false;
						LightActor->PointLightComponent->SpecularScale = 0.f;
						LightActor->PointLightComponent->CastShadows = false;
						LightActor->PointLightComponent->CastStaticShadows = false;
						LightActor->PointLightComponent->CastDynamicShadows = false;
						LightActor->PointLightComponent->bAffectTranslucentLighting = false;
						LightActor->PointLightComponent->bCastRaytracedShadow = false;
						LightActor->PointLightComponent->bAffectReflection = false;

						switch (i)
						{
							case 0:
								LightActor->SetActorLocation(FVector(-40000.f, 0.f, 0.f));
								break;
							case 1:
								LightActor->SetActorLocation(FVector(40000.f, 0.f, 0.f));
								break;
							case 2:
								LightActor->SetActorLocation(FVector(0.f, -40000.f, 0.f));
								break;
							case 3:
								LightActor->SetActorLocation(FVector(0.f, 40000.f, 0.f));
								break;
							case 4:
								LightActor->SetActorLocation(FVector(0.f, 0.f, -40000.f));
								break;
							case 5:
								LightActor->SetActorLocation(FVector(0.f, 0.f, 40000.f));
								break;
						}

						UKismetSystemLibrary::TransactObject(LightActor);

						UAscMapKitEditorToolsHelper::ShowInfoMessage(FString::Printf(TEXT("Created global light: %s"), *LightActor->GetHumanReadableName()));
					}
				}
			}
		}
	}

	UKismetSystemLibrary::EndTransaction();
}

void UAscMapKitEditorToolsUtilityWidget::BtnSubTitleGenerateNavmapBoundsOnClick()
{
	ToggleSection(TEXT("Navmap Bounds"), TxtSubTitleGenerateNavmapBounds, SectionPanelGenerateNavmapBounds);
}

void UAscMapKitEditorToolsUtilityWidget::BtnGenerateNavmapBoundsOnClick()
{
	const auto TransactionContext = FString::Printf(TEXT("%s::%hc"), *GetClass()->GetName(), *__FUNCTION__);

	UKismetSystemLibrary::BeginTransaction(TransactionContext, FText::FromString(TEXT("Generate Navmap Bounds")), nullptr);

	auto bFoundNavmap = false;
	auto bFoundLevel = false;

	AAscMapKitNavmapActor *NavmapActor = nullptr;
	FBox CombinedBox(EForceInit::ForceInitToZero);

	TArray<AActor *> FoundActors;
	UGameplayStatics::GetAllActorsOfClass(UAscMapKitEditorToolsHelper::GetEditorWorld(), AActor::StaticClass(), FoundActors);

	if (FoundActors.Num() > 0)
	{
		for (auto i = 0; i < FoundActors.Num(); i++)
		{
			const auto Actor = FoundActors[i];
			
			if (Actor == nullptr)
				continue;

			if (Actor->IsA(AAscMapKitNavmapActor::StaticClass()))
			{
				NavmapActor = Cast<AAscMapKitNavmapActor>(Actor);
				bFoundNavmap = true;
				break;
			}
		}

		if (NavmapActor)
		{
			for (auto i = 0; i < FoundActors.Num(); i++)
			{
				const auto Actor = FoundActors[i];
			
				if (Actor == nullptr)
					continue;

				if (!Actor->ActorHasTag(TEXT("Level")))
					continue;

				const auto ActorBounds = Actor->GetComponentsBoundingBox(true);

				CombinedBox += ActorBounds;

				bFoundLevel = true;
			}
		}
	}

	if (!bFoundLevel)
		UAscMapKitEditorToolsHelper::ShowErrorMessage(TEXT("A level actor could not be found. You need at least one actor in the world with the actor tag 'Level' (without quotes)."));

	if (bFoundNavmap && NavmapActor && NavmapActor->Box)
	{
		const auto NewCenter = CombinedBox.GetCenter();
		const auto NewExtent = CombinedBox.GetExtent() + NavmapBoundsPadding;

		if (NewExtent.Size() > 0.f)
		{
			// DrawDebugBox(UAscMapKitEditorToolsHelper::GetEditorWorld(), NewCenter, NewExtent, FColor::White, true, -1.f, 0, 50.f);
			NavmapActor->SetActorLocation(NewCenter);
			NavmapActor->SetActorScale3D(FVector(1.f, 1.f, 1.f));
			NavmapActor->Box->SetBoxExtent(NewExtent);

			NavmapActor->Box->Modify();
			NavmapActor->Modify();

			NavmapActor->Box->PostEditChange();
			NavmapActor->PostEditChange();
			
			NavmapActor->MarkPackageDirty();

			UKismetSystemLibrary::TransactObject(NavmapActor);

			UAscMapKitEditorToolsHelper::ShowInfoMessage(TEXT("The navmap actor bounds have been automatically generated (based on actors found in the world with the actor tag 'Level' (without quotes))."));
		}
	}
	else
		UAscMapKitEditorToolsHelper::ShowErrorMessage(TEXT("A navmap actor could not be found. You need to add one to the world/level."));

	UKismetSystemLibrary::EndTransaction();
}

void UAscMapKitEditorToolsUtilityWidget::BtnSubTitleGeneratePowerupRespawnsOnClick()
{
	ToggleSection(TEXT("Powerup Respawn Triggers"), TxtSubTitleGeneratePowerupRespawns, SectionPanelGeneratePowerupRespawns);
}

void UAscMapKitEditorToolsUtilityWidget::BtnGeneratePowerupRespawnsOnClick()
{
	UAscMapKitEditorToolsPowerupRespawnTriggerHelper::Generate(GetClass()->GetName(), __FUNCTION__, ChkBoxGeneratePowerupRespawnsDeleteExisting->IsChecked());
}

void UAscMapKitEditorToolsUtilityWidget::BtnSubTitleValidateOnClick()
{
	ToggleSection(TEXT("Validate"), TxtSubTitleValidate, SectionPanelValidate);
}

void UAscMapKitEditorToolsUtilityWidget::BtnRunValidateOnClick()
{
	TxtBoxOutputValidateErrors->TextStyle.ColorAndOpacity = FLinearColor(FColor::FromHex(TEXT("#FF3F3F")));
	TxtBoxOutputValidateWarnings->TextStyle.ColorAndOpacity = FLinearColor(FColor::FromHex(TEXT("#FFFF3F")));

	TxtBoxOutputValidateErrors->SetTextStyle(TxtBoxOutputValidateErrors->TextStyle);
	TxtBoxOutputValidateWarnings->SetTextStyle(TxtBoxOutputValidateWarnings->TextStyle);

	ClearOutput(TxtBoxOutputValidateErrors);
	ClearOutput(TxtBoxOutputValidateWarnings);

	auto bFoundErrors = false;
	auto bFoundWarnings = false;

	// Navmap
	auto bFoundNavmap = false;
	
	TArray<AActor *> FoundNavmaps;
	UGameplayStatics::GetAllActorsOfClass(UAscMapKitEditorToolsHelper::GetEditorWorld(), AAscMapKitNavmapActor::StaticClass(), FoundNavmaps);

	if (FoundNavmaps.Num() <= 0)
	{
		AppendOutput(ScrollBoxOutputValidateErrors, TxtBoxOutputValidateErrors, TEXT("• A default navmap actor is missing!"));
		bFoundErrors = true;
	}

	// Post Process
	TArray<AActor *> FoundPostProcesses;
	UGameplayStatics::GetAllActorsOfClass(UAscMapKitEditorToolsHelper::GetEditorWorld(), AAscMapKitDefaultPostProcessActor::StaticClass(), FoundPostProcesses);

	if (FoundPostProcesses.Num() <= 0)
	{
		AppendOutput(ScrollBoxOutputValidateErrors, TxtBoxOutputValidateErrors, TEXT("• A default post process actor is missing!"));
		bFoundErrors = true;
	}

	// Player Starts
	TArray<AActor *> FoundPlayerStarts;
	UGameplayStatics::GetAllActorsOfClass(UAscMapKitEditorToolsHelper::GetEditorWorld(), AAscMapKitPlayerStart::StaticClass(), FoundPlayerStarts);

	if (FoundPlayerStarts.Num() < 4)
	{
		AppendOutput(ScrollBoxOutputValidateErrors, TxtBoxOutputValidateErrors, TEXT("• A minimum of four (4) player start positions are required!"));
		bFoundErrors = true;
	}

	// Doors
	TArray<AActor *> FoundDoors;
	UGameplayStatics::GetAllActorsOfClass(UAscMapKitEditorToolsHelper::GetEditorWorld(), AAscMapKitDoorActor::StaticClass(), FoundDoors);

	if (FoundDoors.Num() > 0)
	{
		TArray<FString> DoorIds;

		for (const auto &DoorActor : FoundDoors)
		{
			if (DoorActor && DoorActor->IsA(AAscMapKitDoorActor::StaticClass()))
			{
				const auto Door = Cast<AAscMapKitDoorActor>(DoorActor);

				if (Door)
					DoorIds.AddUnique(Door->MapKit.Id.ToLower().TrimStartAndEnd());
			}
		}

		if (DoorIds.Num() != FoundDoors.Num())
		{
			AppendOutput(ScrollBoxOutputValidateErrors, TxtBoxOutputValidateErrors, TEXT("• Door IDs are not unique. Please check and fix door IDs!"));
			bFoundErrors = true;
		}
	}

	// Forcefields
	TArray<AActor *> FoundForcefields;
	UGameplayStatics::GetAllActorsOfClass(UAscMapKitEditorToolsHelper::GetEditorWorld(), AAscMapKitForcefieldActor::StaticClass(), FoundForcefields);

	if (FoundForcefields.Num() > 0)
	{
		TArray<FString> ForcefieldIds;

		for (const auto &ForcefieldActor : FoundForcefields)
		{
			if (ForcefieldActor && ForcefieldActor->IsA(AAscMapKitForcefieldActor::StaticClass()))
			{
				const auto Forcefield = Cast<AAscMapKitForcefieldActor>(ForcefieldActor);

				if (Forcefield)
					ForcefieldIds.AddUnique(Forcefield->MapKit.Id.ToLower().TrimStartAndEnd());
			}
		}

		if (ForcefieldIds.Num() != FoundForcefields.Num())
		{
			AppendOutput(ScrollBoxOutputValidateErrors, TxtBoxOutputValidateErrors, TEXT("• Forcefield IDs are not unique. Please check and fix forcefield IDs!"));
			bFoundErrors = true;
		}
	}

	// Triggers
	TArray<AActor *> FoundTriggers;
	UGameplayStatics::GetAllActorsOfClass(UAscMapKitEditorToolsHelper::GetEditorWorld(), AAscMapKitTriggerActor::StaticClass(), FoundTriggers);

	if (FoundTriggers.Num() > 0)
	{
		TArray<FString> TriggerIds;

		for (const auto &TriggerActor : FoundTriggers)
		{
			if (TriggerActor && TriggerActor->IsA(AAscMapKitTriggerActor::StaticClass()))
			{
				const auto Trigger = Cast<AAscMapKitTriggerActor>(TriggerActor);

				if (Trigger)
					TriggerIds.AddUnique(Trigger->MapKit.Id.ToLower().TrimStartAndEnd());
			}
		}

		if (TriggerIds.Num() != FoundTriggers.Num())
		{
			AppendOutput(ScrollBoxOutputValidateErrors, TxtBoxOutputValidateErrors, TEXT("• Trigger IDs are not unique. Please check and fix trigger IDs!"));
			bFoundErrors = true;
		}
	}

	// Atmospheric Fog
	// todo: @reminder: UE5
	TArray<AActor *> FoundFog1;
	UGameplayStatics::GetAllActorsOfClass(UAscMapKitEditorToolsHelper::GetEditorWorld(), AAtmosphericFog::StaticClass(), FoundFog1);

	if (FoundFog1.Num() <= 0)
	{
		AppendOutput(ScrollBoxOutputValidateWarnings, TxtBoxOutputValidateWarnings, TEXT("• Atmospheric Fog is missing!"));
		bFoundWarnings = true;
	}

	// Exponential Height Fog
	TArray<AActor *> FoundExponentialHeightFog;
	UGameplayStatics::GetAllActorsOfClass(UAscMapKitEditorToolsHelper::GetEditorWorld(), AExponentialHeightFog::StaticClass(), FoundExponentialHeightFog);

	if (FoundExponentialHeightFog.Num() <= 0)
	{
		AppendOutput(ScrollBoxOutputValidateWarnings, TxtBoxOutputValidateWarnings, TEXT("• Exponential Height Fog is missing!"));
		bFoundWarnings = true;
	}

	// Lightmass Importance Volume
	TArray<AActor *> FoundLightmassImportance;
	UGameplayStatics::GetAllActorsOfClass(UAscMapKitEditorToolsHelper::GetEditorWorld(), ALightmassImportanceVolume::StaticClass(), FoundLightmassImportance);

	if (FoundLightmassImportance.Num() <= 0)
	{
		AppendOutput(ScrollBoxOutputValidateWarnings, TxtBoxOutputValidateWarnings, TEXT("• Lightmass Importance Volume is missing!"));
		bFoundWarnings = true;
	}

	// Level Meshes
	TArray<AActor *> FoundActors;
	UGameplayStatics::GetAllActorsOfClass(UAscMapKitEditorToolsHelper::GetEditorWorld(), AActor::StaticClass(), FoundActors);

	if (FoundActors.Num() > 0)
	{
		auto bFoundLevel = false;

		AAscMapKitNavmapActor *NavmapActor = nullptr;
		FBox CombinedBox(EForceInit::ForceInitToZero);

		for (const auto &Actor : FoundActors)
		{
			if (Actor)
			{
				if (Actor->IsA(AAscMapKitNavmapActor::StaticClass()))
				{
					NavmapActor = Cast<AAscMapKitNavmapActor>(Actor);
					bFoundNavmap = true;
				}

				if (Actor->ActorHasTag(TEXT("Level")))
				{
					bFoundLevel = true;

					const auto ActorBounds = Actor->GetComponentsBoundingBox(true);

					CombinedBox += ActorBounds;
				}
			}
		}

		if (!bFoundLevel)
		{
			AppendOutput(ScrollBoxOutputValidateErrors, TxtBoxOutputValidateErrors, TEXT("• Level actors missing! No actor tag found!"));
			bFoundErrors = true;
		}
		else
		{
			if (bFoundNavmap && NavmapActor && NavmapActor->Box)
			{
				const auto NewCenter = CombinedBox.GetCenter();
				const auto NewExtent = CombinedBox.GetExtent() + NavmapBoundsPadding;
				const auto NewExtentSize = NewExtent.Size();

				const auto CurrentExtentCenter = NavmapActor->GetActorLocation();
				const auto CurrentExtentSize = NavmapActor->Box->GetScaledBoxExtent().Size();

				if (NewExtentSize != CurrentExtentSize || NewCenter != CurrentExtentCenter)
				{
					FString WarnMsg = TEXT("• Level actor(s) and/or navmap bounds may have changed! Do you need to re-generate?");

					if (NewExtentSize != CurrentExtentSize)
						WarnMsg += FString::Printf(
							TEXT(" ° New size detected: %f; Current size: %f"),
							NewExtentSize,
							CurrentExtentSize
						);

					if (NewCenter != CurrentExtentCenter)
						WarnMsg += FString::Printf(
							TEXT(" ° New location detected: %f, %f, %f; Current location: %f, %f, %f"),
							NewCenter.X, NewCenter.Y, NewCenter.Z,
							CurrentExtentCenter.X, CurrentExtentCenter.Y, CurrentExtentCenter.Z
						);

					AppendOutput(ScrollBoxOutputValidateWarnings, TxtBoxOutputValidateWarnings, WarnMsg);
					bFoundWarnings = true;
				}
			}
		}
	}

	// Powerups
	TArray<AActor *> FoundPowerups;
	UGameplayStatics::GetAllActorsOfClass(UAscMapKitEditorToolsHelper::GetEditorWorld(), AAscMapKitPowerupActor::StaticClass(), FoundPowerups);

	if (FoundPowerups.Num() <= 0)
	{
		AppendOutput(ScrollBoxOutputValidateWarnings, TxtBoxOutputValidateWarnings, TEXT("• Powerups are missing!"));
		bFoundWarnings = true;
	}
	else
	{
		const UEnum *PowerupTypeEnum = StaticEnum<EAscMapKitPowerupTypeEnum>();
		
		TMap<EAscMapKitPowerupTypeEnum, int32> PowerupTypeCountMap;

		for (const auto &PowerupActor : FoundPowerups)
		{
			if (PowerupActor && PowerupActor->IsA(AAscMapKitPowerupActor::StaticClass()))
			{
				const auto Powerup = Cast<AAscMapKitPowerupActor>(PowerupActor);

				if (Powerup)
				{
					const auto PowerupType = Powerup->MapKit.PowerupType;

					if (PowerupTypeCountMap.Contains(PowerupType))
						PowerupTypeCountMap[PowerupType]++;
					else
						PowerupTypeCountMap.Add(PowerupType, 1);
				}
			}
		}

		for (const auto &Item : PowerupTypeCountMap)
		{
			const auto PowerupType = Item.Key;

			if (PowerupDefaultCounts.Contains(PowerupType))
			{
				const auto RecommendedCount = PowerupDefaultCounts[PowerupType];
				const auto CurrentCount = Item.Value;

				if (CurrentCount != RecommendedCount)
				{
					const auto PowerupTypeDisplayName = PowerupTypeEnum->GetDisplayNameTextByValue(static_cast<int64>(PowerupType)).ToString();

					FString TooManyOrNotEnough = CurrentCount > RecommendedCount ? TEXT("too many") : TEXT("not enough");

					AppendOutput(ScrollBoxOutputValidateWarnings, TxtBoxOutputValidateWarnings,
						FString::Printf(
							TEXT("• There are %s '%s' powerup(s)! Recommended count: %d; Current count: %d"),
							*TooManyOrNotEnough,
							*PowerupTypeDisplayName,
							RecommendedCount,
							CurrentCount
						)
					);

					bFoundWarnings = true;
				}
			}
		}
	}

	// Powerup Respawn Triggers
	TArray<AActor *> FoundPowerupRespawns;
	UGameplayStatics::GetAllActorsOfClass(UAscMapKitEditorToolsHelper::GetEditorWorld(), AAscMapKitPowerupRespawnTriggerBox::StaticClass(), FoundPowerupRespawns);

	if (FoundPowerupRespawns.Num() <= 0)
	{
		AppendOutput(ScrollBoxOutputValidateWarnings, TxtBoxOutputValidateWarnings, TEXT("• Powerup respawn triggers are missing!"));
		bFoundWarnings = true;
	}
	else if (FoundPowerupRespawns.Num() > 500)
	{
		AppendOutput(ScrollBoxOutputValidateWarnings, TxtBoxOutputValidateWarnings, FString::Printf(TEXT("• There may be too many powerup respawn triggers (%d)! You may want to reduce the number and resize/move/adjust them manually."), FoundPowerupRespawns.Num()));
		bFoundWarnings = true;
	}

	// Player Starts
	if (FoundPlayerStarts.Num() < 8)
	{
		AppendOutput(ScrollBoxOutputValidateWarnings, TxtBoxOutputValidateWarnings, TEXT("• You may want to add eight (8) or more player start positions."));
		bFoundWarnings = true;
	}

	if (!bFoundErrors)
	{
		AppendOutput(ScrollBoxOutputValidateErrors, TxtBoxOutputValidateErrors, TEXT("No errors. Looks good!"));

		TxtBoxOutputValidateErrors->TextStyle.ColorAndOpacity = FLinearColor(FColor::FromHex(TEXT("#A8FC00")));
		TxtBoxOutputValidateErrors->SetTextStyle(TxtBoxOutputValidateErrors->TextStyle);
	}

	if (!bFoundWarnings)
	{
		AppendOutput(ScrollBoxOutputValidateWarnings, TxtBoxOutputValidateWarnings, TEXT("No warnings. Looks good!"));

		TxtBoxOutputValidateWarnings->TextStyle.ColorAndOpacity = FLinearColor(FColor::FromHex(TEXT("#A8FC00")));
		TxtBoxOutputValidateWarnings->SetTextStyle(TxtBoxOutputValidateWarnings->TextStyle);
	}

	if (!SectionPanelValidateErrors->IsVisible())
		BtnSubTitleValidateErrorsOnClick();

	if (!SectionPanelValidateWarnings->IsVisible())
		BtnSubTitleValidateWarningsOnClick();
}

void UAscMapKitEditorToolsUtilityWidget::BtnRunValidateResetOnClick()
{
	TxtBoxOutputValidateErrors->TextStyle.ColorAndOpacity = FLinearColor(FColor::FromHex(TEXT("#A8FC00")));
	TxtBoxOutputValidateWarnings->TextStyle.ColorAndOpacity = FLinearColor(FColor::FromHex(TEXT("#A8FC00")));

	TxtBoxOutputValidateErrors->SetTextStyle(TxtBoxOutputValidateErrors->TextStyle);
	TxtBoxOutputValidateWarnings->SetTextStyle(TxtBoxOutputValidateWarnings->TextStyle);

	TxtBoxOutputValidateErrors->SetText(FText::FromString(TEXT("Waiting...")));
	TxtBoxOutputValidateWarnings->SetText(FText::FromString(TEXT("Waiting...")));

	ScrollBoxOutputValidateErrors->ScrollToEnd();
	ScrollBoxOutputValidateWarnings->ScrollToEnd();
}

void UAscMapKitEditorToolsUtilityWidget::AppendOutput(UScrollBox *ScrollBoxOutput, UMultiLineEditableTextBox *TxtBoxOutput, const FString &Arg)
{
	if (ScrollBoxOutput &&  TxtBoxOutput)
	{
		const FString NewLineOrNot = TxtBoxOutput->Text.IsEmptyOrWhitespace() ? TEXT("") : TEXT("\n");
		const auto Line = FString::Printf(TEXT("%s%s%s"), *TxtBoxOutput->GetText().ToString(), *NewLineOrNot, *Arg);
		TxtBoxOutput->SetText(FText::FromString(Line));
		ScrollBoxOutput->ScrollToEnd();
	}
}

void UAscMapKitEditorToolsUtilityWidget::ClearOutput(UMultiLineEditableTextBox *TxtBoxOutput)
{
	if (TxtBoxOutput)
		TxtBoxOutput->SetText(FText::FromString(TEXT("")));
}

void UAscMapKitEditorToolsUtilityWidget::BtnSubTitleValidateErrorsOnClick()
{
	ToggleSection(TEXT("Errors"), TxtSubTitleValidateErrors, SectionPanelValidateErrors);
}

void UAscMapKitEditorToolsUtilityWidget::BtnSubTitleValidateWarningsOnClick()
{
	ToggleSection(TEXT("Warnings"), TxtSubTitleValidateWarnings, SectionPanelValidateWarnings);
}

void UAscMapKitEditorToolsUtilityWidget::BtnSubTitleOtherToolsOnClick()
{
	ToggleSection(TEXT("Other Tools"), TxtSubTitleOtherTools, SectionPanelOtherTools);
}

void UAscMapKitEditorToolsUtilityWidget::BtnSubTitleImportLevelStaticMeshOnClick()
{
	ToggleSection(TEXT("Import Level Static Mesh"), TxtSubTitleImportLevelStaticMesh, SectionPanelImportLevelStaticMesh);
}

void UAscMapKitEditorToolsUtilityWidget::BtnSubTitleLevelStaticMeshSetupOnClick()
{
	ToggleSection(TEXT("Level Static Mesh Setup"), TxtSubTitleLevelStaticMeshSetup, SectionPanelLevelStaticMeshSetup);
}

void UAscMapKitEditorToolsUtilityWidget::BtnSubTitleLevelStaticMeshLightmapSetupOnClick()
{
	ToggleSection(TEXT("Level Static Mesh Lightmap Setup"), TxtSubTitleLevelStaticMeshLightmapSetup, SectionPanelLevelStaticMeshLightmapSetup);
}

void UAscMapKitEditorToolsUtilityWidget::BtnSubTitleProjectLightBuildSetupOnClick()
{
	ToggleSection(TEXT("Project Light Build Setup"), TxtSubTitleProjectLightBuildSetup, SectionPanelProjectLightBuildSetup);
}

void UAscMapKitEditorToolsUtilityWidget::BtnSubTitleMeshToolOnClick()
{
	ToggleSection(TEXT("Mesh Tool"), TxtSubTitleMeshTool, SectionPanelMeshTool);
}

void UAscMapKitEditorToolsUtilityWidget::BtnSubTitleTipsOnClick()
{
	ToggleSection(TEXT("Tips"), TxtSubTitleTips, SectionPanelTips);
}

void UAscMapKitEditorToolsUtilityWidget::BtnSubTitleLinksOnClick()
{
	ToggleSection(TEXT("Links"), TxtSubTitleLinks, SectionPanelLinks);
}

void UAscMapKitEditorToolsUtilityWidget::BtnOtherToolsDesLevelObjDownloadOnClick()
{
	FPlatformProcess::LaunchURL(TEXT("https://github.com/arbruijn/DesLevelObj/releases"), nullptr, nullptr);
}

void UAscMapKitEditorToolsUtilityWidget::BtnOtherToolsDesLevelObjDownloadTextureRemapFileOnClick()
{
	FPlatformProcess::LaunchURL(TEXT("https://raw.githubusercontent.com/Ascentroid/Ascentroid/refs/heads/latest-stable/MapKit/DesLevelObj/DesLevelObj_Ascentroid_Texture_Remap.json"), nullptr, nullptr);
}

void UAscMapKitEditorToolsUtilityWidget::BtnOtherToolsFbxConverterDownloadOnClick()
{
	FPlatformProcess::LaunchURL(TEXT("https://images.autodesk.com/adsk/files/fbx20133_converter_win_x64.exe"), nullptr, nullptr);
}

void UAscMapKitEditorToolsUtilityWidget::BtnOtherToolsFbxReviewDownloadOnClick()
{
	FPlatformProcess::LaunchURL(TEXT("https://www.autodesk.com/products/fbx/fbx-review#free-download"), nullptr, nullptr);
}

void UAscMapKitEditorToolsUtilityWidget::BtnOtherToolsMeshToolDownloadEpicOnClick()
{
	FPlatformProcess::LaunchURL(TEXT("https://www.unrealengine.com/marketplace/en-US/product/mesh-tool"), nullptr, nullptr);
}

void UAscMapKitEditorToolsUtilityWidget::BtnOtherToolsMeshToolDownloadItchOnClick()
{
	FPlatformProcess::LaunchURL(TEXT("https://marynate.itch.io/mesh-tool"), nullptr, nullptr);
}

void UAscMapKitEditorToolsUtilityWidget::BtnOtherToolsSnappingHelperDownloadEpicOnClick()
{
	FPlatformProcess::LaunchURL(TEXT("https://www.unrealengine.com/marketplace/en-US/product/snapping-helper"), nullptr, nullptr);
}

void UAscMapKitEditorToolsUtilityWidget::BtnOtherToolsBlenderDownloadOnClick()
{
	FPlatformProcess::LaunchURL(TEXT("https://www.blender.org/download"), nullptr, nullptr);
}

void UAscMapKitEditorToolsUtilityWidget::BtnLinksAscentroidLinkOnClick()
{
	FPlatformProcess::LaunchURL(TEXT("https://ascentroid.com"), nullptr, nullptr);
}

void UAscMapKitEditorToolsUtilityWidget::BtnLinksDiscordLinkOnClick()
{
	FPlatformProcess::LaunchURL(TEXT("https://discord.gg/pktfw78"), nullptr, nullptr);
}

void UAscMapKitEditorToolsUtilityWidget::BtnLinksYouTubeLinkOnClick()
{
	FPlatformProcess::LaunchURL(TEXT("https://www.youtube.com/channel/UCiRL2NPWnS5nxTt9J_gk9Jg"), nullptr, nullptr);
}

void UAscMapKitEditorToolsUtilityWidget::BtnLinksUeNamingLinkOnClick()
{
	FPlatformProcess::LaunchURL(TEXT("https://github.com/Allar/ue5-style-guide"), nullptr, nullptr);
}

void UAscMapKitEditorToolsUtilityWidget::BtnLinksUeTurboSquidLinkOnClick()
{
	FPlatformProcess::LaunchURL(TEXT("https://www.turbosquid.com/Search/3D-Models/free/download"), nullptr, nullptr);
}

void UAscMapKitEditorToolsUtilityWidget::BtnLinksAmbientCgLinkOnClick()
{
	FPlatformProcess::LaunchURL(TEXT("https://ambientcg.com"), nullptr, nullptr);
}

void UAscMapKitEditorToolsUtilityWidget::BtnEasyOnClick(UAscMapKitEditorToolsSelfRefButtonWidget *Button)
{
	if (Button)
	{
		const auto ButtonName = Button->GetName();

		if (ButtonName == TEXT("BtnCreateAreaAcid"))
			ComboBoxAddArea->SetSelectedOption(TEXT("Acid"));
		else if (ButtonName == TEXT("BtnCreateAreaElectric"))
			ComboBoxAddArea->SetSelectedOption(TEXT("Electric"));
		else if (ButtonName == TEXT("BtnCreateAreaLava"))
			ComboBoxAddArea->SetSelectedOption(TEXT("Lava"));
		else if (ButtonName == TEXT("BtnCreateAreaLavaFalls"))
			ComboBoxAddArea->SetSelectedOption(TEXT("Lava Falls"));
		else if (ButtonName == TEXT("BtnCreateAreaLiquid"))
			ComboBoxAddArea->SetSelectedOption(TEXT("Liquid"));
		else if (ButtonName == TEXT("BtnCreateAreaPowerStation"))
			ComboBoxAddArea->SetSelectedOption(TEXT("Power Station"));
		else if (ButtonName == TEXT("BtnCreateAreaSludge"))
			ComboBoxAddArea->SetSelectedOption(TEXT("Sludge"));
		else if (ButtonName == TEXT("BtnCreateDecorGrate10x20mBasic001"))
			ComboBoxAddDecorType->SetSelectedOption(
				StaticEnum<EAscMapKitDecorTypeEnum>()->GetDisplayNameTextByIndex(
					static_cast<uint8>(EAscMapKitDecorTypeEnum::Grate_10x20m_Basic_001)
				).ToString()
			);
		else if (ButtonName == TEXT("BtnCreateDecorGrate20x5mBasic001"))
			ComboBoxAddDecorType->SetSelectedOption(
				StaticEnum<EAscMapKitDecorTypeEnum>()->GetDisplayNameTextByIndex(
					static_cast<uint8>(EAscMapKitDecorTypeEnum::Grate_20x5m_Basic_001)
				).ToString()
			);
		else if (ButtonName == TEXT("BtnCreateDecorGrate20x5mBasic002"))
			ComboBoxAddDecorType->SetSelectedOption(
				StaticEnum<EAscMapKitDecorTypeEnum>()->GetDisplayNameTextByIndex(
					static_cast<uint8>(EAscMapKitDecorTypeEnum::Grate_20x5m_Basic_002)
				).ToString()
			);
		else if (ButtonName == TEXT("BtnCreateDecorGrate20x20mBasic001"))
			ComboBoxAddDecorType->SetSelectedOption(
				StaticEnum<EAscMapKitDecorTypeEnum>()->GetDisplayNameTextByIndex(
					static_cast<uint8>(EAscMapKitDecorTypeEnum::Grate_20x20m_Basic_001)
				).ToString()
			);
		else if (ButtonName == TEXT("BtnCreateDecorLadderSet001"))
			ComboBoxAddDecorType->SetSelectedOption(
				StaticEnum<EAscMapKitDecorTypeEnum>()->GetDisplayNameTextByIndex(
					static_cast<uint8>(EAscMapKitDecorTypeEnum::Ladder_Set_001)
				).ToString()
			);
		else if (ButtonName == TEXT("BtnCreateDecorLetter"))
			ComboBoxAddDecorType->SetSelectedOption(
				StaticEnum<EAscMapKitDecorTypeEnum>()->GetDisplayNameTextByIndex(
					static_cast<uint8>(EAscMapKitDecorTypeEnum::Letter)
				).ToString()
			);
		else if (ButtonName == TEXT("BtnCreateDecorPiece001"))
			ComboBoxAddDecorType->SetSelectedOption(
				StaticEnum<EAscMapKitDecorTypeEnum>()->GetDisplayNameTextByIndex(
					static_cast<uint8>(EAscMapKitDecorTypeEnum::Piece_001)
				).ToString()
			);
		else if (ButtonName == TEXT("BtnCreateDecorSign001"))
			ComboBoxAddDecorType->SetSelectedOption(
				StaticEnum<EAscMapKitDecorTypeEnum>()->GetDisplayNameTextByIndex(
					static_cast<uint8>(EAscMapKitDecorTypeEnum::Sign_001)
				).ToString()
			);
		else if (ButtonName == TEXT("BtnCreateDecorSign002"))
			ComboBoxAddDecorType->SetSelectedOption(
				StaticEnum<EAscMapKitDecorTypeEnum>()->GetDisplayNameTextByIndex(
					static_cast<uint8>(EAscMapKitDecorTypeEnum::Sign_002)
				).ToString()
			);
		else if (ButtonName == TEXT("BtnCreateDecorSign003"))
			ComboBoxAddDecorType->SetSelectedOption(
				StaticEnum<EAscMapKitDecorTypeEnum>()->GetDisplayNameTextByIndex(
					static_cast<uint8>(EAscMapKitDecorTypeEnum::Sign_003)
				).ToString()
			);
		else if (ButtonName == TEXT("BtnCreateDecorSign004"))
			ComboBoxAddDecorType->SetSelectedOption(
				StaticEnum<EAscMapKitDecorTypeEnum>()->GetDisplayNameTextByIndex(
					static_cast<uint8>(EAscMapKitDecorTypeEnum::Sign_004)
				).ToString()
			);
		else if (ButtonName == TEXT("BtnCreateDecorSign005"))
			ComboBoxAddDecorType->SetSelectedOption(
				StaticEnum<EAscMapKitDecorTypeEnum>()->GetDisplayNameTextByIndex(
					static_cast<uint8>(EAscMapKitDecorTypeEnum::Sign_005)
				).ToString()
			);
		else if (ButtonName == TEXT("BtnCreateDecorSign006"))
			ComboBoxAddDecorType->SetSelectedOption(
				StaticEnum<EAscMapKitDecorTypeEnum>()->GetDisplayNameTextByIndex(
					static_cast<uint8>(EAscMapKitDecorTypeEnum::Sign_006)
				).ToString()
			);
		else if (ButtonName == TEXT("BtnCreateDoorAnimated20x20mBasic001"))
			ComboBoxAddDoorType->SetSelectedOption(
				StaticEnum<EAscMapKitDoorTypeEnum>()->GetDisplayNameTextByIndex(
					static_cast<uint8>(EAscMapKitDoorTypeEnum::Animated20x20mBasic001)
				).ToString()
			);
		else if (ButtonName == TEXT("BtnCreateDoorAnimated20x20mBasic002"))
			ComboBoxAddDoorType->SetSelectedOption(
				StaticEnum<EAscMapKitDoorTypeEnum>()->GetDisplayNameTextByIndex(
					static_cast<uint8>(EAscMapKitDoorTypeEnum::Animated20x20mBasic002)
				).ToString()
			);
		else if (ButtonName == TEXT("BtnCreateDoorAnimated20x20mBasic003"))
			ComboBoxAddDoorType->SetSelectedOption(
				StaticEnum<EAscMapKitDoorTypeEnum>()->GetDisplayNameTextByIndex(
					static_cast<uint8>(EAscMapKitDoorTypeEnum::Animated20x20mBasic003)
				).ToString()
			);
		else if (ButtonName == TEXT("BtnCreateDoorAnimated20x20mBasic004"))
			ComboBoxAddDoorType->SetSelectedOption(
				StaticEnum<EAscMapKitDoorTypeEnum>()->GetDisplayNameTextByIndex(
					static_cast<uint8>(EAscMapKitDoorTypeEnum::Animated20x20mBasic004)
				).ToString()
			);
		else if (ButtonName == TEXT("BtnCreateDoorAnimated20x20mBasic005"))
			ComboBoxAddDoorType->SetSelectedOption(
				StaticEnum<EAscMapKitDoorTypeEnum>()->GetDisplayNameTextByIndex(
					static_cast<uint8>(EAscMapKitDoorTypeEnum::Animated20x20mBasic005)
				).ToString()
			);
		else if (ButtonName == TEXT("BtnCreateDoorAnimated20x20mSciFiDoorsDoor1"))
			ComboBoxAddDoorType->SetSelectedOption(
				StaticEnum<EAscMapKitDoorTypeEnum>()->GetDisplayNameTextByIndex(
					static_cast<uint8>(EAscMapKitDoorTypeEnum::Animated20x20mSciFiDoorsDoor1)
				).ToString()
			);
		else if (ButtonName == TEXT("BtnCreateDoorAnimated20x20mSciFiDoorsDoor2"))
			ComboBoxAddDoorType->SetSelectedOption(
				StaticEnum<EAscMapKitDoorTypeEnum>()->GetDisplayNameTextByIndex(
					static_cast<uint8>(EAscMapKitDoorTypeEnum::Animated20x20mSciFiDoorsDoor2)
				).ToString()
			);
		else if (ButtonName == TEXT("BtnCreateDoorAnimated20x20mSciFiDoorsDoor4"))
			ComboBoxAddDoorType->SetSelectedOption(
				StaticEnum<EAscMapKitDoorTypeEnum>()->GetDisplayNameTextByIndex(
					static_cast<uint8>(EAscMapKitDoorTypeEnum::Animated20x20mSciFiDoorsDoor4)
				).ToString()
			);
		else if (ButtonName == TEXT("BtnCreateDoorAnimated20x20mSciFiPropsDoor1"))
			ComboBoxAddDoorType->SetSelectedOption(
				StaticEnum<EAscMapKitDoorTypeEnum>()->GetDisplayNameTextByIndex(
					static_cast<uint8>(EAscMapKitDoorTypeEnum::Animated20x20mSciFiPropsDoor1)
				).ToString()
			);
		else if (ButtonName == TEXT("BtnCreateDoorAnimated40x20mBasic001"))
			ComboBoxAddDoorType->SetSelectedOption(
				StaticEnum<EAscMapKitDoorTypeEnum>()->GetDisplayNameTextByIndex(
					static_cast<uint8>(EAscMapKitDoorTypeEnum::Animated40x20mBasic001)
				).ToString()
			);
		else if (ButtonName == TEXT("BtnCreateDoorAnimated40x20mSciFiDoorsDoor3"))
			ComboBoxAddDoorType->SetSelectedOption(
				StaticEnum<EAscMapKitDoorTypeEnum>()->GetDisplayNameTextByIndex(
					static_cast<uint8>(EAscMapKitDoorTypeEnum::Animated40x20mSciFiDoorsDoor3)
				).ToString()
			);
		else if (ButtonName == TEXT("BtnCreateDoorDestructible20x20mBasic001"))
			ComboBoxAddDoorType->SetSelectedOption(
				StaticEnum<EAscMapKitDoorTypeEnum>()->GetDisplayNameTextByIndex(
					static_cast<uint8>(EAscMapKitDoorTypeEnum::Destructible20x20mBasic001)
				).ToString()
			);
		else if (ButtonName == TEXT("BtnCreateDoorCustom"))
			ComboBoxAddDoorType->SetSelectedOption(
				StaticEnum<EAscMapKitDoorTypeEnum>()->GetDisplayNameTextByIndex(
					static_cast<uint8>(EAscMapKitDoorTypeEnum::Custom)
				).ToString()
			);
		else if (ButtonName == TEXT("BtnCreateEnemyAlienCylon"))
			ComboBoxAddEnemyType->SetSelectedOption(
				StaticEnum<EAscMapKitEnemyTypeEnum>()->GetDisplayNameTextByIndex(
					static_cast<uint8>(EAscMapKitEnemyTypeEnum::AlienCylon)
				).ToString()
			);
		else if (ButtonName == TEXT("BtnCreateEnemyAlienGrawn"))
			ComboBoxAddEnemyType->SetSelectedOption(
				StaticEnum<EAscMapKitEnemyTypeEnum>()->GetDisplayNameTextByIndex(
					static_cast<uint8>(EAscMapKitEnemyTypeEnum::AlienGrawn)
				).ToString()
			);
		else if (ButtonName == TEXT("BtnCreateEnemyMachineAssaultCache"))
			ComboBoxAddEnemyType->SetSelectedOption(
				StaticEnum<EAscMapKitEnemyTypeEnum>()->GetDisplayNameTextByIndex(
					static_cast<uint8>(EAscMapKitEnemyTypeEnum::MachineAssaultCache)
				).ToString()
			);
		else if (ButtonName == TEXT("BtnCreateEnemyMachineAssaultTank"))
			ComboBoxAddEnemyType->SetSelectedOption(
				StaticEnum<EAscMapKitEnemyTypeEnum>()->GetDisplayNameTextByIndex(
					static_cast<uint8>(EAscMapKitEnemyTypeEnum::MachineAssaultTank)
				).ToString()
			);
		else if (ButtonName == TEXT("BtnCreateEnemyMachineGeminiTurret"))
			ComboBoxAddEnemyType->SetSelectedOption(
				StaticEnum<EAscMapKitEnemyTypeEnum>()->GetDisplayNameTextByIndex(
					static_cast<uint8>(EAscMapKitEnemyTypeEnum::MachineGeminiTurret)
				).ToString()
			);
		else if (ButtonName == TEXT("BtnCreateEnemyMachineSarkTurret"))
			ComboBoxAddEnemyType->SetSelectedOption(
				StaticEnum<EAscMapKitEnemyTypeEnum>()->GetDisplayNameTextByIndex(
					static_cast<uint8>(EAscMapKitEnemyTypeEnum::MachineSarkTurret)
				).ToString()
			);
		else if (ButtonName == TEXT("BtnCreateEnemyMachineSecureGage"))
			ComboBoxAddEnemyType->SetSelectedOption(
				StaticEnum<EAscMapKitEnemyTypeEnum>()->GetDisplayNameTextByIndex(
					static_cast<uint8>(EAscMapKitEnemyTypeEnum::MachineSecureGage)
				).ToString()
			);
		else if (ButtonName == TEXT("BtnCreateEnemyMachineServasTurret"))
			ComboBoxAddEnemyType->SetSelectedOption(
				StaticEnum<EAscMapKitEnemyTypeEnum>()->GetDisplayNameTextByIndex(
					static_cast<uint8>(EAscMapKitEnemyTypeEnum::MachineServasTurret)
				).ToString()
			);
		else if (ButtonName == TEXT("BtnCreateFanAnimated20x20mBasic001"))
			ComboBoxAddFanType->SetSelectedOption(
				StaticEnum<EAscMapKitFanTypeEnum>()->GetDisplayNameTextByIndex(
					static_cast<uint8>(EAscMapKitFanTypeEnum::Animated20x20mBasic001)
				).ToString()
			);
		else if (ButtonName == TEXT("BtnCreateFanCustom"))
			ComboBoxAddFanType->SetSelectedOption(
				StaticEnum<EAscMapKitFanTypeEnum>()->GetDisplayNameTextByIndex(
					static_cast<uint8>(EAscMapKitFanTypeEnum::Custom)
				).ToString()
			);
		else if (ButtonName == TEXT("BtnCreateTriggerInvisible"))
			ComboBoxAddTriggerType->SetSelectedOption(
				StaticEnum<EAscMapKitTriggerTypeEnum>()->GetDisplayNameTextByIndex(
					static_cast<uint8>(EAscMapKitTriggerTypeEnum::Invisible)
				).ToString()
			);
		else if (ButtonName == TEXT("BtnCreateTriggerBasic001"))
			ComboBoxAddTriggerType->SetSelectedOption(
				StaticEnum<EAscMapKitTriggerTypeEnum>()->GetDisplayNameTextByIndex(
					static_cast<uint8>(EAscMapKitTriggerTypeEnum::Basic001)
				).ToString()
			);
		else if (ButtonName == TEXT("BtnCreateTriggerCustom"))
			ComboBoxAddTriggerType->SetSelectedOption(
				StaticEnum<EAscMapKitTriggerTypeEnum>()->GetDisplayNameTextByIndex(
					static_cast<uint8>(EAscMapKitTriggerTypeEnum::Custom)
				).ToString()
			);
	}
}

void UAscMapKitEditorToolsUtilityWidget::ToggleSection(const FString &TitleText, UTextBlock *TxtSubTitleWidget, UWidget *SectionPanelWidget)
{
	if (TxtSubTitleWidget == nullptr || SectionPanelWidget == nullptr)
		return;

	TxtSubTitleWidget->SetText(FText::FromString(SectionPanelWidget->IsVisible() ? FString::Printf(TEXT("▶ %s"), *TitleText) : FString::Printf(TEXT("◢ %s"), *TitleText)));
	SectionPanelWidget->SetVisibility(SectionPanelWidget->IsVisible() ? ESlateVisibility::Collapsed : ESlateVisibility::SelfHitTestInvisible);
}
