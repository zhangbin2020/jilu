#pragma once
#include "StateInteface.h"
class StateB :
	public StateInteface
{
public:
	StateB();
	~StateB();

	void Handle(Context* val);
};

