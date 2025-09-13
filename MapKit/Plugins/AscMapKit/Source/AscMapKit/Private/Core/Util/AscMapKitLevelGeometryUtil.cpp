#include "AscMapKit/Public/Core/Util/AscMapKitLevelGeometryUtil.h"

// UE
#include "Runtime/Engine/Classes/Components/BoxComponent.h"
#include "Runtime/Engine/Classes/Components/HierarchicalInstancedStaticMeshComponent.h"
#include "Runtime/Engine/Classes/Engine/StaticMeshActor.h"
#include "Runtime/Engine/Classes/Kismet/GameplayStatics.h"
#include "Runtime/Engine/Public/DrawDebugHelpers.h"
#include "Runtime/Engine/Public/EngineUtils.h"

// Ascentroid
#include "AscMapKit/Public/Core/Constant/AscMapKitDirectionsStruct.h"

TArray<FVector> UAscMapKitLevelGeometryUtil::GetRandomLocations(
	UWorld *World,
	const float &GeometryTraceMin,
	const float &GeometryTraceMax,
	const float &CenterPointDistanceThreshold,
	const float &CenterPointTraceThreshold,
	const float &LargeFaceDistanceThreshold,
	const bool &bDrawDebugLines,
	const float &DrawDebugLinesDistance
)
{
	TArray<FVector> Results;

	if (World == nullptr)
		return Results;

	TMap<FVector, FVector> FaceMap;

	for (FActorIterator ActorItr(World); ActorItr; ++ActorItr)
	{
		const auto Actor = *ActorItr;
		
		if (Actor == nullptr)
			continue;

		if (!Actor->ActorHasTag(TEXT("Level")))
			continue;

		for (const auto &Component : Actor->GetComponents())
		{
			if (Component->IsA(UInstancedStaticMeshComponent::StaticClass()))
			{
				const auto InstancedStaticMeshComponent = Cast<UInstancedStaticMeshComponent>(Component);

				if (InstancedStaticMeshComponent)
				{
					const auto StaticMesh = InstancedStaticMeshComponent->GetStaticMesh();

					if (IsValidStaticMesh(StaticMesh))
					{
						for (int32 LODIndex = 0; LODIndex < StaticMesh->GetNumLODs(); ++LODIndex)
						{
							const auto &LODResource = StaticMesh->RenderData->LODResources[LODIndex];
							const auto &PositionVertexBuffer = LODResource.VertexBuffers.PositionVertexBuffer;
							const auto &IndexBufferArray = LODResource.IndexBuffer.GetArrayView();

							if (PositionVertexBuffer.GetNumVertices() == 0 || IndexBufferArray.Num() == 0)
								continue;

							for (auto InstanceIndex = 0; InstanceIndex < InstancedStaticMeshComponent->GetInstanceCount(); ++InstanceIndex)
							{
								FTransform InstanceTransform;
								InstancedStaticMeshComponent->GetInstanceTransform(InstanceIndex, InstanceTransform, true);

								const auto TriangleCenterAndFaceNormals = ExtractTriangleCenterAndFaceNormal(PositionVertexBuffer, IndexBufferArray, LargeFaceDistanceThreshold);

								for (const auto &Item : TriangleCenterAndFaceNormals)
								{
									if (!Item.Key.IsZero() && !Item.Value.IsZero())
									{
										const auto WorldCenter = InstanceTransform.TransformPosition(Item.Key);
										const auto WorldNormal = InstanceTransform.TransformVectorNoScale(Item.Value);

										FaceMap.Add(WorldCenter, WorldNormal);

										if (bDrawDebugLines)
											DrawDebugLine(World, WorldCenter, WorldCenter + WorldNormal * -DrawDebugLinesDistance, FColor::Green, true, -1.f, 0, 30.f);
									}
								}
							}
						}
					}
				}
			}

			if (Component->IsA(UHierarchicalInstancedStaticMeshComponent::StaticClass()))
			{
				const auto HierarchicalInstancedStaticMeshComponent = Cast<UHierarchicalInstancedStaticMeshComponent>(Component);

				if (HierarchicalInstancedStaticMeshComponent)
				{
					const auto StaticMesh = HierarchicalInstancedStaticMeshComponent->GetStaticMesh();

					if (IsValidStaticMesh(StaticMesh))
					{
						for (auto LODIndex = 0; LODIndex < StaticMesh->GetNumLODs(); ++LODIndex)
						{
							const auto &LODResource = StaticMesh->RenderData->LODResources[LODIndex];
							const auto &PositionVertexBuffer = LODResource.VertexBuffers.PositionVertexBuffer;
							const auto &IndexBufferArray = LODResource.IndexBuffer.GetArrayView();

							if (PositionVertexBuffer.GetNumVertices() == 0 || IndexBufferArray.Num() == 0)
								continue;

							for (auto InstanceIndex = 0; InstanceIndex < HierarchicalInstancedStaticMeshComponent->GetInstanceCount(); ++InstanceIndex)
							{
								FTransform InstanceTransform;
								HierarchicalInstancedStaticMeshComponent->GetInstanceTransform(InstanceIndex, InstanceTransform, true);

								const auto TriangleCenterAndFaceNormals = ExtractTriangleCenterAndFaceNormal(PositionVertexBuffer, IndexBufferArray, LargeFaceDistanceThreshold);

								for (const auto &Item : TriangleCenterAndFaceNormals)
								{
									if (!Item.Key.IsZero() && !Item.Value.IsZero())
									{
										const auto WorldCenter = InstanceTransform.TransformPosition(Item.Key);
										const auto WorldNormal = InstanceTransform.TransformVectorNoScale(Item.Value);

										FaceMap.Add(WorldCenter, WorldNormal);

										if (bDrawDebugLines)
											DrawDebugLine(World, WorldCenter, WorldCenter + WorldNormal * -DrawDebugLinesDistance, FColor::Green, true, -1.f, 0, 30.f);
									}
								}
							}
						}
					}
				}
			}
		}

		if (Actor->IsA(AStaticMeshActor::StaticClass()))
		{
			const auto StaticMeshActor = Cast<AStaticMeshActor>(Actor);

			if (StaticMeshActor == nullptr)
				continue;

			const auto StaticMeshComponent = StaticMeshActor->GetStaticMeshComponent();
			const auto StaticMeshComponentTransform = StaticMeshActor->GetStaticMeshComponent()->GetComponentTransform();
			const auto StaticMesh = StaticMeshComponent->GetStaticMesh();
			const auto StaticMeshActorName = StaticMeshActor->GetName();

			if (IsValidStaticMesh(StaticMesh))
			{
				if (OnLevelMeshProcessing.IsBound())
				{
					OnLevelMeshProcessing.Execute(*StaticMeshActorName);
					//UAscMapKitLevelGeometryUtil::ShowInfoMessage(FString::Printf(TEXT("Processing Level Mesh: (%s)"), *StaticMeshActorName));
				}

				for (auto LODIndex = 0; LODIndex < StaticMesh->GetNumLODs(); ++LODIndex)
				{
					const auto &LODResource = StaticMesh->RenderData->LODResources[LODIndex];
					const auto &PositionVertexBuffer = LODResource.VertexBuffers.PositionVertexBuffer;
					const auto &IndexBufferArray = LODResource.IndexBuffer.GetArrayView();

					if (PositionVertexBuffer.GetNumVertices() == 0 || IndexBufferArray.Num() == 0)
						continue;

					const auto TriangleCenterAndFaceNormals = ExtractTriangleCenterAndFaceNormal(PositionVertexBuffer, IndexBufferArray, LargeFaceDistanceThreshold);

					for (const auto &Item : TriangleCenterAndFaceNormals)
					{
						if (!Item.Key.IsZero() && !Item.Value.IsZero())
						{
							const auto WorldCenter = StaticMeshComponentTransform.TransformPosition(Item.Key);
							const auto WorldNormal = StaticMeshComponentTransform.TransformVectorNoScale(Item.Value);

							FaceMap.Add(WorldCenter, WorldNormal);

							if (bDrawDebugLines)
								DrawDebugLine(World, WorldCenter, WorldCenter + WorldNormal * -DrawDebugLinesDistance, FColor::Green, true, -1.f, 0, 30.f);
						}
					}
				}
			}
		}
	}

	for (const auto &Entry : FaceMap)
	{
		const auto WorldCenter = Entry.Key;
		const auto WorldNormal = Entry.Value;

		if (WorldCenter.IsZero() || WorldNormal.IsZero())
			continue;

		const auto StartLocation = WorldCenter;
		const auto EndLocation = WorldCenter + WorldNormal * -100000.f;

		FHitResult HitResult;

		const FName TraceTag("Geometry_Helper_LineOfSight_Trace");

		auto TargetTraceParams = FCollisionQueryParams(TraceTag, true);
		TargetTraceParams.bTraceComplex = true;
		TargetTraceParams.bReturnPhysicalMaterial = false;
		TargetTraceParams.TraceTag = TraceTag;

		World->LineTraceSingleByChannel(HitResult, StartLocation, EndLocation, ECC_Visibility, TargetTraceParams);

		if (HitResult.IsValidBlockingHit() && HitResult.Distance > GeometryTraceMin && HitResult.Distance < GeometryTraceMax)
		{
			// DrawDebugSphere(
			// 	World,
			// 	StartLocation,
			// 	100.f,
			// 	6,
			// 	FColor::Orange,
			// 	true,
			// 	-1.f,
			// 	0.f,
			// 	20.f
			// );
			//
			// DrawDebugSphere(
			// 	World,
			// 	HitResult.Location,
			// 	100.f,
			// 	6,
			// 	FColor::Orange,
			// 	true,
			// 	-1.f,
			// 	0.f,
			// 	20.f
			// );

			//if (HitResult.GetActor())
			//	UAscMapKitLevelGeometryUtil::ShowInfoMessage(FString::Printf(TEXT("Hit actor: %s"), *HitResult.GetActor()->GetHumanReadableName()));

			const auto CenterPoint = (StartLocation + HitResult.Location) * 0.5f;

			auto bIsCenterPointTooCloseToExisting = false;

			for (const auto &ExistingCenterPoint : Results)
			{
				const auto DistanceFromCenterPointToExisting = FMath::Abs((ExistingCenterPoint - CenterPoint).Size());

				// UAscMapKitLevelGeometryUtil::ShowInfoMessage(FString::Printf(TEXT("DistanceFromCenterPointToExisting: %f"), DistanceFromCenterPointToExisting));

				if (DistanceFromCenterPointToExisting < CenterPointDistanceThreshold)
				{
					bIsCenterPointTooCloseToExisting = true;
					break;
				}
			}

			if (!bIsCenterPointTooCloseToExisting)
			{
				auto bIsCenterPointTooCloseToSomething = false;

				for (const FVector &Direction : FAscMapKitDirectionsStruct::Directions)
				{
					FVector TraceEnd = CenterPoint + (Direction * CenterPointTraceThreshold);

					FHitResult RadiusHitResult;

					bool bHit = World->LineTraceSingleByChannel(
						RadiusHitResult,
						CenterPoint,
						TraceEnd,
						ECC_Visibility
					);

					if (bHit)
					{
						bIsCenterPointTooCloseToSomething = true;
						break;
					}

					// const auto Shape = FCollisionShape::MakeBox(FVector(500.f, 500.f, 500.f));
					//
					// FHitResult LastHitResult;
					// World->SweepSingleByChannel(LastHitResult, CenterPoint, CenterPoint * 1.001f, FQuat::Identity, ECC_WorldStatic, Shape);
					//
					// if (LastHitResult.bBlockingHit && LastHitResult.GetActor() != nullptr && LastHitResult.GetActor()->ActorHasTag(TEXT("Level")))
					// {
					// 	bIsCenterPointTooCloseToSomething = true;
					// 	break;
					// }
					//
					// if (bDrawDebugLines)
					// 	DrawDebugBox(
					// 		World,
					// 		CenterPoint,
					// 		Shape.GetExtent(),
					// 		FColor::Orange,
					// 		true,
					// 		-1.f,
					// 		0,
					// 		30.f
					// 	);
				}

				if (!bIsCenterPointTooCloseToSomething)
					Results.Add(CenterPoint);
			}
		}

		return Results;
	}

	if (OnLevelMeshesNotFound.IsBound())
	{
		OnLevelMeshesNotFound.Execute();
		//UAscMapKitLevelGeometryUtil::ShowWarnMessage(TEXT("No meshes were found (AStaticMeshActor)."));
	}

	return Results;
}

bool UAscMapKitLevelGeometryUtil::IsValidStaticMesh(const UStaticMesh *StaticMesh)
{
	if (StaticMesh)
	{
		if (!StaticMesh->bAllowCPUAccess)
			OnLevelMeshProcessing.Execute(*FString::Printf(TEXT("UAscMapKitLevelGeometryUtil::IsValidStaticMesh(): WARNING -- bAllowCPUAccess is false! (%s)"), *StaticMesh->GetName()));

		if (!StaticMesh->RenderData)
			OnLevelMeshProcessing.Execute(*FString::Printf(TEXT("UAscMapKitLevelGeometryUtil::IsValidStaticMesh(): WARNING -- RenderData is null! (%s)"), *StaticMesh->GetName()));

		if (StaticMesh->RenderData->LODResources.Num() <= 0)
			OnLevelMeshProcessing.Execute(*FString::Printf(TEXT("UAscMapKitLevelGeometryUtil::IsValidStaticMesh(): WARNING -- RenderData->LODResources[] is empty! (%s)"), *StaticMesh->GetName()));
	}

	return StaticMesh && StaticMesh->bAllowCPUAccess && StaticMesh->RenderData && StaticMesh->RenderData->LODResources.IsValidIndex(0);
}

TArray<TPair<FVector, FVector>> UAscMapKitLevelGeometryUtil::ExtractTriangleCenterAndFaceNormal(
	const FPositionVertexBuffer &PositionVertexBuffer,
	const FIndexArrayView &IndexBufferArray,
	const float &LargeFaceDistanceThreshold
)
{
	TArray<TPair<FVector, FVector>> Results;

	for (auto Index = 0; Index < IndexBufferArray.Num(); Index += 3)
	{
		const auto Index0 = IndexBufferArray[Index];
		const auto Index1 = IndexBufferArray[Index + 1];
		const auto Index2 = IndexBufferArray[Index + 2];

		const auto V0 = PositionVertexBuffer.VertexPosition(Index0);
		const auto V1 = PositionVertexBuffer.VertexPosition(Index1);
		const auto V2 = PositionVertexBuffer.VertexPosition(Index2);

		const auto Distance1 = FMath::Abs((V1 - V0).Size());
		const auto Distance2 = FMath::Abs((V2 - V0).Size());
		const auto Distance3 = FMath::Abs((V2 - V1).Size());

		// we only want to process large faces
		if (Distance1 < LargeFaceDistanceThreshold || Distance2 < LargeFaceDistanceThreshold || Distance3 < LargeFaceDistanceThreshold)
			continue;

		const auto Edge1 = V1 - V0;
		const auto Edge2 = V2 - V0;
		const auto FaceCrossProduct = FVector::CrossProduct(Edge1, Edge2);
		const auto FaceNormal = FaceCrossProduct.GetSafeNormal();
		const auto FaceNormalSize = 0.5f * FMath::Abs(FaceCrossProduct.Size());

		if (FaceNormalSize >= LargeFaceDistanceThreshold)
		{
			const auto TriangleCenter = (V0 + V1 + V2) / 3.f;

			TPair<FVector, FVector> Result;
			Result.Key = TriangleCenter;
			Result.Value = FaceNormal;

			Results.Add(Result);
		}
	}

	return Results;
}

FOnLevelMeshProcessing UAscMapKitLevelGeometryUtil::OnLevelMeshProcessing;
FOnLevelMeshesNotFound UAscMapKitLevelGeometryUtil::OnLevelMeshesNotFound;