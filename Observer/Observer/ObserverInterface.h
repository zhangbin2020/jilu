#ifndef OBSERVERINTERFACE_H
#define OBSERVERINTERFACE_H

#include <QObject>

class ObserverInterface : public QObject
{
	Q_OBJECT

public:
	ObserverInterface(QObject *parent);
	~ObserverInterface();

	virtual void Handle();

private:
	
};

#endif // OBSERVERINTERFACE_H
