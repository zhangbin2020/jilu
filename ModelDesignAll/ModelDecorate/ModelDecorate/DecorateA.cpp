#include "DecorateA.h"

DecorateA::DecorateA(QObject *parent)
	: DecorateBase(parent)
{

}

DecorateA::~DecorateA()
{

}

//±ßÅÜ±ßÌø
void DecorateA::jump()
{
	qDebug() << "add jump";
}