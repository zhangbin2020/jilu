#pragma once
#include "CommandInterface.h"
class SwitchChannelCommand :
	public CommandInterface
{
public:
	SwitchChannelCommand();
	~SwitchChannelCommand();

	virtual void execute();
};

