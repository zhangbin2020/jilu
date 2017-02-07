#ifndef STRATEGY2_H
#define STRATEGY2_H

#include <QObject>
#include "BaseInterface.h"

class Strategy2 : public BaseInterface
{
	Q_OBJECT

public:
	Strategy2(QObject *parent=0);
	~Strategy2();

	double GetShould(){ return m_price*0.9; }

private:
	
};

#endif // STRATEGY2_H
