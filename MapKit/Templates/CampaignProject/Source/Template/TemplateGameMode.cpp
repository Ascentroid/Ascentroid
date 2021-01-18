#include "TemplateGameMode.h"
#include "TemplatePlayerPawn.h"

ATemplateGameMode::ATemplateGameMode() : Super()
{
    DefaultPawnClass = ATemplatePlayerPawn::StaticClass();
}