#include "AscMapKit/Public/Decor/AscMapKitDecorActor.h"
#include "Runtime/CoreUObject/Public/UObject/ConstructorHelpers.h"

AAscMapKitDecorActor::AAscMapKitDecorActor()
{
    const ConstructorHelpers::FObjectFinder<UStaticMesh> CubeStaticMeshRef(TEXT("StaticMesh'/Engine/BasicShapes/Cube.Cube'"));

    EmptyRootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("EmptyRootComponent"));
	EmptyRootComponent->SetMobility(EComponentMobility::Static);

    RootComponent = EmptyRootComponent;

    StaticMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComponent"));
    StaticMeshComponent->AttachToComponent(RootComponent, FAttachmentTransformRules::KeepRelativeTransform);
	StaticMeshComponent->SetMobility(EComponentMobility::Static);
    StaticMeshComponent->SetRelativeScale3D(FVector(1.f, 1.f, 1.f));
	StaticMeshComponent->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
	StaticMeshComponent->SetCollisionProfileName(TEXT("BlockAll"));
	StaticMeshComponent->LightmapType = ELightmapType::ForceSurface; // note: necessary, otherwise lightmaps won't bake!!

    if (CubeStaticMeshRef.Succeeded())
        StaticMeshComponent->SetStaticMesh(CubeStaticMeshRef.Object);
}

void AAscMapKitDecorActor::BeginPlay()
{
	Super::BeginPlay();

	if (StaticMeshComponent && MapKit.OverrideMaterials.Num() > 0)
	{
		for (const auto &Item : MapKit.OverrideMaterials)
		{
			if (!Item.OverrideMaterial)
				continue;

			if (Item.Material == nullptr)
				continue;

			const auto MaterialInstance = UMaterialInstanceDynamic::Create(Item.Material, nullptr);

			if (Item.SlotName.TrimStartAndEnd().IsEmpty())
				StaticMeshComponent->SetMaterial(Item.MaterialIndex, MaterialInstance);
			else
				StaticMeshComponent->SetMaterialByName(FName(Item.SlotName), MaterialInstance);
		}
	}
}