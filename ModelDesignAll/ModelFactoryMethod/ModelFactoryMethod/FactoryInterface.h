#pragma once



#include "IProductA.h"
#include "IProductB.h"

class FactoryInterface
{
public:
	FactoryInterface();
	~FactoryInterface();



	virtual IProductA* createA(){ return nullptr; }
	virtual IProductB* createB(){ return nullptr; }
};

