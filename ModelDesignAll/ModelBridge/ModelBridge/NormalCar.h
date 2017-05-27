#pragma once
#include "InterfaceCar.h"


class NormalCar :
	public InterfaceCar
{
public:
	NormalCar();
	~NormalCar();

	void run()
	{
		qDebug() << "normal car running on " << m_road->m_name;
	}
};

