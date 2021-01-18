#include "AscMapKit/Public/Enemy/AscMapKitEnemyBillboardComponent.h"
#include "Runtime/CoreUObject/Public/UObject/ConstructorHelpers.h"

UAscMapKitEnemyBillboardComponent::UAscMapKitEnemyBillboardComponent()
{
    // todo: @reminder: update this as new enemies are created
    const ConstructorHelpers::FObjectFinder<UTexture2D> AlienCylonTextureRef(TEXT("Texture2D'/AscMapKit/Editor/Sprites/Enemy/T_Editor_Sprites_Enemy_AlienCylon.T_Editor_Sprites_Enemy_AlienCylon'"));
    const ConstructorHelpers::FObjectFinder<UTexture2D> AlienGrawnTextureRef(TEXT("Texture2D'/AscMapKit/Editor/Sprites/Enemy/T_Editor_Sprites_Enemy_AlienGrawn.T_Editor_Sprites_Enemy_AlienGrawn'"));
    const ConstructorHelpers::FObjectFinder<UTexture2D> MachineAssaultCacheTextureRef(TEXT("Texture2D'/AscMapKit/Editor/Sprites/Enemy/T_Editor_Sprites_Enemy_MachineAssaultCache.T_Editor_Sprites_Enemy_MachineAssaultCache'"));
    const ConstructorHelpers::FObjectFinder<UTexture2D> MachineAssaultTankTextureRef(TEXT("Texture2D'/AscMapKit/Editor/Sprites/Enemy/T_Editor_Sprites_Enemy_MachineAssaultTank.T_Editor_Sprites_Enemy_MachineAssaultTank'"));
    const ConstructorHelpers::FObjectFinder<UTexture2D> MachineGeminiTurretTextureRef(TEXT("Texture2D'/AscMapKit/Editor/Sprites/Enemy/T_Editor_Sprites_Enemy_MachineGeminiTurret.T_Editor_Sprites_Enemy_MachineGeminiTurret'"));
    const ConstructorHelpers::FObjectFinder<UTexture2D> MachineSarkTurretTextureRef(TEXT("Texture2D'/AscMapKit/Editor/Sprites/Enemy/T_Editor_Sprites_Enemy_MachineSarkTurret.T_Editor_Sprites_Enemy_MachineSarkTurret'"));
    const ConstructorHelpers::FObjectFinder<UTexture2D> MachineSecureGageTextureRef(TEXT("Texture2D'/AscMapKit/Editor/Sprites/Enemy/T_Editor_Sprites_Enemy_MachineSecureGage.T_Editor_Sprites_Enemy_MachineSecureGage'"));
    const ConstructorHelpers::FObjectFinder<UTexture2D> MachineServasTurretTextureRef(TEXT("Texture2D'/AscMapKit/Editor/Sprites/Enemy/T_Editor_Sprites_Enemy_MachineServasTurret.T_Editor_Sprites_Enemy_MachineServasTurret'"));

    if (AlienCylonTextureRef.Succeeded())
        AlienCylonTexture = AlienCylonTextureRef.Object;

    if (AlienGrawnTextureRef.Succeeded())
        AlienGrawnTexture = AlienGrawnTextureRef.Object;

    if (MachineAssaultCacheTextureRef.Succeeded())
        MachineAssaultCacheTexture = MachineAssaultCacheTextureRef.Object;

    if (MachineAssaultTankTextureRef.Succeeded())
        MachineAssaultTankTexture = MachineAssaultTankTextureRef.Object;

    if (MachineGeminiTurretTextureRef.Succeeded())
        MachineGeminiTurretTexture = MachineGeminiTurretTextureRef.Object;

    if (MachineSarkTurretTextureRef.Succeeded())
        MachineSarkTurretTexture = MachineSarkTurretTextureRef.Object;

    if (MachineSecureGageTextureRef.Succeeded())
        MachineSecureGageTexture = MachineSecureGageTextureRef.Object;

    if (MachineServasTurretTextureRef.Succeeded())
        MachineServasTurretTexture = MachineServasTurretTextureRef.Object;
}

#if WITH_EDITOR
void UAscMapKitEnemyBillboardComponent::EditorUpdateEnemyType(const EAscMapKitEnemyTypeEnum EnemyType)
{
    SetSprite(nullptr);

    // todo: @reminder: update this as new enemies are created
    switch (EnemyType)
    {
        case EAscMapKitEnemyTypeEnum::AlienCylon:
            SetSprite(AlienCylonTexture);
            break;
        case EAscMapKitEnemyTypeEnum::AlienGrawn:
            SetSprite(AlienGrawnTexture);
            break;
        case EAscMapKitEnemyTypeEnum::MachineAssaultCache:
            SetSprite(MachineAssaultCacheTexture);
            break;
        case EAscMapKitEnemyTypeEnum::MachineAssaultTank:
            SetSprite(MachineAssaultTankTexture);
            break;
        case EAscMapKitEnemyTypeEnum::MachineGeminiTurret:
            SetSprite(MachineGeminiTurretTexture);
            break;
        case EAscMapKitEnemyTypeEnum::MachineSarkTurret:
            SetSprite(MachineSarkTurretTexture);
            break;
        case EAscMapKitEnemyTypeEnum::MachineSecureGage:
            SetSprite(MachineSecureGageTexture);
            break;
        case EAscMapKitEnemyTypeEnum::MachineServasTurret:
            SetSprite(MachineServasTurretTexture);
            break;
    }

    CurrentTexture = Sprite;
}
#endif