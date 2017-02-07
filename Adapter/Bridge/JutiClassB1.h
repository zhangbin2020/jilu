#ifndef JUTICLASSB1_H
#define JUTICLASSB1_H

#include <QObject>
#include "InterfaceB.h"

class JutiClassB1 : public InterfaceB
{
	Q_OBJECT

public:
	JutiClassB1(QObject *parent=0);
	~JutiClassB1();

	void method();

private:
	
};

#endif // JUTICLASSB1_H
