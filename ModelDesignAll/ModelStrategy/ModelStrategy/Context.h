#ifndef CONTEXT_H
#define CONTEXT_H

#include <QObject>
#include "StrategyInterface.h"

//上下文类，
//包含策略接口类，
class Context : public QObject
{
	Q_OBJECT

public:
	Context(StrategyInterface*, QObject *parent = 0);
	~Context();


	void SetA(int val){ m_A = val; }
	void SetB(int val){ m_B = val; }
	virtual int GetResult();

protected:
	int m_A;
	int m_B;
	StrategyInterface* m_strategy;
	
};

#endif // CONTEXT_H
