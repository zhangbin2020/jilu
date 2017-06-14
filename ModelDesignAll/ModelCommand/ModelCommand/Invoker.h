#pragma once
#include "OpenCommand.h"
#include "turnOffCommand.h"
#include "SwitchChannelCommand.h"

//√¸¡Óµ˜”√’ﬂ
class Invoker
{
public:
	Invoker();
	~Invoker();

	void openTv(){
		open.execute();
	}

	void offTv()
	{
		off.execute();
	}

	void change()
	{
		swit.execute();
	}

	OpenCommand open;
	turnOffCommand off;
	SwitchChannelCommand swit;
};

