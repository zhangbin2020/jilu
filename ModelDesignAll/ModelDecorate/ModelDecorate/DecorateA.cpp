#include "DecorateA.h"

DecorateA::DecorateA(QObject *parent)
	: DecorateBase(parent)
{

}

DecorateA::~DecorateA()
{

}

//���ܱ���
void DecorateA::jump()
{
	qDebug() << "add jump";
}