// Copyright 2026 Locodrome. All Rights Reserved.

#include "Locodrome.h"
#include "LocodromeStyle.h"
#include "LocodromeCommands.h"

#include "ToolMenus.h"
#include "Editor.h"
#include "EditorUtilitySubsystem.h"
#include "EditorUtilityWidgetBlueprint.h"

#define LOCTEXT_NAMESPACE "FLocodromeModule"

void FLocodromeModule::StartupModule()
{
	FLocodromeStyle::Initialize();
	FLocodromeStyle::ReloadTextures();

	FLocodromeCommands::Register();

	PluginCommands = MakeShareable(new FUICommandList);

	PluginCommands->MapAction(
		FLocodromeCommands::Get().PluginAction,
		FExecuteAction::CreateRaw(
			this,
			&FLocodromeModule::LaunchLCAT
		),
		FCanExecuteAction()
	);

	UToolMenus::RegisterStartupCallback(
		FSimpleMulticastDelegate::FDelegate::CreateRaw(
			this,
			&FLocodromeModule::RegisterMenus
		)
	);
}

void FLocodromeModule::ShutdownModule()
{
	UToolMenus::UnRegisterStartupCallback(this);
	UToolMenus::UnregisterOwner(this);

	FLocodromeStyle::Shutdown();
	FLocodromeCommands::Unregister();
}

void FLocodromeModule::LaunchLCAT()
{
	static const TCHAR* WidgetPath =
		TEXT("/Locodrome/LCAT/LCAT.LCAT");

	UEditorUtilityWidgetBlueprint* WidgetBlueprint =
		LoadObject<UEditorUtilityWidgetBlueprint>(
			nullptr,
			WidgetPath
		);

	if (!WidgetBlueprint)
	{
		UE_LOG(
			LogTemp,
			Error,
			TEXT("[Locodrome] Could not load LCAT widget at %s"),
			WidgetPath
		);

		return;
	}

	if (!GEditor)
	{
		UE_LOG(
			LogTemp,
			Error,
			TEXT("[Locodrome] GEditor is not available")
		);

		return;
	}

	UEditorUtilitySubsystem* EditorUtilitySubsystem =
		GEditor->GetEditorSubsystem<UEditorUtilitySubsystem>();

	if (!EditorUtilitySubsystem)
	{
		UE_LOG(
			LogTemp,
			Error,
			TEXT("[Locodrome] Could not get EditorUtilitySubsystem")
		);

		return;
	}

	EditorUtilitySubsystem->SpawnAndRegisterTab(
		WidgetBlueprint
	);
}

void FLocodromeModule::RegisterMenus()
{
	FToolMenuOwnerScoped OwnerScoped(this);

	// ----- Tools > LOCODROME section -----

	UToolMenu* ToolsMenu =
		UToolMenus::Get()->ExtendMenu(
			"LevelEditor.MainMenu.Tools"
		);

	FToolMenuSection& LocodromeSection =
		ToolsMenu->AddSection(
			"Locodrome",
			LOCTEXT(
				"LocodromeSectionLabel",
				"LOCODROME"
			),
			FToolMenuInsert(
				"Python",
				EToolMenuInsertType::Before
			)
		);

	LocodromeSection.AddMenuEntryWithCommandList(
		FLocodromeCommands::Get().PluginAction,
		PluginCommands
	);

	// ----- Toolbar button -----

	UToolMenu* ToolbarMenu =
		UToolMenus::Get()->ExtendMenu(
			"LevelEditor.LevelEditorToolBar.PlayToolBar"
		);

	FToolMenuSection& ToolbarSection =
		ToolbarMenu->FindOrAddSection(
			"PluginTools"
		);

	FToolMenuEntry& Entry =
		ToolbarSection.AddEntry(
			FToolMenuEntry::InitToolBarButton(
				FLocodromeCommands::Get().PluginAction
			)
		);

	Entry.SetCommandList(PluginCommands);
}

#undef LOCTEXT_NAMESPACE

IMPLEMENT_MODULE(FLocodromeModule, Locodrome)