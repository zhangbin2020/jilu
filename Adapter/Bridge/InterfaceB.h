#ifndef INTERFACEB_H
#define INTERFACEB_H

#include <QObject>

class InterfaceB : public QObject
{
	Q_OBJECT

public:
	InterfaceB(QObject *parent=0);
	~InterfaceB();


	virtual void method();

private:
	
};

#endif // INTERFACEB_H
