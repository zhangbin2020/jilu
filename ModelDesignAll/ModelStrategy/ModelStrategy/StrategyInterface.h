#ifndef STRATEGYINTERFACE_H
#define STRATEGYINTERFACE_H

#include <QObject>


//策略模式接口类，
class StrategyInterface : public QObject
{
	Q_OBJECT

public:
	StrategyInterface(QObject *parent=0);
	~StrategyInterface();

	void SetA(int val){ m_A = val; }
	void SetB(int val){ m_B = val; }
	virtual int GetResult();

protected:
	int m_A;
	int m_B;
	
};

#endif // STRATEGYINTERFACE_H
