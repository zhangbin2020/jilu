#ifndef DECATOR3_H
#define DECATOR3_H

#include <QObject>
#include "DetactorInterface.h"

class Decator3 : public DetactorInterface
{
	Q_OBJECT

public:
	Decator3(QObject *parent=0);
	~Decator3();

	void Attack();

private:
	
};

#endif // DECATOR3_H
