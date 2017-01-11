#include "baseInterface.h"

baseInterface::baseInterface(QObject *parent)
	: QObject(parent)
{

}

baseInterface::~baseInterface()
{

}

int baseInterface::GetResult()
{

	return 1;
}
