#pragma once


#include <QList>
#include "ObserverInterface.h"
#include <QString>

//���۲��߻���
class WatchedInterface
{
public:
	WatchedInterface();
	~WatchedInterface();

	virtual void notify()
	{
		for ( auto observer:m_observer )
		{
			observer->handle();
		}
	}

	void add(ObserverInterface* val)
	{
		m_observer << val;
	}


	QList<ObserverInterface*> m_observer;
	QString m_state;
};

