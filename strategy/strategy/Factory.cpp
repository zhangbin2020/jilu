#include "Factory.h"

Factory::Factory(QObject *parent)
	: QObject(parent)
{

}

Factory::~Factory()
{

}


BaseInterface* Factory::GetStrategy(enum_strategy type)
{
	switch (type)
	{
	case s1:
	{
			   return new Strategy1;
	}
	case s2:
	{
			   return new Strategy2;
	}
	default:
		break;
	}
	return NULL;
}
