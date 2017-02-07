#ifndef OBSERVER1_H
#define OBSERVER1_H

#include <QObject>
#include "ObserverInterface.h"

class Observer1 : public ObserverInterface
{
	Q_OBJECT

public:
	Observer1(QObject *parent=0);
	~Observer1();

	void Handle();

private:
	
};

#endif // OBSERVER1_H
