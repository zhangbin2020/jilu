#pragma once
#include "InterfaceCar.h"


class SuperCar :
	public InterfaceCar
{
public:
	SuperCar();
	~SuperCar();

	void run()
	{
		qDebug() << "super car running on " << m_road->m_name;
	}
};

