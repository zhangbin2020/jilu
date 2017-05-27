#pragma once
#include <QDebug>

#include "InterfaceRoad.h"

class InterfaceCar
{
public:
	InterfaceCar();
	~InterfaceCar();

	void setRoad(InterfaceRoad*val){ m_road = val; }

	virtual void run()
	{

	}

protected:
	InterfaceRoad* m_road;
};

