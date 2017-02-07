#ifndef DETACTORINTERFACE_H
#define DETACTORINTERFACE_H

#include <QObject>
#include "componentInterface.h"
#include <QDebug>

class DetactorInterface : public GongNengInterface
{
	Q_OBJECT

public:
	DetactorInterface(QObject *parent=0);
	~DetactorInterface();

	void setCompon(GongNengInterface* p);

	virtual void Attack();

protected:
	GongNengInterface* m_component;

private:
	
};

#endif // DETACTORINTERFACE_H
