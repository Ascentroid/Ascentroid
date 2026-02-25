#include "AscMapKit/Public/Gui/Interact/Display/AscMapKitGuiInteractDisplayActor.h"

// UE
#include "Runtime/CoreUObject/Public/UObject/ConstructorHelpers.h"
#include "Runtime/Engine/Classes/Engine/Font.h"
#include "Runtime/Engine/Classes/Kismet/KismetSystemLibrary.h"
#include "Runtime/Engine/Public/EngineUtils.h"

// Ascentroid
#include "AscMapKit/Public/Core/Util/AscMapKitUtil.h"
#include "AscMapKit/Public/Door/AscMapKitDoorActor.h"

AAscMapKitGuiInteractDisplayActor::AAscMapKitGuiInteractDisplayActor()
{
    const ConstructorHelpers::FObjectFinder<UFont> AlienFontRef(TEXT("Font'/AscMapKit/Shared/Fonts/FNT_Alien.FNT_Alien'"));
    const ConstructorHelpers::FObjectFinder<UMaterialInterface> AlienFontMaterialRef(TEXT("MaterialInstanceConstant'/AscMapKit/Shared/Fonts/MI_Font_Alien.MI_Font_Alien'"));
    const ConstructorHelpers::FObjectFinder<UMaterialInterface> EmitMaterialRef(TEXT("MaterialInstanceConstant'/AscMapKit/Shared/Materials/MI_Shared_Emit_White.MI_Shared_Emit_White'"));
    static ConstructorHelpers::FObjectFinder<UStaticMesh> PlaneStaticMeshRef(TEXT("/Engine/BasicShapes/Plane.Plane"));

    EmptyRootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("EmptyRootComponent"));
    EmptyRootComponent->SetMobility(EComponentMobility::Static);

    RootComponent = EmptyRootComponent;

    TextRenderComponent = CreateDefaultSubobject<UTextRenderComponent>(TEXT("TextRenderComponent"));
    TextRenderComponent->AttachToComponent(RootComponent, FAttachmentTransformRules::KeepRelativeTransform);
    TextRenderComponent->SetHorizontalAlignment(EHTA_Center);
    TextRenderComponent->SetVerticalAlignment(EVRTA_TextCenter);
    TextRenderComponent->SetTextRenderColor(FColor::White); // note: @reminder: this needs to remain white because it blends with the applied material!
    TextRenderComponent->SetWorldSize(200.f);
    TextRenderComponent->SetHorizSpacingAdjust(10.f);
    TextRenderComponent->SetText(FText::FromString(TEXT("ABCD")));
    TextRenderComponent->SetRelativeLocation(FVector(0.f, 0.f, 15.f));

    if (AlienFontRef.Succeeded())
        TextRenderComponent->SetFont(AlienFontRef.Object);

    if (AlienFontMaterialRef.Succeeded())
        PrimaryColorMaterial = AlienFontMaterialRef.Object;
    
    UnderlineStaticMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>("UnderlineStaticMeshComponent");
    UnderlineStaticMeshComponent->AttachToComponent(TextRenderComponent, FAttachmentTransformRules::KeepRelativeTransform);
    UnderlineStaticMeshComponent->SetWorldScale3D(FVector(9.3f, 0.2f, 0.f));
    UnderlineStaticMeshComponent->SetRelativeLocation(FVector(0.f, -2.f, -110.f));
    UnderlineStaticMeshComponent->SetRelativeRotation(FRotator(0.f, 90.f, -90.f));
    UnderlineStaticMeshComponent->SetReceivesDecals(false);
    UnderlineStaticMeshComponent->SetVisibility(true, true);

    if (PlaneStaticMeshRef.Succeeded())
        UnderlineStaticMeshComponent->SetStaticMesh(PlaneStaticMeshRef.Object);
    
    if (EmitMaterialRef.Succeeded())
        UnderlineColorMaterial = EmitMaterialRef.Object;
}

FAscMapKitGuiInteractDisplayPropertiesStruct AAscMapKitGuiInteractDisplayActor::GetMapKitDefaults()
{
    auto Result = FAscMapKitGuiInteractDisplayPropertiesStruct();

    Result.Text = TEXT("ABCD");
    Result.Color = FColor::FromHex("#a8fc00");
    Result.EmitColorMultiplyBy = 1.f;

    return Result;
}

void AAscMapKitGuiInteractDisplayActor::OnConstruction(const FTransform &Transform)
{
    Super::OnConstruction(Transform);

    if (PrimaryColorMaterial != nullptr && PrimaryColorMaterialInstance == nullptr)
    {
        PrimaryColorMaterialInstance = UMaterialInstanceDynamic::Create(PrimaryColorMaterial, this);
        
        TextRenderComponent->SetTextMaterial(PrimaryColorMaterialInstance);
        TextRenderComponent->MarkRenderStateDirty();
    }
    
    if (UnderlineColorMaterial != nullptr && UnderlineColorMaterialInstance == nullptr)
    {
        UnderlineColorMaterialInstance = UMaterialInstanceDynamic::Create(UnderlineColorMaterial, this);
        
        UnderlineStaticMeshComponent->SetMaterial(0, UnderlineColorMaterialInstance);
        UnderlineStaticMeshComponent->MarkRenderStateDirty();
    }

    UpdateColor();
}

void AAscMapKitGuiInteractDisplayActor::BeginPlay()
{
    Super::BeginPlay();
}

void AAscMapKitGuiInteractDisplayActor::UpdateColor()
{
    if (!TextRenderComponent)
        return;

    if (!PrimaryColorMaterialInstance && PrimaryColorMaterial)
        PrimaryColorMaterialInstance = UMaterialInstanceDynamic::Create(PrimaryColorMaterial, this);
    
    if (!UnderlineColorMaterialInstance && UnderlineColorMaterial)
        UnderlineColorMaterialInstance = UMaterialInstanceDynamic::Create(UnderlineColorMaterial, this);

    TextRenderComponent->SetTextMaterial(PrimaryColorMaterialInstance);
    UnderlineStaticMeshComponent->SetMaterial(0, UnderlineColorMaterialInstance);

    if (PrimaryColorMaterialInstance)
    {
        PrimaryColorMaterialInstance->SetVectorParameterValue(FName("Color"), MapKit.Color);
        PrimaryColorMaterialInstance->SetScalarParameterValue(FName("Color Emit Multiply By"), MapKit.EmitColorMultiplyBy);

        TextRenderComponent->SetText(TextRenderComponent->Text);
        TextRenderComponent->MarkRenderStateDirty();
    }
    
    if (UnderlineColorMaterialInstance)
    {
        UnderlineColorMaterialInstance->SetVectorParameterValue(FName("Color"), MapKit.Color);
        UnderlineColorMaterialInstance->SetScalarParameterValue(FName("Color Emit Multiply By"), MapKit.EmitColorMultiplyBy);

        UnderlineStaticMeshComponent->SetMaterial(0, UnderlineColorMaterialInstance);
        TextRenderComponent->MarkRenderStateDirty();
    }
}

#if WITH_EDITOR
void AAscMapKitGuiInteractDisplayActor::PostEditChangeProperty(FPropertyChangedEvent &PropertyChangedEvent)
{
    if (PropertyChangedEvent.Property == nullptr || PropertyChangedEvent.MemberProperty == nullptr)
        return;

    const auto TransactionContext = FString::Printf(TEXT("%s::%hc"), *GetClass()->GetName(), *__FUNCTION__);
    const auto TransactionIndex = UKismetSystemLibrary::BeginTransaction(TransactionContext, FText::FromString(FString::Printf(TEXT("Modify %s"), *GetHumanReadableName())), nullptr);

    const auto PropertyName = PropertyChangedEvent.GetPropertyName().ToString();
    //const auto IsPropertyVector = PropertyName == TEXT("X") || PropertyName == TEXT("Y") || PropertyName == TEXT("Z");
    //GEngine->AddOnScreenDebugMessage(-1, 10.f, FColor::White, FString::Printf(TEXT("PropertyName = %s"), *PropertyName));
    
    if (PropertyName.Contains(TEXT("Text")))
    {
        const auto AlienText = UAscMapKitUtil::ConvertAlienText(MapKit.Text);

        if (AlienText.IsEmpty())
            GEngine->AddOnScreenDebugMessage(-1, 20.f, FColor::Red, FString::Printf(TEXT("Error: You must provide text for the code (4 unique letters only, no duplicate letters). %s"), *GetHumanReadableName()));
        else if (!UAscMapKitUtil::IsExactlyUniqueLetterCount(AlienText))
        {
            GEngine->AddOnScreenDebugMessage(-1, 20.f, FColor::Red, FString::Printf(TEXT("Error: You must provide text for the code (4 unique letters only, no duplicate letters). %s"), *GetHumanReadableName()));

            MapKit.Text = TEXT("");
            TextRenderComponent->SetText(FText::FromString(""));
        }
        else
        {
            int32 DoorCount = 0;

            for (TActorIterator<AAscMapKitDoorActor> It(GetWorld()); It; ++It)
            {
                const auto Door = *It;
 
                if (!Door)
                    continue;

                if (Door->MapKit.Lock.Code == MapKit.Text)
                    GEngine->AddOnScreenDebugMessage(-1, 20.f, FColor::Green, FString::Printf(TEXT("Good: found door with a matching lock code: Door ID = '%s'"), *Door->MapKit.Id));
                else
                    GEngine->AddOnScreenDebugMessage(-1, 20.f, FColor::Yellow, FString::Printf(TEXT("Warning: could not find door with a matching lock code: Door ID = '%s', Door Code = '%s'"), *Door->MapKit.Id, *Door->MapKit.Lock.Code));

                DoorCount++;
            }
            
            if (DoorCount <= 0)
                GEngine->AddOnScreenDebugMessage(-1, 20.f, FColor::Yellow, TEXT("Warning: could not find any doors!"));

            if (TextRenderComponent)
                TextRenderComponent->SetText(FText::FromString(AlienText));
        }
    }
    else if (PropertyName.Contains(TEXT("Color")))
        UpdateColor();

    // note: we always need to mark render state dirty due to UE bug
    if (TextRenderComponent)
        TextRenderComponent->MarkRenderStateDirty();
    
    // note: we always need to post edit and commit transaction for text render to work due to UE bug
    PostEditChange();
    Modify();
    MarkPackageDirty();

    GetRootComponent()->UpdateComponentToWorld();
    GetRootComponent()->MarkRenderStateDirty();

    ReregisterAllComponents();

    UKismetSystemLibrary::TransactObject(this);
    UKismetSystemLibrary::EndTransaction();
}
#endif