#include "AscMapKit/Public/Powerup/AscMapKitPowerupRespawnTriggerBox.h"

AAscMapKitPowerupRespawnTriggerBox::AAscMapKitPowerupRespawnTriggerBox()
{
    // todo: @reminder: update as powerups change
    // todo: @reminder: this volume uses the "Trigger" collision channel in UE4 by default
    // todo: @reminder: keep in mind, we may need a custom collision channel in the future if we end up building more trigger volumes

    WeaponPriLaser = true;
    WeaponPriShred = true;
    WeaponPriMech = true;
    WeaponPriTox = true;
    WeaponPriCoil = true;
    WeaponPriPhase = true;
    WeaponPriHydra = true;
    WeaponPriNeutron = true;
    WeaponPriHammer = true;
    WeaponSecAssault = true;
    WeaponSecAssaultPack = true;
    WeaponSecProwler = true;
    WeaponSecProwlerPack = true;
    WeaponSecRNA = true;
    WeaponSecDeadeye = true;
    WeaponSecDeadeyePack = true;
    WeaponSecVex = true;
    WeaponSecAftershock = true;
    WeaponTetRadial = true;
    WeaponTetRadialPack = true;
    WeaponTetBio = true;
    WeaponTetBioPack = true;
    WeaponTetHowler = true;
    WeaponTetHowlerPack = true;
    WeaponTetChaff = true;
    AuxPower = true;
    AuxShield = true;
    AuxConceal = true;
    AuxInvincible = true;
    AuxLaserCoupler = true;
    AuxNavmapReveal = true;
    AuxAmmo = true;
    AuxAmmoCache = true;
    AuxBoost = true;
    AuxPowerTransfer = true;
}

void AAscMapKitPowerupRespawnTriggerBox::OnConstruction(const FTransform &Transform)
{
    Super::OnConstruction(Transform);
}

FVector AAscMapKitPowerupRespawnTriggerBox::GetRandomLocationWithinBounds()
{
    return FMath::RandPointInBox(this->GetComponentsBoundingBox());
}

bool AAscMapKitPowerupRespawnTriggerBox::Supports(const EAscMapKitPowerupTypeEnum PowerupType)
{
    // todo: @reminder: update as powerups change

    switch (PowerupType)
    {
        case EAscMapKitPowerupTypeEnum::PriLaser:
            return WeaponPriLaser;
        case EAscMapKitPowerupTypeEnum::PriShred:
            return WeaponPriShred;
        case EAscMapKitPowerupTypeEnum::PriMech:
            return WeaponPriMech;
        case EAscMapKitPowerupTypeEnum::PriTox:
            return WeaponPriTox;
        case EAscMapKitPowerupTypeEnum::PriCoil:
            return WeaponPriCoil;
        case EAscMapKitPowerupTypeEnum::PriPhase:
            return WeaponPriPhase;
        case EAscMapKitPowerupTypeEnum::PriHydra:
            return WeaponPriHydra;
        case EAscMapKitPowerupTypeEnum::PriNeutron:
            return WeaponPriNeutron;
        //case EAscMapKitPowerupTypeEnum::PriHammer: // todo: @hammer
        //    return WeaponPriHammer;
        case EAscMapKitPowerupTypeEnum::SecAssault:
            return WeaponSecAssault;
        case EAscMapKitPowerupTypeEnum::SecAssaultPack:
            return WeaponSecAssaultPack;
        case EAscMapKitPowerupTypeEnum::SecProwler:
            return WeaponSecProwler;
        case EAscMapKitPowerupTypeEnum::SecProwlerPack:
            return WeaponSecProwlerPack;
        case EAscMapKitPowerupTypeEnum::SecRNA:
            return WeaponSecRNA;
        case EAscMapKitPowerupTypeEnum::SecDeadeye:
            return WeaponSecDeadeye;
        case EAscMapKitPowerupTypeEnum::SecDeadeyePack:
            return WeaponSecDeadeyePack;
        case EAscMapKitPowerupTypeEnum::SecVex:
            return WeaponSecVex;
        case EAscMapKitPowerupTypeEnum::SecAftershock:
            return WeaponSecAftershock;
        case EAscMapKitPowerupTypeEnum::TetRadial:
            return WeaponTetRadial;
        case EAscMapKitPowerupTypeEnum::TetRadialPack:
            return WeaponTetRadialPack;
        case EAscMapKitPowerupTypeEnum::TetBio:
            return WeaponTetBio;
        case EAscMapKitPowerupTypeEnum::TetBioPack:
            return WeaponTetBioPack;
        case EAscMapKitPowerupTypeEnum::TetHowler:
            return WeaponTetHowler;
        case EAscMapKitPowerupTypeEnum::TetHowlerPack:
            return WeaponTetHowlerPack;
        case EAscMapKitPowerupTypeEnum::TetChaff:
            return WeaponTetChaff;
        case EAscMapKitPowerupTypeEnum::AuxPower:
            return AuxPower;
        case EAscMapKitPowerupTypeEnum::AuxShield:
            return AuxShield;
        case EAscMapKitPowerupTypeEnum::AuxConceal:
            return AuxConceal;
        case EAscMapKitPowerupTypeEnum::AuxInvincible:
            return AuxInvincible;
        case EAscMapKitPowerupTypeEnum::AuxLaserCoupler:
            return AuxLaserCoupler;
        case EAscMapKitPowerupTypeEnum::AuxNavmapReveal:
            return AuxNavmapReveal;
        case EAscMapKitPowerupTypeEnum::AuxAmmo:
            return AuxAmmo;
        case EAscMapKitPowerupTypeEnum::AuxAmmoCache:
            return AuxAmmoCache;
        case EAscMapKitPowerupTypeEnum::AuxBoost:
            return AuxBoost;
        case EAscMapKitPowerupTypeEnum::AuxPowerTransfer:
            return AuxPowerTransfer;
    }

    return false;
}