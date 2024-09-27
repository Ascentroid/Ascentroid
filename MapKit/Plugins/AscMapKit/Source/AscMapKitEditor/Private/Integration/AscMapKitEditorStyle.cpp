#include "AscMapKitEditor/Private/Integration/AscMapKitEditorStyle.h"

#include "Runtime/Projects/Public/Interfaces/IPluginManager.h"
#include "Runtime/SlateCore/Public/Styling/SlateStyleRegistry.h"

#define IMAGE_BRUSH(RelativePath, ...) FSlateImageBrush(RootToContentDir(RelativePath, TEXT(".png")), __VA_ARGS__)

TSharedPtr<ISlateStyle> FAscMapKitEditorStyle::Instance = nullptr;

FAscMapKitEditorStyle::FAscMapKitEditorStyle() : FSlateStyleSet(GetStyleName())
{
    FSlateStyleSet::SetContentRoot(IPluginManager::Get().FindPlugin("AscMapKit")->GetBaseDir() / TEXT("Resources"));

    Set(GetToolbarIconLargeName(), new IMAGE_BRUSH("Icons/AscMapKit_Toolbar_40x", FVector2D(40.f, 40.f)));
    Set(GetToolbarIconSmallName(), new IMAGE_BRUSH("Icons/AscMapKit_Toolbar_20x", FVector2D(20.f, 20.f)));

    FSlateStyleRegistry::RegisterSlateStyle(*this);
}

FAscMapKitEditorStyle::~FAscMapKitEditorStyle()
{
    FSlateStyleRegistry::UnRegisterSlateStyle(*this);
}

#undef IMAGE_BRUSH