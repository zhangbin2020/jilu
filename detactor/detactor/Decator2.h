#ifndef DECATOR2_H
#define DECATOR2_H

#include <QObject>
#include "DetactorInterface.h"

class Decator2 : public DetactorInterface
{
	Q_OBJECT

public:
	Decator2(QObject *parent=0);
	~Decator2();

	void Attack();

private:
	
};

#endif // DECATOR2_H
