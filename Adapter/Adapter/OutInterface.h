#ifndef OUTINTERFACE_H
#define OUTINTERFACE_H

#include <QObject>


class OutInterface : public QObject
{
	Q_OBJECT

public:
	OutInterface(QObject *parent);
	~OutInterface();

	virtual void Request();

private:
	
};

#endif // OUTINTERFACE_H
