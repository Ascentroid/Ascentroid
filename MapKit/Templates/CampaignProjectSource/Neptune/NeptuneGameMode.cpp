#include "NeptuneGameMode.h"
#include "NeptunePlayerPawn.h"

ANeptuneGameMode::ANeptuneGameMode() : Super()
{
    DefaultPawnClass = ANeptunePlayerPawn::StaticClass();
}