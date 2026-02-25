#pragma once

// Ascentroid
#include "AscMapKit/Public/Enemy/AscMapKitEnemyActor.h"
#include "AscMapKit/Public/Enemy/AscMapKitEnemyTypeEnum.h"
#include "AscMapKit/Public/Projectile/AscMapKitProjWeapTypeEnum.h"

// Generated
#include "AscMapKitEnemyUtil.generated.h"

UCLASS(Blueprintable, BlueprintType)
class ASCMAPKIT_API UAscMapKitEnemyUtil : public UObject
{
	GENERATED_BODY()

public:
	// UPROPERTY()
	static TArray<EAscMapKitProjWeapTypeEnum> WeaponTypesSafe; // @reminder: refactor, data asset?

	// UPROPERTY()
	static TArray<EAscMapKitEnemyTypeEnum> MeleeEnemies; // @reminder: refactor, data asset?

	// UPROPERTY()
	static TArray<EAscMapKitEnemyTypeEnum> TurretEnemies; // @reminder: refactor, data asset?

	UFUNCTION()
	static FLinearColor GetRandomColor(const EAscMapKitProjWeapTypeEnum &ForWeaponType, const int32 &StrengthLevel = 0);

	UFUNCTION()
	static FAscMapKitEnemyPropertiesStruct GenerateRandomEnemyProperties(const EAscMapKitEnemyTypeEnum &EnemyType);
};