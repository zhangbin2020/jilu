#pragma once
#include "CommandInterface.h"

//执行关闭动作
class turnOffCommand :
	public CommandInterface
{
public:
	turnOffCommand();
	~turnOffCommand();

	void execute()
	{
		m_tv.turnOff();
	}
};

