// Copyright 2026 Locodrome. All Rights Reserved.

#include "LocodromeStyle.h"
#include "Locodrome.h"
#include "Framework/Application/SlateApplication.h"
#include "Styling/SlateStyleRegistry.h"
#include "Slate/SlateGameResources.h"
#include "Interfaces/IPluginManager.h"
#include "Styling/SlateStyleMacros.h"

#define RootToContentDir Style->RootToContentDir

TSharedPtr<FSlateStyleSet> FLocodromeStyle::StyleInstance = nullptr;

void FLocodromeStyle::Initialize()
{
	if (!StyleInstance.IsValid())
	{
		StyleInstance = Create();
		FSlateStyleRegistry::RegisterSlateStyle(*StyleInstance);
	}
}

void FLocodromeStyle::Shutdown()
{
	FSlateStyleRegistry::UnRegisterSlateStyle(*StyleInstance);
	ensure(StyleInstance.IsUnique());
	StyleInstance.Reset();
}

FName FLocodromeStyle::GetStyleSetName()
{
	static FName StyleSetName(TEXT("LocodromeStyle"));
	return StyleSetName;
}


const FVector2D Icon16x16(16.0f, 16.0f);
const FVector2D Icon20x20(20.0f, 20.0f);

TSharedRef< FSlateStyleSet > FLocodromeStyle::Create()
{
	TSharedRef< FSlateStyleSet > Style = MakeShareable(new FSlateStyleSet("LocodromeStyle"));
	Style->SetContentRoot(IPluginManager::Get().FindPlugin("Locodrome")->GetBaseDir() / TEXT("Resources"));

	Style->Set("Locodrome.PluginAction", new IMAGE_BRUSH_SVG(TEXT("LCAT"), Icon20x20));
	return Style;
}

void FLocodromeStyle::ReloadTextures()
{
	if (FSlateApplication::IsInitialized())
	{
		FSlateApplication::Get().GetRenderer()->ReloadTextureResources();
	}
}

const ISlateStyle& FLocodromeStyle::Get()
{
	return *StyleInstance;
}
