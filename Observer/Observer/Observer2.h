#ifndef OBSERVER2_H
#define OBSERVER2_H

#include <QObject>
#include "ObserverInterface.h"

class Observer2 : public ObserverInterface
{
	Q_OBJECT

public:
	Observer2(QObject *parent=0);
	~Observer2();

	void Handle();

private:
	
};

#endif // OBSERVER2_H
