#include "AscMapKit/Public/Door/AscMapKitDoorPlayerInteractBoundingBox.h"

UAscMapKitDoorPlayerInteractBoundingBox::UAscMapKitDoorPlayerInteractBoundingBox()
{
    LineThickness = 30.f;
}

// #if WITH_EDITOR
// void UAscMapKitDoorPlayerInteractBoundingBox::EditorUpdateEnemyType(EAscMapKitEnemyTypeEnum EnemyType)
// {
//     auto Extent = FVector::ZeroVector;
//
//     switch (EnemyType)
//     {
//         case EAscMapKitEnemyTypeEnum::AlienCylon:
//             Extent = FVector(741.235291f, 530.681641f, 226.318359f);
//             break;
//     }
//
//     SetBoxExtent(Extent);
// }
// #endif