#pragma once

#include <QString>

//�۲��߻���
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

