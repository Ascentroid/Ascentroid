#include "AscMapKitEditor/Public/Tools/AscMapKitEditorToolsCollisionImporterUtility.h"

// UE
#include "Runtime/Engine/Classes/PhysicsEngine/PhysicsAsset.h"
#include "Runtime/Engine/Classes/PhysicsEngine/BodySetup.h"
#include "Runtime/Engine/Classes/Engine/StaticMesh.h"

// Ascentroid
#include "AscMapKitEditor/Public/Tools/Helpers/AscMapKitEditorToolsHelper.h"

UAscMapKitEditorToolsCollisionImporterUtility::UAscMapKitEditorToolsCollisionImporterUtility()
{
    AssetType = TEXT("Door");
    SearchText = TEXT("Door");
    SearchReplaceText = TEXT("Fan");
    TargetSkeletalMeshFolder = TEXT("/AscMapKit/Shared/Door/Animated/20x20m/Basic/002/");
    TargetSkeletalMeshAssetName = TEXT("SK_Door_Animated_20x20m_Basic_002");
    TargetSkeletalMeshBoneName = TEXT("SK_Door_Animated_20x20m_Basic_002");
    SourceStaticMeshesFolder = TEXT("/AscMapKit/Shared/Door/Animated/20x20m/Basic/002/");
    SourceStaticMeshesAssetNamePrefix = TEXT("SK_Door_Animated_20x20m_Basic_002_Collision_Collision");
    SourceStaticMeshesAssetCount = TEXT("2");
    RotatePitch = TEXT("0");
    RotatePitchAsFloat = 0.f;
    RotateYaw = TEXT("0");
    RotateYawAsFloat = 0.f;
    RotateRoll = TEXT("0");
    RotateRollAsFloat = 0.f;
    ImportStaticMeshCollisionType = TEXT("Geometry Collision (Convex Only)");
}

void UAscMapKitEditorToolsCollisionImporterUtility::NativeConstruct()
{
    Super::NativeConstruct();

    ComboBoxAssetType->SetSelectedOption(AssetType);

    ComboBoxAssetType->OnSelectionChanged.Clear();
    ComboBoxAssetType->OnSelectionChanged.AddDynamic(this, &UAscMapKitEditorToolsCollisionImporterUtility::ComboBoxAssetTypeOnSelectionChanged);
    
    TxtBoxSearchText->OnTextCommitted.Clear();
    TxtBoxSearchText->OnTextCommitted.AddDynamic(this, &UAscMapKitEditorToolsCollisionImporterUtility::TxtBoxSearchTextOnTextCommitted);

    TxtBoxSearchReplaceText->OnTextCommitted.Clear();
    TxtBoxSearchReplaceText->OnTextCommitted.AddDynamic(this, &UAscMapKitEditorToolsCollisionImporterUtility::TxtBoxSearchReplaceTextOnTextCommitted);
    
    TxtBoxTargetSkeletalMeshFolder->OnTextCommitted.Clear();
    TxtBoxTargetSkeletalMeshFolder->OnTextCommitted.AddDynamic(this, &UAscMapKitEditorToolsCollisionImporterUtility::TxtBoxTargetSkeletalMeshFolderOnTextCommitted);

    TxtBoxTargetSkeletalMeshAssetName->OnTextCommitted.Clear();
    TxtBoxTargetSkeletalMeshAssetName->OnTextCommitted.AddDynamic(this, &UAscMapKitEditorToolsCollisionImporterUtility::TxtBoxTargetSkeletalMeshAssetNameOnTextCommitted);

    TxtBoxTargetSkeletalMeshBoneName->OnTextCommitted.Clear();
    TxtBoxTargetSkeletalMeshBoneName->OnTextCommitted.AddDynamic(this, &UAscMapKitEditorToolsCollisionImporterUtility::TxtBoxTargetSkeletalMeshBoneNameOnTextCommitted);

    TxtBoxSourceStaticMeshesFolder->OnTextCommitted.Clear();
    TxtBoxSourceStaticMeshesFolder->OnTextCommitted.AddDynamic(this, &UAscMapKitEditorToolsCollisionImporterUtility::TxtBoxSourceStaticMeshesFolderOnTextCommitted);

    TxtBoxSourceStaticMeshesAssetNamePrefix->OnTextCommitted.Clear();
    TxtBoxSourceStaticMeshesAssetNamePrefix->OnTextCommitted.AddDynamic(this, &UAscMapKitEditorToolsCollisionImporterUtility::TxtBoxSourceStaticMeshesAssetNamePrefixOnTextCommitted);

    TxtBoxRotatePitch->OnTextCommitted.Clear();
    TxtBoxRotatePitch->OnTextCommitted.AddDynamic(this, &UAscMapKitEditorToolsCollisionImporterUtility::TxtBoxRotatePitchOnTextCommitted);

    TxtBoxRotateYaw->OnTextCommitted.Clear();
    TxtBoxRotateYaw->OnTextCommitted.AddDynamic(this, &UAscMapKitEditorToolsCollisionImporterUtility::TxtBoxRotateYawOnTextCommitted);

    TxtBoxRotateRoll->OnTextCommitted.Clear();
    TxtBoxRotateRoll->OnTextCommitted.AddDynamic(this, &UAscMapKitEditorToolsCollisionImporterUtility::TxtBoxRotateRollOnTextCommitted);
    
    TxtBoxSourceStaticMeshesAssetCount->OnTextCommitted.Clear();
    TxtBoxSourceStaticMeshesAssetCount->OnTextCommitted.AddDynamic(this, &UAscMapKitEditorToolsCollisionImporterUtility::TxtBoxSourceStaticMeshesAssetCountOnTextCommitted);

    ComboBoxImportStaticMeshCollisionType->SetSelectedOption(ImportStaticMeshCollisionType);

    ComboBoxImportStaticMeshCollisionType->OnSelectionChanged.Clear();
    ComboBoxImportStaticMeshCollisionType->OnSelectionChanged.AddDynamic(this, &UAscMapKitEditorToolsCollisionImporterUtility::ComboBoxImportStaticMeshCollisionTypeOnSelectionChanged);

    BtnSearchReplaceText->OnClicked.Clear();
    BtnSearchReplaceText->OnClicked.AddDynamic(this, &UAscMapKitEditorToolsCollisionImporterUtility::BtnSearchReplaceTextOnClick);

    BtnImportCollisionsToBone->OnClicked.Clear();
    BtnImportCollisionsToBone->OnClicked.AddDynamic(this, &UAscMapKitEditorToolsCollisionImporterUtility::BtnImportCollisionsToBoneOnClick);
}

void UAscMapKitEditorToolsCollisionImporterUtility::ComboBoxAssetTypeOnSelectionChanged(FString Arg, ESelectInfo::Type SelectType)
{
    AssetType = Arg;
}

void UAscMapKitEditorToolsCollisionImporterUtility::TxtBoxSearchTextOnTextCommitted(const FText &Arg, ETextCommit::Type CommitType)
{
    SearchText = Arg.ToString();
}

void UAscMapKitEditorToolsCollisionImporterUtility::TxtBoxSearchReplaceTextOnTextCommitted(const FText &Arg, ETextCommit::Type CommitType)
{
    SearchReplaceText = Arg.ToString();
}

void UAscMapKitEditorToolsCollisionImporterUtility::TxtBoxTargetSkeletalMeshFolderOnTextCommitted(const FText &Arg, ETextCommit::Type CommitType)
{
    TargetSkeletalMeshFolder = Arg.ToString();
}

void UAscMapKitEditorToolsCollisionImporterUtility::TxtBoxTargetSkeletalMeshAssetNameOnTextCommitted(const FText &Arg, ETextCommit::Type CommitType)
{
    TargetSkeletalMeshAssetName = Arg.ToString();
}

void UAscMapKitEditorToolsCollisionImporterUtility::TxtBoxTargetSkeletalMeshBoneNameOnTextCommitted(const FText &Arg, ETextCommit::Type CommitType)
{
    TargetSkeletalMeshBoneName = Arg.ToString();
}

void UAscMapKitEditorToolsCollisionImporterUtility::TxtBoxSourceStaticMeshesFolderOnTextCommitted(const FText &Arg, ETextCommit::Type CommitType)
{
    SourceStaticMeshesFolder = Arg.ToString();
}

void UAscMapKitEditorToolsCollisionImporterUtility::TxtBoxSourceStaticMeshesAssetNamePrefixOnTextCommitted(const FText &Arg, ETextCommit::Type CommitType)
{
    SourceStaticMeshesAssetNamePrefix = Arg.ToString();
}

void UAscMapKitEditorToolsCollisionImporterUtility::TxtBoxRotatePitchOnTextCommitted(const FText &Arg, ETextCommit::Type CommitType)
{
    RotatePitch = Arg.ToString();
    RotatePitchAsFloat = FCString::Atof(*RotatePitch);
}

void UAscMapKitEditorToolsCollisionImporterUtility::TxtBoxRotateYawOnTextCommitted(const FText &Arg, ETextCommit::Type CommitType)
{
    RotateYaw = Arg.ToString();
    RotateYawAsFloat = FCString::Atof(*RotateYaw);
}

void UAscMapKitEditorToolsCollisionImporterUtility::TxtBoxRotateRollOnTextCommitted(const FText &Arg, ETextCommit::Type CommitType)
{
    RotateRoll = Arg.ToString();
    RotateRollAsFloat = FCString::Atof(*RotateRoll);
}

void UAscMapKitEditorToolsCollisionImporterUtility::TxtBoxSourceStaticMeshesAssetCountOnTextCommitted(const FText &Arg, ETextCommit::Type CommitType)
{
    SourceStaticMeshesAssetCount = Arg.ToString();
}

void UAscMapKitEditorToolsCollisionImporterUtility::ComboBoxImportStaticMeshCollisionTypeOnSelectionChanged(FString Arg, ESelectInfo::Type SelectType)
{
    ImportStaticMeshCollisionType = Arg;
}

void UAscMapKitEditorToolsCollisionImporterUtility::BtnSearchReplaceTextOnClick()
{
    if (SearchText.IsEmpty() || SearchReplaceText.IsEmpty())
    {
        UAscMapKitEditorToolsHelper::ShowErrorMessage(TEXT("Please provide search/replace text"));
        return;
    }

    TargetSkeletalMeshFolder = TargetSkeletalMeshFolder.Replace(*SearchText, *SearchReplaceText);
    TargetSkeletalMeshAssetName = TargetSkeletalMeshAssetName.Replace(*SearchText, *SearchReplaceText);
    TargetSkeletalMeshBoneName = TargetSkeletalMeshBoneName.Replace(*SearchText, *SearchReplaceText);
    SourceStaticMeshesFolder = SourceStaticMeshesFolder.Replace(*SearchText, *SearchReplaceText);
    SourceStaticMeshesAssetNamePrefix = SourceStaticMeshesAssetNamePrefix.Replace(*SearchText, *SearchReplaceText);

    UAscMapKitEditorToolsHelper::ShowInfoMessage(FString::Printf(TEXT("Replaced '%s' with '%s'."), *SearchText, *SearchReplaceText));
}

void UAscMapKitEditorToolsCollisionImporterUtility::BtnImportCollisionsToBoneOnClick()
{
    ImportStaticMeshCollisionType = ComboBoxImportStaticMeshCollisionType->GetSelectedOption();

    auto TargetSkeletalMeshFolderCleaned = TargetSkeletalMeshFolder.TrimStartAndEnd();
    auto TargetSkeletalMeshAssetNameCleaned = TargetSkeletalMeshAssetName.TrimStartAndEnd();
    auto TargetSkeletalMeshBoneNameCleaned = TargetSkeletalMeshBoneName.TrimStartAndEnd();
    auto SourceStaticMeshesFolderCleaned = SourceStaticMeshesFolder.TrimStartAndEnd();
    auto SourceStaticMeshesAssetNamePrefixCleaned = SourceStaticMeshesAssetNamePrefix.TrimStartAndEnd();
    auto SourceStaticMeshesAssetCountCleaned = SourceStaticMeshesAssetCount.TrimStartAndEnd();
    auto ImportStaticMeshCollisionTypeCleaned = ImportStaticMeshCollisionType.TrimStartAndEnd();

    if (TargetSkeletalMeshFolderCleaned.IsEmpty())
    {
        UAscMapKitEditorToolsHelper::ShowErrorMessage(TEXT("Please provide Target Skeletal Mesh Folder"));
        return;
    }
    
    if (TargetSkeletalMeshAssetNameCleaned.IsEmpty())
    {
        UAscMapKitEditorToolsHelper::ShowErrorMessage(TEXT("Please provide Target Skeletal Mesh Asset Name"));
        return;
    }

    if (TargetSkeletalMeshBoneNameCleaned.IsEmpty())
    {
        UAscMapKitEditorToolsHelper::ShowErrorMessage(TEXT("Please provide Target Skeletal Mesh Bone Name"));
        return;
    }

    if (SourceStaticMeshesFolderCleaned.IsEmpty())
    {
        UAscMapKitEditorToolsHelper::ShowErrorMessage(TEXT("Please provide Source Static Meshes Folder"));
        return;
    }

    if (SourceStaticMeshesAssetNamePrefixCleaned.IsEmpty())
    {
        UAscMapKitEditorToolsHelper::ShowErrorMessage(TEXT("Please provide Target Source Static Meshes Asset Name Prefix"));
        return;
    }

    if (SourceStaticMeshesAssetCountCleaned.IsEmpty())
    {
        UAscMapKitEditorToolsHelper::ShowErrorMessage(TEXT("Please provide Source Static Meshes Asset Count"));
        return;
    }

    if (ImportStaticMeshCollisionTypeCleaned.IsEmpty())
    {
        UAscMapKitEditorToolsHelper::ShowErrorMessage(TEXT("Please provide Import Static Mesh Collision Type"));
        return;
    }

    int32 SourceStaticMeshesAssetCountAsNumber = FCString::Atoi(*SourceStaticMeshesAssetCountCleaned);

    if (SourceStaticMeshesAssetCountAsNumber <= 0)
    {
        UAscMapKitEditorToolsHelper::ShowErrorMessage(TEXT("Source Static Meshes Asset Count is invalid: must be a number greater than zero"));
        return;
    }

    if (!TargetSkeletalMeshFolderCleaned.EndsWith(TEXT("/")))
        TargetSkeletalMeshFolderCleaned += TEXT("/");

    if (!SourceStaticMeshesFolderCleaned.EndsWith(TEXT("/")))
        SourceStaticMeshesFolderCleaned += TEXT("/");

    TargetSkeletalMesh = LoadObject<USkeletalMesh>(nullptr, *FString::Printf(TEXT("%s%s.%s"), *TargetSkeletalMeshFolderCleaned, *TargetSkeletalMeshAssetNameCleaned, *TargetSkeletalMeshAssetNameCleaned));

    if (!TargetSkeletalMesh)
    {
        UAscMapKitEditorToolsHelper::ShowErrorMessage(TEXT("Could not load Target Skeletal Mesh!"));
        return;
    }

    const auto TargetPhysicsAsset = TargetSkeletalMesh->PhysicsAsset;

    if (!TargetPhysicsAsset)
    {
        UAscMapKitEditorToolsHelper::ShowErrorMessage(TEXT("No Physics Asset assigned to Target Skeletal Mesh!"));
        return;
    }

    // optional: disable root bone collision
    if (ChkBoxDisableRootBoneCollision->IsChecked() && TargetSkeletalMesh->RefSkeleton.GetNum() > 0)
    {
        const auto RootBoneName = TargetSkeletalMesh->RefSkeleton.GetBoneName(0);

        for (const auto &BodySetup : TargetPhysicsAsset->SkeletalBodySetups)
        {
            if (BodySetup && BodySetup->BoneName == RootBoneName)
            {
                for (FKSphereElem &Element : BodySetup->AggGeom.SphereElems)
                {
                    Element.Radius = 0.f;
                    Element.ScaleElem(FVector::ZeroVector, 0.f);
                    Element.SetTransform(FTransform(FVector(0.f, 0.f, -1000.f)));
                    Element.SetContributeToMass(false);
                }

                for (FKBoxElem &Element : BodySetup->AggGeom.BoxElems)
                {
                    Element.Rotation = FRotator::ZeroRotator;
                    Element.ScaleElem(FVector::ZeroVector, 0.f);
                    Element.SetTransform(FTransform(FVector(0.f, 0.f, -1000.f)));
                    Element.SetContributeToMass(false);
                }

                for (FKSphylElem &Element : BodySetup->AggGeom.SphylElems)
                {
                    Element.Radius = 0.f;
                    Element.Length = 0.f;
                    Element.Rotation = FRotator::ZeroRotator;
                    Element.ScaleElem(FVector::ZeroVector, 0.f);
                    Element.SetTransform(FTransform(FVector(0.f, 0.f, -1000.f)));
                    Element.SetContributeToMass(false);
                }

                //BodySetup->AggGeom.ConvexElems.SetNum(1);
                BodySetup->PhysicsType = EPhysicsType::PhysType_Kinematic; // note: does not simulate physics; moves only with animation, code, or socket attachments.

                break;
            }
        }
    }

    // todo: @reminder: @refactor: @cleanup
    if (AssetType == TEXT("Other"))
    {
        // todo: @reminder: we need to make the root bone name a property here, unless we just think it will always be zero?
        // todo: @reminder: I had the door root bones name after the asset, then realized this is bad if assets need renaming (breaks physics assets on reimport)
        // todo: @reminder: then this crashed because the root bone names changed for the doors, ffs
        //const auto BoneIndex = TargetSkeletalMesh->RefSkeleton.FindBoneIndex(*TargetSkeletalMeshBoneNameCleaned);
        const auto BoneIndex = 0;

        for (auto i = 1; i <= SourceStaticMeshesAssetCountAsNumber; i++)
        {
            // %03d = padded zeros = 00X, 0XX, XXX
            FString StaticMeshPath = FString::Printf
            (
                TEXT("%s%s%03d.%s%03d"),
                *SourceStaticMeshesFolderCleaned,
                *SourceStaticMeshesAssetNamePrefixCleaned,
                i,
                *SourceStaticMeshesAssetNamePrefixCleaned,
                i
            );

            UAscMapKitEditorToolsHelper::ShowInfoMessage(*StaticMeshPath);

            const auto SourceStaticMesh = LoadObject<UStaticMesh>(nullptr, *StaticMeshPath);

            if (!SourceStaticMesh || !SourceStaticMesh->BodySetup)
            {
                UAscMapKitEditorToolsHelper::ShowErrorMessage(FString::Printf(TEXT("Could not load or find collision on: %s"), *StaticMeshPath));
                continue;
            }

            if (ImportStaticMeshCollisionTypeCleaned.StartsWith(TEXT("Geometry Collision")))
            {
                TArray<FVector> ConvexVertices;

                // todo: @reminder: @refactor: @cleanup
                for (int32 LODIndex = 0; LODIndex < SourceStaticMesh->GetNumLODs(); ++LODIndex)
                {
                    const auto &LODResource = SourceStaticMesh->RenderData->LODResources[LODIndex];
                    const auto &PositionVertexBuffer = LODResource.VertexBuffers.PositionVertexBuffer;

                    TSet<FVector> UniqueVerts;

                    for (int32 x = 0; x < LODResource.IndexBuffer.GetNumIndices(); ++x)
                    {
                        const auto Index = LODResource.IndexBuffer.GetIndex(x);

                        if (Index < PositionVertexBuffer.GetNumVertices())
                        {
                            FVector Vertex = PositionVertexBuffer.VertexPosition(Index);
                            UniqueVerts.Add(Vertex);
                        }
                    }

                    ConvexVertices = UniqueVerts.Array();
                }

                FKConvexElem ConvexElem;
                ConvexElem.VertexData = ConvexVertices;
                ConvexElem.SetName(*SourceStaticMesh->GetName());
                ConvexElem.SetContributeToMass(false);
                ConvexElem.UpdateElemBox();

                TargetPhysicsAsset->SkeletalBodySetups[BoneIndex]->AggGeom.ConvexElems.Add(ConvexElem);
            }
            else
            {
                // todo: @reminder: @refactor: @cleanup
                const auto AggGeom = SourceStaticMesh->BodySetup->AggGeom;

                if (AggGeom.GetElementCount() == 0)
                {
                    UAscMapKitEditorToolsHelper::ShowErrorMessage(FString::Printf(TEXT("No collision geometry on: %s"), *StaticMeshPath));
                    continue;
                }

                FKConvexElem ConvexElem;
                ConvexElem.VertexData = AggGeom.ConvexElems[0].VertexData;
                ConvexElem.SetName(*SourceStaticMesh->GetName());
                ConvexElem.SetContributeToMass(false);
                ConvexElem.UpdateElemBox();

                TargetPhysicsAsset->SkeletalBodySetups[BoneIndex]->AggGeom.ConvexElems.Add(ConvexElem);
            }

            UAscMapKitEditorToolsHelper::ShowInfoMessage(FString::Printf(TEXT("Added collision success: %s"), *StaticMeshPath));
        }
    }
    else
    {
        for (auto i = 1; i <= SourceStaticMeshesAssetCountAsNumber; i++)
        {
            // todo: should we put this Bone Name on the UI?
            const auto TargetBoneNameStr = FString::Printf(TEXT("DoorMotion%d"), i);
            const auto TargetBoneName = FName(*TargetBoneNameStr);
            const auto BoneIndex = TargetSkeletalMesh->RefSkeleton.FindBoneIndex(TargetBoneName);
    
            if (BoneIndex == INDEX_NONE)
            {
                UAscMapKitEditorToolsHelper::ShowErrorMessage(FString::Printf(TEXT("Missing bone: %s"), *TargetBoneNameStr));
                continue;
            }
    
            // %03d = padded zeros = 00X, 0XX, XXX
            FString StaticMeshPath = FString::Printf
            (
                TEXT("%s%s%03d.%s%03d"),
                *SourceStaticMeshesFolderCleaned,
                *SourceStaticMeshesAssetNamePrefixCleaned,
                i,
                *SourceStaticMeshesAssetNamePrefixCleaned,
                i
            );
    
            UAscMapKitEditorToolsHelper::ShowInfoMessage(*StaticMeshPath);
    
            const auto SourceStaticMesh = LoadObject<UStaticMesh>(nullptr, *StaticMeshPath);
    
            if (!SourceStaticMesh || !SourceStaticMesh->BodySetup)
            {
                UAscMapKitEditorToolsHelper::ShowErrorMessage(FString::Printf(TEXT("Could not load or find collision on: %s"), *StaticMeshPath));
                continue;
            }
    
            UAscMapKitEditorToolsHelper::ShowInfoMessage(FString::Printf(TEXT("%s: using static mesh for collision = %s"), *TargetBoneNameStr, *SourceStaticMesh->GetFullName()));
    
            FKConvexElem ConvexElement;
    
            if (ImportStaticMeshCollisionTypeCleaned.StartsWith(TEXT("Geometry Collision")))
            {
                TArray<FVector> ConvexVertices;

                // todo: @reminder: @refactor: @cleanup
                for (int32 LODIndex = 0; LODIndex < SourceStaticMesh->GetNumLODs(); ++LODIndex)
                {
                    const auto &LODResource = SourceStaticMesh->RenderData->LODResources[LODIndex];
                    const auto &PositionVertexBuffer = LODResource.VertexBuffers.PositionVertexBuffer;
                
                    TSet<FVector> UniqueVerts;
                
                    for (int32 x = 0; x < LODResource.IndexBuffer.GetNumIndices(); ++x)
                    {
                        const auto Index = LODResource.IndexBuffer.GetIndex(x);
                
                        if (Index < PositionVertexBuffer.GetNumVertices())
                        {
                            FVector Vertex = PositionVertexBuffer.VertexPosition(Index);
                            UniqueVerts.Add(Vertex);
                        }
                    }
                
                    ConvexVertices = UniqueVerts.Array();
                }

                if (RotatePitchAsFloat != 0.f || RotateYawAsFloat != 0.f || RotateRollAsFloat != 0.f)
                {
                    const FRotator FixRotation(RotatePitchAsFloat, RotateYawAsFloat, RotateRollAsFloat);
                    const FRotationMatrix RotationMatrix(FixRotation);

                    for (auto &Vertex : ConvexVertices)
                        Vertex = RotationMatrix.TransformPosition(Vertex);
                }

                FTransform BoneWorld = TargetSkeletalMesh->RefSkeleton.GetRefBonePose()[BoneIndex];
                FTransform BoneWorldInverse = BoneWorld.Inverse();

                for (FVector &Vertex : ConvexVertices)
                    Vertex = BoneWorldInverse.TransformPosition(Vertex);
    
                ConvexElement.VertexData = ConvexVertices;
            }
            else
            {
                // todo: @reminder: @refactor: @cleanup
                const auto AggGeom = SourceStaticMesh->BodySetup->AggGeom;
    
                if (AggGeom.GetElementCount() == 0)
                {
                    UAscMapKitEditorToolsHelper::ShowErrorMessage(FString::Printf(TEXT("No collision geometry on: %s"), *StaticMeshPath));
                    continue;
                }
    
                if (AggGeom.ConvexElems.Num() <= 0)
                {
                    UAscMapKitEditorToolsHelper::ShowErrorMessage(FString::Printf(TEXT("No collision geometry on: %s"), *StaticMeshPath));
                    continue;
                }
    
                ConvexElement.VertexData = AggGeom.ConvexElems[0].VertexData;
    
                if (ConvexElement.VertexData.Num() < 4)
                {
                    UAscMapKitEditorToolsHelper::ShowErrorMessage(FString::Printf(TEXT("Convex mesh for %s has too few vertices: %d"), *TargetBoneNameStr, ConvexElement.VertexData.Num()));
                    continue;
                }
            }
    
            ConvexElement.SetName(*SourceStaticMesh->GetName());
            ConvexElement.SetContributeToMass(false);
            ConvexElement.UpdateElemBox();
    
            auto NewBody = NewObject<USkeletalBodySetup>(TargetPhysicsAsset, USkeletalBodySetup::StaticClass());
    
            NewBody->BoneName = TargetBoneName;
            NewBody->AggGeom.ConvexElems.Add(ConvexElement);
            NewBody->PhysicsType = EPhysicsType::PhysType_Kinematic; // note: does not simulate physics; moves only with animation, code, or socket attachments.

            NewBody->InvalidatePhysicsData();
            NewBody->CreatePhysicsMeshes();
    
            TargetPhysicsAsset->SkeletalBodySetups.Add(NewBody);
    
            UAscMapKitEditorToolsHelper::ShowInfoMessage(FString::Printf(TEXT("Added collision to bone: %s"), *TargetBoneNameStr));
            UAscMapKitEditorToolsHelper::ShowInfoMessage(FString::Printf(TEXT("Added collision success: %s"), *StaticMeshPath));
        }
    }

    TargetPhysicsAsset->UpdateBodySetupIndexMap();
    TargetPhysicsAsset->RefreshPhysicsAssetChange();
    TargetPhysicsAsset->MarkPackageDirty();

    UAscMapKitEditorToolsHelper::ShowInfoMessage(TEXT("Collision import completed!"));

    TargetSkeletalMesh.Reset();
}