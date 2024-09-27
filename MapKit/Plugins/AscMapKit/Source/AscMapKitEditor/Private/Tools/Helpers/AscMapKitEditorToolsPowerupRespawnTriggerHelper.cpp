#include "AscMapKitEditor/Public/Tools/Helpers/AscMapKitEditorToolsPowerupRespawnTriggerHelper.h"

// UE
#include "Runtime/Engine/Classes/Components/BoxComponent.h"
#include "Runtime/Engine/Classes/Components/HierarchicalInstancedStaticMeshComponent.h"
#include "Runtime/Engine/Classes/Engine/StaticMeshActor.h"
#include "Runtime/Engine/Classes/Kismet/GameplayStatics.h"
#include "Runtime/Engine/Classes/Kismet/KismetSystemLibrary.h"

// Ascentroid
#include "AscMapKit/Public/Powerup/AscMapKitPowerupRespawnTriggerBox.h"
#include "AscMapKitEditor/Public/Tools/Helpers/AscMapKitEditorToolsHelper.h"

const auto DistanceMax = 400.f;
//const auto DebugDistance = -1000.f;

const TArray<FVector> Directions = {
	FVector(1.f, 0.f, 0.f),  // Forward
	FVector(-1.f, 0.f, 0.f), // Backward
	FVector(0.f, 1.f, 0.f),  // Right
	FVector(0.f, -1.f, 0.f), // Left
	FVector(0.f, 0.f, 1.f),  // Up
	FVector(0.f, 0.f, -1.f), // Down
	FVector(1.f, 1.f, 0.f),  // Forward-Right
	FVector(-1.f, -1.f, 0.f),// Backward-Left
	FVector(1.f, -1.f, 0.f), // Forward-Left
	FVector(-1.f, 1.f, 0.f)  // Backward-Right
};

void UAscMapKitEditorToolsPowerupRespawnTriggerHelper::Generate(const FString &ForClassName, const char *ForFunction, const bool &bDeleteExistingTriggers)
{
	const auto EditorWorld = UAscMapKitEditorToolsHelper::GetEditorWorld();

	const auto TransactionContext = FString::Printf(TEXT("%s::%hc"), *ForClassName, *ForFunction);

	TArray<AActor *> FoundActors;
	UGameplayStatics::GetAllActorsOfClass(EditorWorld, AActor::StaticClass(), FoundActors);

	if (FoundActors.Num() > 0)
	{
		UKismetSystemLibrary::BeginTransaction(TransactionContext, FText::FromString(TEXT("Generate Powerup Respawn Triggers")), nullptr);

		TMap<FVector, FVector> FaceMap;

		for (auto i = 0; i < FoundActors.Num(); i++)
		{
			const auto Actor = FoundActors[i];
			
			if (Actor == nullptr)
				continue;

			if (bDeleteExistingTriggers && Actor->IsA(AAscMapKitPowerupRespawnTriggerBox::StaticClass()))
			{
				EditorWorld->DestroyActor(Actor, true);
				continue;
			}

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

									const auto TriangleCenterAndFaceNormals = ExtractTriangleCenterAndFaceNormal(PositionVertexBuffer, IndexBufferArray);

									for (const auto &Item : TriangleCenterAndFaceNormals)
									{
										if (!Item.Key.IsZero() && !Item.Value.IsZero())
										{
											const auto WorldCenter = InstanceTransform.TransformPosition(Item.Key);
											const auto WorldNormal = InstanceTransform.TransformVectorNoScale(Item.Value);

											FaceMap.Add(WorldCenter, WorldNormal);

											//DrawDebugLine(EditorWorld, WorldCenter, WorldCenter + WorldNormal * DebugDistance, FColor::Green, true, -1.f, 0, 30.f);
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

									const auto TriangleCenterAndFaceNormals = ExtractTriangleCenterAndFaceNormal(PositionVertexBuffer, IndexBufferArray);

									for (const auto &Item : TriangleCenterAndFaceNormals)
									{
										if (!Item.Key.IsZero() && !Item.Value.IsZero())
										{
											const auto WorldCenter = InstanceTransform.TransformPosition(Item.Key);
											const auto WorldNormal = InstanceTransform.TransformVectorNoScale(Item.Value);

											FaceMap.Add(WorldCenter, WorldNormal);

											//DrawDebugLine(EditorWorld, WorldCenter, WorldCenter + WorldNormal * DebugDistance, FColor::Green, true, -1.f, 0, 30.f);
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
					UKismetSystemLibrary::TransactObject(StaticMeshActor);

					UAscMapKitEditorToolsHelper::ShowInfoMessage(FString::Printf(TEXT("Processing Level Mesh: (%s)"), *StaticMeshActorName));

					for (auto LODIndex = 0; LODIndex < StaticMesh->GetNumLODs(); ++LODIndex)
					{
						const auto &LODResource = StaticMesh->RenderData->LODResources[LODIndex];
						const auto &PositionVertexBuffer = LODResource.VertexBuffers.PositionVertexBuffer;
						const auto &IndexBufferArray = LODResource.IndexBuffer.GetArrayView();

						if (PositionVertexBuffer.GetNumVertices() == 0 || IndexBufferArray.Num() == 0)
							continue;

						const auto TriangleCenterAndFaceNormals = ExtractTriangleCenterAndFaceNormal(PositionVertexBuffer, IndexBufferArray);

						for (const auto &Item : TriangleCenterAndFaceNormals)
						{
							if (!Item.Key.IsZero() && !Item.Value.IsZero())
							{
								const auto WorldCenter = StaticMeshComponentTransform.TransformPosition(Item.Key);
								const auto WorldNormal = StaticMeshComponentTransform.TransformVectorNoScale(Item.Value);

								FaceMap.Add(WorldCenter, WorldNormal);
								//DrawDebugLine(EditorWorld, WorldCenter, WorldCenter + WorldNormal * DebugDistance, FColor::Green, true, -1.f, 0, 30.f);
							}
						}
					}
				}
			}
		}

		TArray<FVector> CenterPoints;

		for (const auto &Entry : FaceMap)
		{
			const auto WorldCenter = Entry.Key;
			const auto WorldNormal = Entry.Value;

			if (WorldCenter.IsZero() || WorldNormal.IsZero())
				continue;

			const auto StartLocation = WorldCenter;
			const auto EndLocation = WorldCenter + WorldNormal * -100000.f;

			FHitResult HitResult;

			const FName TraceTag("Powerup_Respawn_LineOfSight_Trace");

			auto TargetTraceParams = FCollisionQueryParams(TraceTag, true);
			TargetTraceParams.bTraceComplex = true;
			TargetTraceParams.bReturnPhysicalMaterial = false;
			TargetTraceParams.TraceTag = TraceTag;

			EditorWorld->LineTraceSingleByChannel(HitResult, StartLocation, EndLocation, ECC_Visibility, TargetTraceParams);

			if (HitResult.IsValidBlockingHit() && HitResult.Distance > 500.f && HitResult.Distance < 50000.f)
			{
				// DrawDebugSphere(
				// 	EditorWorld,
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
				// 	EditorWorld,
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
				//	UAscMapKitEditorToolsHelper::ShowInfoMessage(FString::Printf(TEXT("Hit actor: %s"), *HitResult.GetActor()->GetHumanReadableName()));

				const auto CenterPoint = (StartLocation + HitResult.Location) * 0.5f;

				auto bIsCenterPointTooCloseToExisting = false;

				for (const auto &ExistingCenterPoint : CenterPoints)
				{
					const auto DistanceFromCenterPointToExisting = FMath::Abs((ExistingCenterPoint - CenterPoint).Size());

					// UAscMapKitEditorToolsHelper::ShowInfoMessage(FString::Printf(TEXT("DistanceFromCenterPointToExisting: %f"), DistanceFromCenterPointToExisting));

					if (DistanceFromCenterPointToExisting < 1000.f)
					{
						bIsCenterPointTooCloseToExisting = true;
						break;
					}
				}

				if (!bIsCenterPointTooCloseToExisting)
				{
					auto bIsCenterPointTooCloseToSomething = false;

					for (const FVector &Direction : Directions)
					{
						FVector TraceEnd = CenterPoint + (Direction * 500.f);
						
						FHitResult RadiusHitResult;

						bool bHit = EditorWorld->LineTraceSingleByChannel(
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
					}

					if (!bIsCenterPointTooCloseToSomething)
						CenterPoints.Add(CenterPoint);
				}
			}
		}

		for (const auto &CenterPoint : CenterPoints)
		{
			//DrawDebugLine(EditorWorld, StartLocation, HitResult.Location, FColor::Green, true, -1.f, 0, 20.f);

			// DrawDebugSphere(
			// 	EditorWorld,
			// 	CenterPoint,
			// 	100.f,
			// 	6,
			// 	FColor::Orange,
			// 	true,
			// 	-1.f,
			// 	0.f,
			// 	20.f
			// );

			FActorSpawnParameters SpawnParams;
			SpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;
			SpawnParams.bHideFromSceneOutliner = false;

			auto *PowerupRespawnTriggerBoxActor = EditorWorld->SpawnActor<AAscMapKitPowerupRespawnTriggerBox>(
				AAscMapKitPowerupRespawnTriggerBox::StaticClass(),
				CenterPoint,
				FRotator::ZeroRotator,
				SpawnParams
			);

			if (PowerupRespawnTriggerBoxActor)
			{
				if (PowerupRespawnTriggerBoxActor->GetCollisionComponent()->IsA(UBoxComponent::StaticClass()))
				{
					const auto BoxComponent = Cast<UBoxComponent>(PowerupRespawnTriggerBoxActor->GetCollisionComponent());

					if (BoxComponent)
						BoxComponent->SetBoxExtent(FVector(250.f, 250.f, 250.f));
				}

				PowerupRespawnTriggerBoxActor->SetFolderPath(FName("Powerup/RespawnTriggers"));
			}
		}

		if (FaceMap.Num() <= 0)
			UAscMapKitEditorToolsHelper::ShowWarnMessage(TEXT("No meshes were found (AStaticMeshActor) with any geometry data. Did you allow CPU access on assets and add actor 'Level' tags?"));

		UKismetSystemLibrary::EndTransaction();
	}
	else
		UAscMapKitEditorToolsHelper::ShowWarnMessage(TEXT("No meshes were found (AStaticMeshActor)."));
}

bool UAscMapKitEditorToolsPowerupRespawnTriggerHelper::IsValidStaticMesh(const UStaticMesh *StaticMesh)
{
	return StaticMesh && StaticMesh->bAllowCPUAccess && StaticMesh->RenderData && StaticMesh->RenderData->LODResources.IsValidIndex(0);
}

TArray<TPair<FVector, FVector>> UAscMapKitEditorToolsPowerupRespawnTriggerHelper::ExtractTriangleCenterAndFaceNormal(const FPositionVertexBuffer &PositionVertexBuffer, const FIndexArrayView &IndexBufferArray)
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
		if (Distance1 < DistanceMax || Distance2 < DistanceMax || Distance3 < DistanceMax)
			continue;

		const auto Edge1 = V1 - V0;
		const auto Edge2 = V2 - V0;
		const auto FaceCrossProduct = FVector::CrossProduct(Edge1, Edge2);
		const auto FaceNormal = FaceCrossProduct.GetSafeNormal();
		const auto FaceNormalSize = 0.5f * FMath::Abs(FaceCrossProduct.Size());

		if (FaceNormalSize >= DistanceMax)
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