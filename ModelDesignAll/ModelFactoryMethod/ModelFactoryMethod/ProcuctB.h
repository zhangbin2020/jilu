#pragma once
#include "IProductB.h"


class ProcuctB :
	public IProductB
{
public:
	ProcuctB();
	~ProcuctB();

	void show()
	{
		qDebug() << "product B";
	}
};

