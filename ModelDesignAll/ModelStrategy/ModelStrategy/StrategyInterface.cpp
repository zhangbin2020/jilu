#include "StrategyInterface.h"

StrategyInterface::StrategyInterface(QObject *parent)
	: QObject(parent)
{

}

StrategyInterface::~StrategyInterface()
{

}

int StrategyInterface::GetResult()
{
	return 0;
}
