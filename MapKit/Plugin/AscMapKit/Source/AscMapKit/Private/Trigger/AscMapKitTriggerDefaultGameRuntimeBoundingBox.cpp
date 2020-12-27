#include "AscMapKit/Public/Trigger/AscMapKitTriggerDefaultGameRuntimeBoundingBox.h"

UAscMapKitTriggerDefaultGameRuntimeBoundingBox::UAscMapKitTriggerDefaultGameRuntimeBoundingBox()
{
    LineThickness = 30.f;
}

#if WITH_EDITOR
void UAscMapKitTriggerDefaultGameRuntimeBoundingBox::EditorUpdateTriggerType(EAscMapKitTriggerTypeEnum TriggerType)
{
    auto Extent = FVector::ZeroVector;

    // todo: @reminder: update this as new triggers are created
    // todo: @reminder: these dimensions may change if we resize any meshes (you can get this from the logs, see AscTrigger->PostInitializeComponents())
    switch (TriggerType)
    {
        case EAscMapKitTriggerTypeEnum::Basic001:
            Extent = FVector(134.932587f, 353.755127f, 228.759186f);
            break;
    }

    SetBoxExtent(Extent);
}
#endif