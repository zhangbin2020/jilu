#ifndef JUTICOMPONENT_H
#define JUTICOMPONENT_H

#include <QObject>
#include "componentInterface.h"

class Person : public GongNengInterface
{
	Q_OBJECT

public:
	Person(QObject *parent=0);
	~Person();

private:
	
};

#endif // JUTICOMPONENT_H
