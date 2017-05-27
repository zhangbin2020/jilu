#pragma once

#include "StateInteface.h"

//聚合一个State实例，表示当前的状态
class Context
{
public:
	Context();
	~Context();

	void setState(StateInteface* val)
	{
		m_state = val;
	}

	void Request();

	StateInteface* m_state;//当前状态
};

