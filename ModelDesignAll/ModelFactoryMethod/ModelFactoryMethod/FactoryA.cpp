#include "FactoryA.h"


FactoryA::FactoryA()
{

}


FactoryA::~FactoryA()
{
}


IProductA* FactoryA::createA()
{
	return new ProductA;
}

IProductB* FactoryA::createB()
{
	return new ProcuctB;
}


