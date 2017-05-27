#include "Modiator.h"


Modiator::Modiator()
{
}


Modiator::~Modiator()
{
}


void Modiator::effectA(int val)
{
	m_ta->m_num = val + 1;
}

void Modiator::effectB(int val)
{
	m_tb->m_num = val - 1;
}