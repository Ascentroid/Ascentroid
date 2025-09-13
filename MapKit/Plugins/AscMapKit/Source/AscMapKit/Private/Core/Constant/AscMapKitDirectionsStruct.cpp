#include "AscMapKit/Public/Core/Constant/AscMapKitDirectionsStruct.h"

const FVector FAscMapKitDirectionsStruct::Forward = FVector(-1.f, 0.f, 0.f);
const FVector FAscMapKitDirectionsStruct::Backward = FVector(1.f, 0.f, 0.f);
const FVector FAscMapKitDirectionsStruct::Right = FVector(0.f, 1.f, 0.f);
const FVector FAscMapKitDirectionsStruct::Left = FVector(0.f, -1.f, 0.f);
const FVector FAscMapKitDirectionsStruct::Up = FVector(0.f, 0.f, 1.f);
const FVector FAscMapKitDirectionsStruct::Down = FVector(0.f, 0.f, -1.f);
const FVector FAscMapKitDirectionsStruct::ForwardRight = FVector(1.f, 1.f, 0.f);
const FVector FAscMapKitDirectionsStruct::BackwardLeft = FVector(-1.f, -1.f, 0.f);
const FVector FAscMapKitDirectionsStruct::ForwardLeft = FVector(1.f, -1.f, 0.f);
const FVector FAscMapKitDirectionsStruct::BackwardRight = FVector(-1.f, 1.f, 0.f);
const FVector FAscMapKitDirectionsStruct::ForwardRightUp = FVector(1.f, 1.f, 1.f);
const FVector FAscMapKitDirectionsStruct::BackwardLeftUp = FVector(-1.f, -1.f, 1.f);
const FVector FAscMapKitDirectionsStruct::ForwardLeftUp = FVector(1.f, -1.f, 1.f);
const FVector FAscMapKitDirectionsStruct::BackwardRightUp = FVector(-1.f, 1.f, 1.f);
const FVector FAscMapKitDirectionsStruct::ForwardRightDown = FVector(1.f, 1.f, -1.f);
const FVector FAscMapKitDirectionsStruct::BackwardLeftDown = FVector(-1.f, -1.f, -1.f);
const FVector FAscMapKitDirectionsStruct::ForwardLeftDown = FVector(1.f, -1.f, -1.f);
const FVector FAscMapKitDirectionsStruct::BackwardRightDown = FVector(-1.f, 1.f, -1.f);

const TArray<FVector> FAscMapKitDirectionsStruct::UpDownLeftRight = {
	Up, Down, Left, Right
};

const TArray<FVector> FAscMapKitDirectionsStruct::UpDownLeftRightBackward = {
	Up, Down, Left, Right, Backward
};

const TArray<FVector> FAscMapKitDirectionsStruct::Directions = {
	Forward,
	Backward,
	Right,
	Left,
	Up,
	Down,
	ForwardRight,
	BackwardLeft,
	ForwardLeft,
	BackwardRight,
	ForwardRightUp,
	BackwardLeftUp,
	ForwardLeftUp,
	BackwardRightUp,
	ForwardRightDown,
	BackwardLeftDown,
	ForwardLeftDown,
	BackwardRightDown
};

const TMap<FVector, FVector> FAscMapKitDirectionsStruct::InverseDirectionMap = {
    {Forward, Backward},
    {Backward, Forward},
    {Right, Left},
    {Left, Right},
    {Up, Down},
    {Down, Up},
    {ForwardRight, BackwardLeft},
    {BackwardLeft, ForwardRight},
    {ForwardLeft, BackwardRight},
    {BackwardRight, ForwardLeft},
    {ForwardRightUp, BackwardLeftDown},
    {BackwardLeftUp, ForwardRightDown},
    {ForwardLeftUp, BackwardRightDown},
    {BackwardRightUp, ForwardLeftDown},
    {ForwardRightDown, BackwardLeftUp},
    {BackwardLeftDown, ForwardRightUp},
    {ForwardLeftDown, BackwardRightUp},
    {BackwardRightDown, ForwardLeftUp}
};