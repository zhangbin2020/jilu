#pragma once

#include "StateInteface.h"

//�ۺ�һ��Stateʵ������ʾ��ǰ��״̬
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

	StateInteface* m_state;//��ǰ״̬
};

