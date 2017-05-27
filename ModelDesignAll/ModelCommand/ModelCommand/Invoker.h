#pragma once
#include "OpenCommand.h"
#include "turnOffCommand.h"

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

	OpenCommand open;
	turnOffCommand off;
};

