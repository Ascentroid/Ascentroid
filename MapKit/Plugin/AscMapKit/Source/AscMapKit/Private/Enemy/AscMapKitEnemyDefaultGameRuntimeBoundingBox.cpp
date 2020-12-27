#include "AscMapKit/Public/Enemy/AscMapKitEnemyDefaultGameRuntimeBoundingBox.h"

UAscMapKitEnemyDefaultGameRuntimeBoundingBox::UAscMapKitEnemyDefaultGameRuntimeBoundingBox()
{
    LineThickness = 30.f;
}

#if WITH_EDITOR
void UAscMapKitEnemyDefaultGameRuntimeBoundingBox::EditorUpdateEnemyType(EAscMapKitEnemyTypeEnum EnemyType)
{
    auto Extent = FVector::ZeroVector;

    // todo: @reminder: update this as new enemies are created
    // todo: @reminder: these dimensions may change if we resize any meshes (you can get this from the logs, see AscEnemy->PostInitializeComponents())
    switch (EnemyType)
    {
        case EAscMapKitEnemyTypeEnum::AlienCylon:
            Extent = FVector(741.235291f, 530.681641f, 226.318359f);
            break;
        case EAscMapKitEnemyTypeEnum::AlienGrawn:
            Extent = FVector(452.353271f, 418.424072f, 204.271515f);
            break;
        case EAscMapKitEnemyTypeEnum::MachineAssaultCache:
            Extent = FVector(361.546387f, 529.189697f, 359.226898f);
            break;
        case EAscMapKitEnemyTypeEnum::MachineAssaultTank:
            Extent = FVector(478.058441f, 681.895996f, 412.099182f);
            break;
        case EAscMapKitEnemyTypeEnum::MachineSecureGage:
            Extent = FVector(685.165405f, 599.271606f, 351.767731f);
            break;
        case EAscMapKitEnemyTypeEnum::MachineGeminiTurret:
        case EAscMapKitEnemyTypeEnum::MachineSarkTurret:
        case EAscMapKitEnemyTypeEnum::MachineServasTurret:
            Extent = FVector(1000.f, 1000.f, 1000.f);
            break;
    }

    SetBoxExtent(Extent);
}
#endif