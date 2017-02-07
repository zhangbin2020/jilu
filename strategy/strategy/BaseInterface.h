#ifndef BASEINTERFACE_H
#define BASEINTERFACE_H

#include <QObject>

class BaseInterface : public QObject
{
	Q_OBJECT

public:
	BaseInterface(QObject *parent);
	~BaseInterface();

	void setPrice(double n){ m_price = n; }

	virtual double GetShould();

protected:
	double m_price;
	
};

#endif // BASEINTERFACE_H
