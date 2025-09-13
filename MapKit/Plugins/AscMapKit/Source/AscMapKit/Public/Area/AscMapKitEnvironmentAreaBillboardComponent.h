#pragma once

// UE
#include "Runtime/Engine/Classes/Components/BillboardComponent.h"

// Ascentroid
#include "AscMapKit/Public/Area/AscMapKitEnvironmentAreaTypeEnum.h"

// Generated
#include "AscMapKitEnvironmentAreaBillboardComponent.generated.h"

UCLASS(Blueprintable)
class ASCMAPKIT_API UAscMapKitEnvironmentAreaBillboardComponent : public UBillboardComponent
{
    GENERATED_BODY()

public:
    UAscMapKitEnvironmentAreaBillboardComponent();

#if WITH_EDITOR
    UFUNCTION()
    void EditorUpdateEnvironmentAreaType(EAscMapKitEnvironmentAreaTypeEnum EnvironmentAreaType);
#endif

private:
    UPROPERTY()
    UTexture2D *UnknownTexture;

    UPROPERTY()
    UTexture2D *AcidTexture;

    UPROPERTY()
    UTexture2D *ElectricTexture;

    UPROPERTY()
    UTexture2D *EnemyGeneratorTexture;

    UPROPERTY()
    UTexture2D *LavaTexture;

    UPROPERTY()
    UTexture2D *LiquidTexture;
    
    UPROPERTY()
    UTexture2D *PowerStationTexture;

    UPROPERTY()
    UTexture2D *ShieldStationTexture;

    UPROPERTY()
    UTexture2D *SludgeTexture;
};