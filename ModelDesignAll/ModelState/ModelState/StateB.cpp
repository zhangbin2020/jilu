#include "StateB.h"
#include "StateA.h"
#include "Context.h"

StateB::StateB()
{
}


StateB::~StateB()
{
}


void StateB::Handle(Context* val)
{
	qDebug() << "stateB handle next is A";
	val->m_state = new StateA;
}