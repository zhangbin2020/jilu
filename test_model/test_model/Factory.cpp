#include "Factory.h"
#include "AddClass.h"
#include "DeleteClass.h"

Factory::Factory(QObject *parent)
	: QObject(parent)
{

}

Factory::~Factory()
{

}

baseInterface* Factory::Create( enum_factory ope )
{
	switch(ope)
	{
	case enum_add:
		{
			return new AddClass;
			break;
		}
	case enum_del:
		{
			return new DeleteClass;
			break;
		}
	}

	return NULL;
}
