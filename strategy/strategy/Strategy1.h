#ifndef STRATEGY1_H
#define STRATEGY1_H

#include <QObject>
#include "BaseInterface.h"

class Strategy1 : public BaseInterface
{
	Q_OBJECT

public:
	Strategy1(QObject *parent=0);
	~Strategy1();

	double GetShould(){ return m_price*0.5; }

private:
	
};

#endif // STRATEGY1_H
