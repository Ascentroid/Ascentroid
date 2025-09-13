#include "AscMapKit/Public/Area/AscMapKitEnvironmentAreaBillboardComponent.h"

// UE
#include "Runtime/CoreUObject/Public/UObject/ConstructorHelpers.h"

UAscMapKitEnvironmentAreaBillboardComponent::UAscMapKitEnvironmentAreaBillboardComponent()
{
    const ConstructorHelpers::FObjectFinder<UTexture2D> UnknownTextureRef(TEXT("Texture2D'/AscMapKit/Editor/Sprites/Shared/T_Editor_Sprites_Shared_Unknown.T_Editor_Sprites_Shared_Unknown'"));
    const ConstructorHelpers::FObjectFinder<UTexture2D> AcidTextureRef(TEXT("Texture2D'/AscMapKit/Editor/Sprites/Area/T_Editor_Sprites_Area_EnvironmentArea_Acid.T_Editor_Sprites_Area_EnvironmentArea_Acid'"));
    const ConstructorHelpers::FObjectFinder<UTexture2D> ElectricTextureRef(TEXT("Texture2D'/AscMapKit/Editor/Sprites/Area/T_Editor_Sprites_Area_EnvironmentArea_Electric.T_Editor_Sprites_Area_EnvironmentArea_Electric'"));
    const ConstructorHelpers::FObjectFinder<UTexture2D> EnemyGeneratorTextureRef(TEXT("Texture2D'/AscMapKit/Editor/Sprites/Area/T_Editor_Sprites_Area_EnvironmentArea_EnemyGenerator.T_Editor_Sprites_Area_EnvironmentArea_EnemyGenerator'"));
    const ConstructorHelpers::FObjectFinder<UTexture2D> LavaTextureRef(TEXT("Texture2D'/AscMapKit/Editor/Sprites/Area/T_Editor_Sprites_Area_EnvironmentArea_Lava.T_Editor_Sprites_Area_EnvironmentArea_Lava'"));
    const ConstructorHelpers::FObjectFinder<UTexture2D> LiquidTextureRef(TEXT("Texture2D'/AscMapKit/Editor/Sprites/Area/T_Editor_Sprites_Area_EnvironmentArea_Liquid.T_Editor_Sprites_Area_EnvironmentArea_Liquid'"));
    const ConstructorHelpers::FObjectFinder<UTexture2D> PowerStationTextureRef(TEXT("Texture2D'/AscMapKit/Editor/Sprites/Area/T_Editor_Sprites_Area_EnvironmentArea_PowerStation.T_Editor_Sprites_Area_EnvironmentArea_PowerStation'"));
    const ConstructorHelpers::FObjectFinder<UTexture2D> ShieldStationTextureRef(TEXT("Texture2D'/AscMapKit/Editor/Sprites/Area/T_Editor_Sprites_Area_EnvironmentArea_ShieldStation.T_Editor_Sprites_Area_EnvironmentArea_ShieldStation'"));
    const ConstructorHelpers::FObjectFinder<UTexture2D> SludgeTextureRef(TEXT("Texture2D'/AscMapKit/Editor/Sprites/Area/T_Editor_Sprites_Area_EnvironmentArea_Sludge.T_Editor_Sprites_Area_EnvironmentArea_Sludge'"));

    if (UnknownTextureRef.Succeeded())
        UnknownTexture = UnknownTextureRef.Object;

    if (AcidTextureRef.Succeeded())
        AcidTexture = AcidTextureRef.Object;

    if (ElectricTextureRef.Succeeded())
        ElectricTexture = ElectricTextureRef.Object;

    if (EnemyGeneratorTextureRef.Succeeded())
        EnemyGeneratorTexture = EnemyGeneratorTextureRef.Object;

    if (LavaTextureRef.Succeeded())
        LavaTexture = LavaTextureRef.Object;

    if (LiquidTextureRef.Succeeded())
        LiquidTexture = LiquidTextureRef.Object;
    
    if (PowerStationTextureRef.Succeeded())
        PowerStationTexture = PowerStationTextureRef.Object;

    if (ShieldStationTextureRef.Succeeded())
        ShieldStationTexture = ShieldStationTextureRef.Object;

    if (SludgeTextureRef.Succeeded())
        SludgeTexture = SludgeTextureRef.Object;
}

#if WITH_EDITOR
void UAscMapKitEnvironmentAreaBillboardComponent::EditorUpdateEnvironmentAreaType(EAscMapKitEnvironmentAreaTypeEnum EnvironmentAreaType)
{
    SetSprite(nullptr);

    switch (EnvironmentAreaType)
    {
        case EAscMapKitEnvironmentAreaTypeEnum::Unknown:
            SetSprite(UnknownTexture);
            break;
        case EAscMapKitEnvironmentAreaTypeEnum::Acid:
            SetSprite(AcidTexture);
            break;
        case EAscMapKitEnvironmentAreaTypeEnum::Electric:
            SetSprite(ElectricTexture);
            break;
        case EAscMapKitEnvironmentAreaTypeEnum::EnemyGenerator:
            SetSprite(EnemyGeneratorTexture);
            break;
        case EAscMapKitEnvironmentAreaTypeEnum::Lava:
            SetSprite(LavaTexture);
            break;
        case EAscMapKitEnvironmentAreaTypeEnum::Liquid:
            SetSprite(LiquidTexture);
            break;
        case EAscMapKitEnvironmentAreaTypeEnum::PowerStationWithoutEffects:
        case EAscMapKitEnvironmentAreaTypeEnum::PowerStationWithEffects:
            SetSprite(PowerStationTexture);
            break;
        case EAscMapKitEnvironmentAreaTypeEnum::ShieldStationWithoutEffects:
        case EAscMapKitEnvironmentAreaTypeEnum::ShieldStationWithEffects:
            SetSprite(ShieldStationTexture);
            break;
        case EAscMapKitEnvironmentAreaTypeEnum::Sludge:
            SetSprite(SludgeTexture);
            break;
    }
}
#endif