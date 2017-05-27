#include "StrategyB.h"

StrategyB::StrategyB(QObject *parent)
	: StrategyInterface(parent)
{

}

StrategyB::~StrategyB()
{

}

int StrategyB::GetResult()
{
	return m_A + m_B + 20;

}
