#pragma once
#include "TV.h"



class CommandInterface
{
public:
	CommandInterface();
	~CommandInterface();

	void SetTV(TV val){ m_tv = val; }

	virtual void execute(){}

protected:
	TV m_tv;//√¸¡ÓΩ” ’’ﬂ
};

