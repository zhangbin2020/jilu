#ifndef NOTIFYINTERFACE_H
#define NOTIFYINTERFACE_H

#include <QObject>
#include "ObserverInterface.h"

class NotifyInterface : public QObject
{
	Q_OBJECT

public:
	NotifyInterface(QObject *parent);
	~NotifyInterface();

	void addOb(  ObserverInterface*p );

	void notify();

protected:
	QList<ObserverInterface*> m_lsOb;

private:
	
};

#endif // NOTIFYINTERFACE_H
