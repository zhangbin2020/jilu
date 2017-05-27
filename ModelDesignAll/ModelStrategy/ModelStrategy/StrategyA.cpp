#include "StrategyA.h"

StrategyA::StrategyA(QObject *parent)
	: StrategyInterface(parent)
{

}

StrategyA::~StrategyA()
{

}

int StrategyA::GetResult()
{
	return m_A + m_B + 10;
}
