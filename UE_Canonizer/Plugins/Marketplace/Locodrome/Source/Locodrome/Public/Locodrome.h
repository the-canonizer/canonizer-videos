// Copyright 2026 Locodrome. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Modules/ModuleManager.h"

class FUICommandList;

class FLocodromeModule : public IModuleInterface
{
public:
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;

private:
	void RegisterMenus();
	void LaunchLCAT();

	TSharedPtr<FUICommandList> PluginCommands;
};