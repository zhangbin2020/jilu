#include "StateA.h"
#include "Context.h"
#include "StateB.h"

StateA::StateA()
{
}


StateA::~StateA()
{
}

void StateA::Handle(Context* val)
{
	qDebug() << "stateA handle next is B";
	val->m_state = new StateB;
}
