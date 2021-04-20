#pragma once

// UE4
#include "Runtime/Engine/Classes/Engine/TriggerBox.h"

// Ascentroid
#include "AscMapKit/Public/Powerup/AscMapKitPowerupTypeEnum.h"

// Generated
#include "AscMapKitPowerupRespawnTriggerBox.generated.h"

UCLASS(HideCategories=("Activation", "Actor", "Asset User Data", "Collision", "Cooking", "HLOD", "Input", "LOD", "Lighting", "Mobile", "Physics", "Rendering", "Replication", "Sprite", "Tags", "Virtual Texture"))
class ASCMAPKIT_API AAscMapKitPowerupRespawnTriggerBox : public ATriggerBox
{
	GENERATED_BODY()

public:
	AAscMapKitPowerupRespawnTriggerBox();

	UFUNCTION()
	void OnConstruction(const FTransform &Transform) override;

	// todo: @reminder: update as powerups change

	UPROPERTY(EditAnywhere, Category=Powerups, meta=(DisplayName = "Weapon Primary Laser", AllowPrivateAccess = "true"))
	bool WeaponPriLaser;

	UPROPERTY(EditAnywhere, Category=Powerups, meta=(DisplayName = "Weapon Primary Shred", AllowPrivateAccess = "true"))
	bool WeaponPriShred;

	UPROPERTY(EditAnywhere, Category=Powerups, meta=(DisplayName = "Weapon Primary Mech", AllowPrivateAccess = "true"))
	bool WeaponPriMech;

	UPROPERTY(EditAnywhere, Category=Powerups, meta=(DisplayName = "Weapon Primary Tox", AllowPrivateAccess = "true"))
	bool WeaponPriTox;

	UPROPERTY(EditAnywhere, Category=Powerups, meta=(DisplayName = "Weapon Primary Coil", AllowPrivateAccess = "true"))
	bool WeaponPriCoil;

	UPROPERTY(EditAnywhere, Category=Powerups, meta=(DisplayName = "Weapon Primary Phase", AllowPrivateAccess = "true"))
	bool WeaponPriPhase;

	UPROPERTY(EditAnywhere, Category=Powerups, meta=(DisplayName = "Weapon Primary Hydra", AllowPrivateAccess = "true"))
	bool WeaponPriHydra;

	UPROPERTY(EditAnywhere, Category=Powerups, meta=(DisplayName = "Weapon Primary Neutron", AllowPrivateAccess = "true"))
	bool WeaponPriNeutron;

	UPROPERTY(EditAnywhere, Category=Powerups, meta=(DisplayName = "Weapon Primary Hammer", AllowPrivateAccess = "true"))
	bool WeaponPriHammer;

	UPROPERTY(EditAnywhere, Category=Powerups, meta=(DisplayName = "Weapon Secondary Assault", AllowPrivateAccess = "true"))
	bool WeaponSecAssault;

	UPROPERTY(EditAnywhere, Category=Powerups, meta=(DisplayName = "Weapon Secondary Assault Pack", AllowPrivateAccess = "true"))
	bool WeaponSecAssaultPack;

	UPROPERTY(EditAnywhere, Category=Powerups, meta=(DisplayName = "Weapon Secondary Prowler", AllowPrivateAccess = "true"))
	bool WeaponSecProwler;

	UPROPERTY(EditAnywhere, Category=Powerups, meta=(DisplayName = "Weapon Secondary Prowler Pack", AllowPrivateAccess = "true"))
	bool WeaponSecProwlerPack;

	UPROPERTY(EditAnywhere, Category=Powerups, meta=(DisplayName = "Weapon Secondary RNA", AllowPrivateAccess = "true"))
	bool WeaponSecRNA;

	UPROPERTY(EditAnywhere, Category=Powerups, meta=(DisplayName = "Weapon Secondary Deadeye", AllowPrivateAccess = "true"))
	bool WeaponSecDeadeye;

	UPROPERTY(EditAnywhere, Category=Powerups, meta=(DisplayName = "Weapon Secondary Deadeye Pack", AllowPrivateAccess = "true"))
	bool WeaponSecDeadeyePack;

	UPROPERTY(EditAnywhere, Category=Powerups, meta=(DisplayName = "Weapon Secondary Vex", AllowPrivateAccess = "true"))
	bool WeaponSecVex;

	UPROPERTY(EditAnywhere, Category=Powerups, meta=(DisplayName = "Weapon Secondary Aftershock", AllowPrivateAccess = "true"))
	bool WeaponSecAftershock;

    UPROPERTY(EditAnywhere, Category=Powerups, meta=(DisplayName = "Weapon Tertiary Radial", AllowPrivateAccess = "true"))
    bool WeaponTetRadial;

    UPROPERTY(EditAnywhere, Category=Powerups, meta=(DisplayName = "Weapon Tertiary Radial", AllowPrivateAccess = "true"))
    bool WeaponTetRadialPack;

	UPROPERTY(EditAnywhere, Category=Powerups, meta=(DisplayName = "Weapon Tertiary Howler", AllowPrivateAccess = "true"))
	bool WeaponTetHowler;

    UPROPERTY(EditAnywhere, Category=Powerups, meta=(DisplayName = "Weapon Tertiary Howler", AllowPrivateAccess = "true"))
    bool WeaponTetHowlerPack;

    UPROPERTY(EditAnywhere, Category=Powerups, meta=(DisplayName = "Weapon Tertiary Bio", AllowPrivateAccess = "true"))
    bool WeaponTetBio;

    UPROPERTY(EditAnywhere, Category=Powerups, meta=(DisplayName = "Weapon Tertiary Bio", AllowPrivateAccess = "true"))
    bool WeaponTetBioPack;

	UPROPERTY(EditAnywhere, Category=Powerups, meta=(DisplayName = "Auxiliary Power", AllowPrivateAccess = "true"))
	bool AuxPower;

	UPROPERTY(EditAnywhere, Category=Powerups, meta=(DisplayName = "Auxiliary Shield", AllowPrivateAccess = "true"))
	bool AuxShield;

	UPROPERTY(EditAnywhere, Category=Powerups, meta=(DisplayName = "Auxiliary Conceal", AllowPrivateAccess = "true"))
	bool AuxConceal;

	UPROPERTY(EditAnywhere, Category=Powerups, meta=(DisplayName = "Auxiliary Invincible", AllowPrivateAccess = "true"))
	bool AuxInvincible;

	UPROPERTY(EditAnywhere, Category=Powerups, meta=(DisplayName = "Auxiliary Laser Coupler", AllowPrivateAccess = "true"))
	bool AuxLaserCoupler;

	UPROPERTY(EditAnywhere, Category=Powerups, meta=(DisplayName = "Auxiliary Navmap Reveal", AllowPrivateAccess = "true"))
	bool AuxNavmapReveal;

	UPROPERTY(EditAnywhere, Category=Powerups, meta=(DisplayName = "Auxiliary Ammo", AllowPrivateAccess = "true"))
	bool AuxAmmo;

	UPROPERTY(EditAnywhere, Category=Powerups, meta=(DisplayName = "Auxiliary Ammo Cache", AllowPrivateAccess = "true"))
	bool AuxAmmoCache;

	UPROPERTY(EditAnywhere, Category=Powerups, meta=(DisplayName = "Auxiliary Boost", AllowPrivateAccess = "true"))
	bool AuxBoost;

	UPROPERTY(EditAnywhere, Category=Powerups, meta=(DisplayName = "Auxiliary Power Transfer", AllowPrivateAccess = "true"))
	bool AuxPowerTransfer;

	UFUNCTION()
	FVector GetRandomLocationWithinBounds();

	UFUNCTION()
	bool Supports(EAscMapKitPowerupTypeEnum PowerupType);
};