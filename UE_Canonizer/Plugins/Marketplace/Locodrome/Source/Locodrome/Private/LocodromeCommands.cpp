// Copyright 2026 Locodrome. All Rights Reserved.

#include "LocodromeCommands.h"

#define LOCTEXT_NAMESPACE "FLocodromeModule"

void FLocodromeCommands::RegisterCommands()
{
	UI_COMMAND(PluginAction, "LCAT", "Open LCAT", EUserInterfaceActionType::Button, FInputChord());
}

#undef LOCTEXT_NAMESPACE
