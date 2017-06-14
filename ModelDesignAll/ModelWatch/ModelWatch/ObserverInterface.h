#pragma once

#include <QString>

//观察者基类
class ObserverInterface
{
public:
	ObserverInterface();
	~ObserverInterface();

	virtual void handle()
	{

	}

	QString m_name;
};

