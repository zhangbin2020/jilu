#include "Context.h"


Context::Context()
{
}


Context::~Context()
{
}

void Context::Request(){

	m_state->Handle(this);
}