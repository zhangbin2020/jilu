#ifndef JUTICLASSA_H
#define JUTICLASSA_H

#include <QObject>
#include "InterfaceA.h"


class JutiClassA : public InterfaceA
{
	Q_OBJECT

public:
	JutiClassA(QObject *parent=0);
	~JutiClassA();



private:

};

#endif // JUTICLASSA_H
