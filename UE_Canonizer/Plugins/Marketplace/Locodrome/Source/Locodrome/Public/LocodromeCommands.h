// Copyright 2026 Locodrome. All Rights Reserved.

#pragma once

#include "Framework/Commands/Commands.h"
#include "LocodromeStyle.h"

class FLocodromeCommands : public TCommands<FLocodromeCommands>
{
public:

	FLocodromeCommands()
		: TCommands<FLocodromeCommands>(TEXT("Locodrome"), NSLOCTEXT("Contexts", "Locodrome", "Locodrome Plugin"), NAME_None, FLocodromeStyle::GetStyleSetName())
	{
	}

	// TCommands<> interface
	virtual void RegisterCommands() override;

public:
	TSharedPtr< FUICommandInfo > PluginAction;
};
