#ifndef STRATEGYA_H
#define STRATEGYA_H

#include <QObject>
#include "StrategyInterface.h"
//���������A
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
