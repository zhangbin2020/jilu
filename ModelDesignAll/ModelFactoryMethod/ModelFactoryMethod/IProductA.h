#pragma once

#include <QString>
#include <QDebug>

class IProductA
{
public:
	IProductA();
	~IProductA();

	virtual void show(){}

	QString m_name;
};

