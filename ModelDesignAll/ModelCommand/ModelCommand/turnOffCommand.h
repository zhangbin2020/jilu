#pragma once
#include "CommandInterface.h"

//ִ�йرն���
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

