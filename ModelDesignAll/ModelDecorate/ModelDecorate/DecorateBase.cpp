#include "DecorateBase.h"

DecorateBase::DecorateBase(QObject *parent)
	: Human(parent)
{

}

DecorateBase::~DecorateBase()
{

}


//���ܶ���
//���ܲ��߳���
void DecorateBase::Sing()
{
	qDebug() << " add sing ";
}