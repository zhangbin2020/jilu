#ifndef STRATEGYB_H
#define STRATEGYB_H

#include <QObject>
#include "StrategyInterface.h"

class StrategyB : public StrategyInterface
{
	Q_OBJECT

public:
	StrategyB(QObject *parent=0);
	~StrategyB();

	int GetResult();

private:
	
};

#endif // STRATEGYB_H
