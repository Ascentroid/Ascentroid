#pragma once

// UE
#include "Runtime/Engine/Classes/Engine/TriggerBox.h"

// Ascentroid
#include "AscMapKit/Public/Powerup/AscMapKitPowerupRespawnTriggerBoxCollisionBoxBoundsVector.h"
#include "AscMapKit/Public/Powerup/AscMapKitPowerupTypeEnum.h"

// Generated
#include "AscMapKitPowerupRespawnTriggerBox.generated.h"

UCLASS(HideCategories=("Shape", "Navigation", "Tags", "Actor", "Activation", "Asset User Data", "Collision", "Cooking", "HLOD", "Input", "LOD", "Lighting", "Mobile", "Physics", "Rendering", "Replication", "Sprite", "Tags", "Virtual Texture"))
class ASCMAPKIT_API AAscMapKitPowerupRespawnTriggerBox : public ATriggerBox
{
	GENERATED_BODY()

public:
	AAscMapKitPowerupRespawnTriggerBox();

	UFUNCTION()
	virtual void OnConstruction(const FTransform &Transform) override;

	// todo: @reminder: update as powerups change

	UPROPERTY(EditAnywhere, Category="Ascentroid - Powerups", meta=(DisplayName = "Pri 01 (Laser)", AllowPrivateAccess = "true"))
	bool Weapon_Pri_01;

	UPROPERTY(EditAnywhere, Category="Ascentroid - Powerups", meta=(DisplayName = "Pri 02 (Shred)", AllowPrivateAccess = "true"))
	bool Weapon_Pri_02;

	UPROPERTY(EditAnywhere, Category="Ascentroid - Powerups", meta=(DisplayName = "Pri 03 (Mech)", AllowPrivateAccess = "true"))
	bool Weapon_Pri_03;

	UPROPERTY(EditAnywhere, Category="Ascentroid - Powerups", meta=(DisplayName = "Pri 04 (Tox)", AllowPrivateAccess = "true"))
	bool Weapon_Pri_04;

	UPROPERTY(EditAnywhere, Category="Ascentroid - Powerups", meta=(DisplayName = "Pri 05 (Coil)", AllowPrivateAccess = "true"))
	bool Weapon_Pri_05;

	UPROPERTY(EditAnywhere, Category="Ascentroid - Powerups", meta=(DisplayName = "Pri 06 (Phase)", AllowPrivateAccess = "true"))
	bool Weapon_Pri_06;

	UPROPERTY(EditAnywhere, Category="Ascentroid - Powerups", meta=(DisplayName = "Pri 07 (Hydra)", AllowPrivateAccess = "true"))
	bool Weapon_Pri_07;

	UPROPERTY(EditAnywhere, Category="Ascentroid - Powerups", meta=(DisplayName = "Pri 08 (Neutron)", AllowPrivateAccess = "true"))
	bool Weapon_Pri_08;

	UPROPERTY(EditAnywhere, Category="Ascentroid - Powerups", meta=(DisplayName = "Pri 09 (Hammer)", AllowPrivateAccess = "true"))
	bool Weapon_Pri_09;

	UPROPERTY(EditAnywhere, Category="Ascentroid - Powerups", meta=(DisplayName = "Sec 01 (Assault)", AllowPrivateAccess = "true"))
	bool Weapon_Sec_01;

	UPROPERTY(EditAnywhere, Category="Ascentroid - Powerups", meta=(DisplayName = "Sec 02 (Assault Pack)", AllowPrivateAccess = "true"))
	bool Weapon_Sec_02;

	UPROPERTY(EditAnywhere, Category="Ascentroid - Powerups", meta=(DisplayName = "Sec 03 (Prowler)", AllowPrivateAccess = "true"))
	bool Weapon_Sec_03;

	UPROPERTY(EditAnywhere, Category="Ascentroid - Powerups", meta=(DisplayName = "Sec 04 (Prowler Pack)", AllowPrivateAccess = "true"))
	bool Weapon_Sec_04;

	UPROPERTY(EditAnywhere, Category="Ascentroid - Powerups", meta=(DisplayName = "Sec 05 (RNA)", AllowPrivateAccess = "true"))
	bool Weapon_Sec_05;

	UPROPERTY(EditAnywhere, Category="Ascentroid - Powerups", meta=(DisplayName = "Sec 06 (Deadeye)", AllowPrivateAccess = "true"))
	bool Weapon_Sec_06;

	UPROPERTY(EditAnywhere, Category="Ascentroid - Powerups", meta=(DisplayName = "Sec 07 (Deadeye Pack)", AllowPrivateAccess = "true"))
	bool Weapon_Sec_07;

	UPROPERTY(EditAnywhere, Category="Ascentroid - Powerups", meta=(DisplayName = "Sec 08 (Vex)", AllowPrivateAccess = "true"))
	bool Weapon_Sec_08;

	UPROPERTY(EditAnywhere, Category="Ascentroid - Powerups", meta=(DisplayName = "Sec 09 (Aftershock)", AllowPrivateAccess = "true"))
	bool Weapon_Sec_09;

    UPROPERTY(EditAnywhere, Category="Ascentroid - Powerups", meta=(DisplayName = "Tet 01 (Radial)", AllowPrivateAccess = "true"))
    bool Weapon_Tet_01;

    UPROPERTY(EditAnywhere, Category="Ascentroid - Powerups", meta=(DisplayName = "Tet 02 (Radial Pack)", AllowPrivateAccess = "true"))
    bool Weapon_Tet_02;

    UPROPERTY(EditAnywhere, Category="Ascentroid - Powerups", meta=(DisplayName = "Tet 03 (Bio)", AllowPrivateAccess = "true"))
    bool Weapon_Tet_03;

    UPROPERTY(EditAnywhere, Category="Ascentroid - Powerups", meta=(DisplayName = "Tet 04 (Bio Pack)", AllowPrivateAccess = "true"))
    bool Weapon_Tet_04;

	UPROPERTY(EditAnywhere, Category="Ascentroid - Powerups", meta=(DisplayName = "Tet 05 (Howler)", AllowPrivateAccess = "true"))
	bool Weapon_Tet_05;

	UPROPERTY(EditAnywhere, Category="Ascentroid - Powerups", meta=(DisplayName = "Tet 06 (Howler Pack)", AllowPrivateAccess = "true"))
	bool Weapon_Tet_06;

	UPROPERTY(EditAnywhere, Category="Ascentroid - Powerups", meta=(DisplayName = "Tet 07 (Chaff)", AllowPrivateAccess = "true"))
	bool Weapon_Tet_07;

	UPROPERTY(EditAnywhere, Category="Ascentroid - Powerups", meta=(DisplayName = "Aux 01 (Power)", AllowPrivateAccess = "true"))
	bool Aux_01;

	UPROPERTY(EditAnywhere, Category="Ascentroid - Powerups", meta=(DisplayName = "Aux 02 (Shield)", AllowPrivateAccess = "true"))
	bool Aux_02;

	UPROPERTY(EditAnywhere, Category="Ascentroid - Powerups", meta=(DisplayName = "Aux 03 (Conceal)", AllowPrivateAccess = "true"))
	bool Aux_03;

	UPROPERTY(EditAnywhere, Category="Ascentroid - Powerups", meta=(DisplayName = "Aux 04 (Invincible)", AllowPrivateAccess = "true"))
	bool Aux_04;

	UPROPERTY(EditAnywhere, Category="Ascentroid - Powerups", meta=(DisplayName = "Aux 05 (LaserCoupler)", AllowPrivateAccess = "true"))
	bool Aux_05;

	UPROPERTY(EditAnywhere, Category="Ascentroid - Powerups", meta=(DisplayName = "Aux 06 (Ammo)", AllowPrivateAccess = "true"))
	bool Aux_06;

	UPROPERTY(EditAnywhere, Category="Ascentroid - Powerups", meta=(DisplayName = "Aux 07 (AmmoCache)", AllowPrivateAccess = "true"))
	bool Aux_07;

	UPROPERTY(EditAnywhere, Category="Ascentroid - Powerups", meta=(DisplayName = "Aux 08 (Boost)", AllowPrivateAccess = "true"))
	bool Aux_08;

	UPROPERTY(EditAnywhere, Category="Ascentroid - Powerups", meta=(DisplayName = "Aux 09 (PowerTransfer)", AllowPrivateAccess = "true"))
	bool Aux_09;

	UPROPERTY(EditAnywhere, Category="Ascentroid - Powerups", meta=(DisplayName = "Aux 10 (NavmapReveal)", AllowPrivateAccess = "true"))
	bool Aux_10;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame, Category="Ascentroid - Collision", DisplayName="Collision Box Bounds")
	FAscMapKitPowerupRespawnTriggerBoxCollisionBoxBoundsVector BoxBounds;

	UFUNCTION()
	FVector GetRandomLocationWithinBounds();

	UFUNCTION()
	bool Supports(EAscMapKitPowerupTypeEnum PowerupType);

#if WITH_EDITOR
	virtual bool ShouldTickIfViewportsOnly() const override { return true; }

	virtual void Tick(float DeltaTime) override;

	virtual void PostEditChangeProperty(FPropertyChangedEvent &PropertyChangedEvent) override;
#endif

private:
	UPROPERTY()
	bool bIsBoxBoundsInitialized;

	UPROPERTY()
	bool bNeedsScaleReset;
};