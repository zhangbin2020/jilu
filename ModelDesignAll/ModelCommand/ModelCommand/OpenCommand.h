#pragma once
#include "CommandInterface.h"



class OpenCommand :
	public CommandInterface
{
public:
	OpenCommand();
	~OpenCommand();

	void execute()
	{
		m_tv.open();
	}
};

