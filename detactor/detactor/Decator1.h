#ifndef DECATOR1_H
#define DECATOR1_H

#include <QObject>
#include "DetactorInterface.h"

class Decator1 : public DetactorInterface
{
	Q_OBJECT

public:
	Decator1(QObject *parent=0);
	~Decator1();

	void Attack();

private:
	
};

#endif // DECATOR1_H
