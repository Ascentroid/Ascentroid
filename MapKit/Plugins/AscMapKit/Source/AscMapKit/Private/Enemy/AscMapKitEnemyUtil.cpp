#include "AscMapKit/Public/Enemy/AscMapKitEnemyUtil.h"

TArray<EAscMapKitProjWeapTypeEnum> UAscMapKitEnemyUtil::WeaponTypesSafe = {
	EAscMapKitProjWeapTypeEnum::Pri_01,
	EAscMapKitProjWeapTypeEnum::Pri_02,
	EAscMapKitProjWeapTypeEnum::Pri_03,
	EAscMapKitProjWeapTypeEnum::Pri_04,
	EAscMapKitProjWeapTypeEnum::Pri_05,
	EAscMapKitProjWeapTypeEnum::Pri_06,
	EAscMapKitProjWeapTypeEnum::Pri_07,
	EAscMapKitProjWeapTypeEnum::Pri_08,
	EAscMapKitProjWeapTypeEnum::Sec_01,
	EAscMapKitProjWeapTypeEnum::Sec_02,
	EAscMapKitProjWeapTypeEnum::Sec_03,
	EAscMapKitProjWeapTypeEnum::Sec_05
};

TArray<EAscMapKitEnemyTypeEnum> UAscMapKitEnemyUtil::MeleeEnemies = {
	EAscMapKitEnemyTypeEnum::AlienGrawn
};

TArray<EAscMapKitEnemyTypeEnum> UAscMapKitEnemyUtil::TurretEnemies = {
	EAscMapKitEnemyTypeEnum::MachineGeminiTurret,
	EAscMapKitEnemyTypeEnum::MachineSarkTurret,
	EAscMapKitEnemyTypeEnum::MachineServasTurret
};

FLinearColor UAscMapKitEnemyUtil::GetRandomColor(const EAscMapKitProjWeapTypeEnum &ForWeaponType, const int32 &StrengthLevel)
{
	if (ForWeaponType == EAscMapKitProjWeapTypeEnum::Pri_01 && StrengthLevel > 0)
	{
		auto BaseColor = FLinearColor::White;
		
		switch (StrengthLevel)
		{
			case 2:
				BaseColor = FLinearColor::Yellow;
				break;
			case 3:
				BaseColor = FColor::FromHex(TEXT("#FF3F00")); // see FAscUmgStylesStruct.ColorPlayerOrange
				break;
			case 4:
				BaseColor = FColor::FromHex(TEXT("#95007C")); // see FAscUmgStylesStruct.ColorPlayerPurple
				break;
			case 5:
				BaseColor = FLinearColor::Green;
				break;
			case 6:
				BaseColor = FLinearColor::Red;
				break;
		}

		const auto Variation = FMath::RandRange(-0.1f, 0.1f);

		return FLinearColor(
			FMath::Clamp(BaseColor.R + Variation, 0.f, 1.f),
			FMath::Clamp(BaseColor.G + Variation, 0.f, 1.f),
			FMath::Clamp(BaseColor.B + Variation, 0.f, 1.f)
		);
	}

	static const TMap<EAscMapKitProjWeapTypeEnum, FLinearColor> BaseColors = {
		{EAscMapKitProjWeapTypeEnum::Pri_02, FLinearColor::Yellow},
		{EAscMapKitProjWeapTypeEnum::Pri_03, FColor::FromHex(TEXT("#95007C"))}, // see FAscUmgStylesStruct.ColorPlayerPurple
		{EAscMapKitProjWeapTypeEnum::Pri_04, FLinearColor::Green},
		{EAscMapKitProjWeapTypeEnum::Pri_05, FLinearColor::Yellow},
		{EAscMapKitProjWeapTypeEnum::Pri_06, FColor::FromHex(TEXT("#0DE8E8"))}, // see FAscUmgStylesStruct.ColorPlayerCyan
		{EAscMapKitProjWeapTypeEnum::Pri_07, FLinearColor(1.f, 0.5f, 0.f)},
		{EAscMapKitProjWeapTypeEnum::Pri_08, FLinearColor::Red},
		{EAscMapKitProjWeapTypeEnum::Sec_01, FLinearColor(1.f, 0.5f, 0.f)},
		{EAscMapKitProjWeapTypeEnum::Sec_02, FLinearColor::Red},
		{EAscMapKitProjWeapTypeEnum::Sec_03, FLinearColor::Green},
		{EAscMapKitProjWeapTypeEnum::Sec_05, FLinearColor(1.0f, 0.7f, 0.2f)}
	};

	if (BaseColors.Contains(ForWeaponType))
	{
		const auto BaseColor = BaseColors[ForWeaponType];
		const auto Variation = FMath::RandRange(-0.1f, 0.1f);
		
		return FLinearColor(
			FMath::Clamp(BaseColor.R + Variation, 0.f, 1.f),
			FMath::Clamp(BaseColor.G + Variation, 0.f, 1.f),
			FMath::Clamp(BaseColor.B + Variation, 0.f, 1.f)
		);
	}

	return FLinearColor::MakeRandomColor();
}

FAscMapKitEnemyPropertiesStruct UAscMapKitEnemyUtil::GenerateRandomEnemyProperties(const EAscMapKitEnemyTypeEnum &EnemyType)
{
	FAscMapKitEnemyPropertiesStruct Result = AAscMapKitEnemyActor::GetMapKitDefaults();

	Result.EnemyType = EnemyType;

	if (MeleeEnemies.Contains(EnemyType))
	{
		Result.Melee.Enable = true;
		Result.Dodge.Enable = false;
	}

	if (TurretEnemies.Contains(EnemyType))
	{
		Result.Turret.Enable = true;
		Result.Melee.Enable = false;
		Result.Dodge.Enable = false;
	}

	Result.Status.DisableCompletely = false;
	Result.Status.DisableAttack = false;
	Result.Status.DisableMovement = false;

	const auto WeaponTypeCount = WeaponTypesSafe.Num();
	const auto WeaponType = static_cast<EAscMapKitProjWeapTypeEnum>(WeaponTypeCount > 0 ? FMath::RandRange(0, WeaponTypeCount - 1) : 0);
	const auto WeaponStrengthLevel = FMath::RandRange(1, 6);
	const auto RandomColor = GetRandomColor(WeaponType, WeaponStrengthLevel);

	Result.Colors.OverridePrimaryColor = true;
	Result.Colors.PrimaryColor = RandomColor;
	Result.Colors.OverrideEmitColor = true;
	Result.Colors.EmitColor = RandomColor;

	if (Result.Melee.Enable)
	{
		Result.Colors.PrimaryColor = FLinearColor::MakeRandomColor();
		Result.Colors.EmitColor = FLinearColor::MakeRandomColor();
		Result.Dodge.Enable = false;
	}

	Result.Weapons.NumberOfSockets = AAscMapKitEnemyActor::GetNumberOfSockets(EnemyType);
	Result.Weapons.Sockets.Reset();

	for (int32 i = 0; i < Result.Weapons.NumberOfSockets; ++i)
	{
		FAscMapKitEnemyPropertiesWeaponStruct EnemyWeapon;
		EnemyWeapon.ChanceToFire = 50;
		EnemyWeapon.WeaponStrengthLevel = WeaponStrengthLevel;
		EnemyWeapon.WeaponType = WeaponType;
		Result.Weapons.Sockets.Add(EnemyWeapon);
	}

	return Result;
}