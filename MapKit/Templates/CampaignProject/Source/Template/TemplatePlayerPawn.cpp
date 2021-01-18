#include "TemplatePlayerPawn.h"
#include "GameFramework/PawnMovementComponent.h"

ATemplatePlayerPawn::ATemplatePlayerPawn() : Super()
{
}

void ATemplatePlayerPawn::PostInitializeComponents()
{
    Super::PostInitializeComponents();

    FloatingPawnMovement = Cast<UFloatingPawnMovement>(GetMovementComponent());

    // note: change these values if you want more control over your in-game map testing movement speed, etc.
    FloatingPawnMovement->MaxSpeed = 100000.f;
    FloatingPawnMovement->Acceleration = 50000.f;
    FloatingPawnMovement->Deceleration = 50000.f;
}