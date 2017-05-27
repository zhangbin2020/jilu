#pragma once
#include "FactoryInterface.h"

#include "ProductA.h"
#include "ProcuctB.h"

class FactoryA :
	public FactoryInterface
{
public:
	FactoryA();
	~FactoryA();

	IProductA* createA();
	IProductB* createB();
};

