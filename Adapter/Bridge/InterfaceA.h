#ifndef INTERFACEA_H
#define INTERFACEA_H

#include <QObject>
#include "InterfaceB.h"

class InterfaceA : public QObject
{
	Q_OBJECT

public:
	InterfaceA(QObject *parent=0);
	~InterfaceA();

	void setB(InterfaceB* val ){m_ClassB = val;}

	virtual void UserInterfaceB();

protected:
	InterfaceB* m_ClassB;
	
};

#endif // INTERFACEA_H
