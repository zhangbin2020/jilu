#ifndef CONTEXT_H
#define CONTEXT_H

#include <QObject>
#include "StrategyInterface.h"

//�������࣬
//�������Խӿ��࣬
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
