#ifndef STRATEGYA_H
#define STRATEGYA_H

#include <QObject>
#include "StrategyInterface.h"
//具体策略类A
class StrategyA : public StrategyInterface
{
	Q_OBJECT

public:
	StrategyA(QObject *parent=0);
	~StrategyA();

	int GetResult();

private:
	
};

#endif // STRATEGYA_H
