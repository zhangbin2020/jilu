#pragma once

#include <QDebug>
class Context;

class StateInteface
{
public:
	StateInteface();
	~StateInteface();

	virtual void Handle(Context* val){}
};

