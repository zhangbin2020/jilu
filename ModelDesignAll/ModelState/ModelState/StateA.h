#pragma once
#include "StateInteface.h"
class StateA :
	public StateInteface
{
public:
	StateA();
	~StateA();

	void Handle(Context* val);
};

