#include "BaseInterface.h"

BaseInterface::BaseInterface(QObject *parent)
	: QObject(parent)
{

}

BaseInterface::~BaseInterface()
{

}

double BaseInterface::GetShould()
{
	return 1;
}
