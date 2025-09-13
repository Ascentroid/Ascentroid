#pragma once

// Generated
#include "AscMapKitLevelGeometryUtil.generated.h"

ASCMAPKIT_API DECLARE_DELEGATE_OneParam(FOnLevelMeshProcessing, FString);
ASCMAPKIT_API DECLARE_DELEGATE(FOnLevelMeshesNotFound);

// todo: quad support?

UCLASS(Blueprintable, BlueprintType)
class ASCMAPKIT_API UAscMapKitLevelGeometryUtil : public UObject
{
	GENERATED_BODY()

public:
	static TArray<FVector> GetRandomLocations(
		UWorld *World,
		const float &GeometryTraceMin = 500.f,
		const float &GeometryTraceMax = 50000.f,
		const float &CenterPointDistanceThreshold = 1000.f,
		const float &CenterPointTraceThreshold = 500.f,
		const float &LargeFaceDistanceThreshold = 400.f,
		const bool &bDrawDebugLines = false,
		const float &DrawDebugLinesDistance = 1000.f
	);

	static bool IsValidStaticMesh(const UStaticMesh *StaticMesh);

	// TArray<TPair<TriangleCenter, FaceNormal>>
	static TArray<TPair<FVector, FVector>> ExtractTriangleCenterAndFaceNormal(
		const FPositionVertexBuffer &PositionVertexBuffer,
		const FIndexArrayView &IndexBufferArray,
		const float &LargeFaceDistanceThreshold = 400.f
	);

	static FOnLevelMeshProcessing OnLevelMeshProcessing;
	static FOnLevelMeshesNotFound OnLevelMeshesNotFound;
};