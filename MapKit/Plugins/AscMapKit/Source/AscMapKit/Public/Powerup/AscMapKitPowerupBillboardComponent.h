#pragma once

// UE
#include "Runtime/Engine/Classes/Components/BillboardComponent.h"

// Ascentroid
#include "AscMapKitPowerupPropertiesStruct.h"

// Generated
#include "AscMapKitPowerupBillboardComponent.generated.h"

UCLASS()
class ASCMAPKIT_API UAscMapKitPowerupBillboardComponent : public UBillboardComponent
{
    GENERATED_BODY()

public:
    UAscMapKitPowerupBillboardComponent();

    UPROPERTY()
    UTexture2D *CurrentTexture;

#if WITH_EDITOR
    UFUNCTION()
    void EditorUpdatePowerupType(const FAscMapKitPowerupPropertiesStruct &MapKit);
#endif

private:
    UPROPERTY()
    UTexture2D *AuxAmmoTexture;

    UPROPERTY()
    UTexture2D *AuxAmmoCacheTexture;

    UPROPERTY()
    UTexture2D *AuxBoostTexture;

    UPROPERTY()
    UTexture2D *AuxConcealTexture;

    UPROPERTY()
    UTexture2D *AuxInvincibleTexture;

    UPROPERTY()
    UTexture2D *AuxLaserCouplerTexture;
    
    UPROPERTY()
    UTexture2D *AuxNavmapRevealTexture;

    UPROPERTY()
    UTexture2D *AuxPowerTexture;

    UPROPERTY()
    UTexture2D *AuxPowerTransferTexture;

    UPROPERTY()
    UTexture2D *AuxShieldTexture;
    
    UPROPERTY()
    UTexture2D *PriLaserTexture;

    UPROPERTY()
    UTexture2D *PriShredTexture;

    UPROPERTY()
    UTexture2D *PriMechTexture;

    UPROPERTY()
    UTexture2D *PriToxTexture;

    UPROPERTY()
    UTexture2D *PriCoilTexture;

    UPROPERTY()
    UTexture2D *PriPhaseTexture;

    UPROPERTY()
    UTexture2D *PriHydraTexture;

    UPROPERTY()
    UTexture2D *PriNeutronTexture;

    UPROPERTY()
    UTexture2D *SecAssaultTexture;

    UPROPERTY()
    UTexture2D *SecAssaultPackTexture;

    UPROPERTY()
    UTexture2D *SecProwlerTexture;

    UPROPERTY()
    UTexture2D *SecProwlerPackTexture;

    UPROPERTY()
    UTexture2D *SecRNATexture;

    UPROPERTY()
    UTexture2D *SecDeadeyeTexture;

    UPROPERTY()
    UTexture2D *SecDeadeyePackTexture;

    UPROPERTY()
    UTexture2D *SecVexTexture;

    UPROPERTY()
    UTexture2D *SecAftershockTexture;

    UPROPERTY()
    UTexture2D *TetChaffTexture;
    
    UPROPERTY()
    UTexture2D *TetBioTexture;

    UPROPERTY()
    UTexture2D *TetBioPackTexture;

    UPROPERTY()
    UTexture2D *TetHowlerTexture;

    UPROPERTY()
    UTexture2D *TetHowlerPackTexture;

    UPROPERTY()
    UTexture2D *TetRadialTexture;

    UPROPERTY()
    UTexture2D *TetRadialPackTexture;
};
