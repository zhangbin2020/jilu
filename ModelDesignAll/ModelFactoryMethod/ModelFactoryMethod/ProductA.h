#pragma once
#include "IProductA.h"


class ProductA :
	public IProductA
{
public:
	ProductA();
	~ProductA();

	void show()
	{
		qDebug() << "product A";
	}
};

