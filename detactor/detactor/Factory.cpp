#include "Factory.h"

Factory::Factory(QObject *parent)
	: QObject(parent)
{

}

Factory::~Factory()
{

}

DetactorInterface* Factory::create(dec_type type)
{
	switch (type)
	{
	case dec1:
	{
				 return new Decator1;
	}
	case dec2:
	{
				 return new Decator2;
	}
	case  dec3:
	{
				  return new Decator3;
	}
	default:
		break;
	}
	return NULL;
}
