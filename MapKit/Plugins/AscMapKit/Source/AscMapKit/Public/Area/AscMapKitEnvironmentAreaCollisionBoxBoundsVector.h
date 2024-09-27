#pragma once

// Generated
#include "AscMapKitEnvironmentAreaCollisionBoxBoundsVector.generated.h"

USTRUCT(BlueprintType)
struct FAscMapKitEnvironmentAreaCollisionBoxBoundsVector
{
	GENERATED_BODY()

	FAscMapKitEnvironmentAreaCollisionBoxBoundsVector() : X(0.f), Y(0.f), Z(0.f) {}

	UPROPERTY(EditAnywhere, Category = "Collision Box Bounds", meta = (DisplayName = "X"))
	float X;

	UPROPERTY(EditAnywhere, Category = "Collision Box Bounds", meta = (DisplayName = "Y"))
	float Y;

	UPROPERTY(EditAnywhere, Category = "Collision Box Bounds", meta = (DisplayName = "Z"))
	float Z;

	FVector ToFVector() const { return FVector(X, Y, Z); }
};