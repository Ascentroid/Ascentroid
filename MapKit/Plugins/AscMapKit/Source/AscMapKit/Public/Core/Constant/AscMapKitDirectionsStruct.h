#pragma once

// Generated
#include "AscMapKitDirectionsStruct.generated.h"

USTRUCT(Blueprintable, BlueprintType)
struct ASCMAPKIT_API FAscMapKitDirectionsStruct
{
	GENERATED_BODY()

	static const FVector Forward;
	static const FVector Backward;
	static const FVector Right;
	static const FVector Left;
	static const FVector Up;
	static const FVector Down;
	static const FVector ForwardRight;
	static const FVector BackwardLeft;
	static const FVector ForwardLeft;
	static const FVector BackwardRight;
	static const FVector ForwardRightUp;
	static const FVector BackwardLeftUp;
	static const FVector ForwardLeftUp;
	static const FVector BackwardRightUp;
	static const FVector ForwardRightDown;
	static const FVector BackwardLeftDown;
	static const FVector ForwardLeftDown;
	static const FVector BackwardRightDown;

	static const TArray<FVector> UpDownLeftRight;

	static const TArray<FVector> UpDownLeftRightBackward;
	
	static const TArray<FVector> Directions;

	static const TMap<FVector, FVector> InverseDirectionMap;
};