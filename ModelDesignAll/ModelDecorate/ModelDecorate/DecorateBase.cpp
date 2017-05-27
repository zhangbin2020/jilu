#include "DecorateBase.h"

DecorateBase::DecorateBase(QObject *parent)
	: Human(parent)
{

}

DecorateBase::~DecorateBase()
{

}


//功能二，
//边跑步边唱歌
void DecorateBase::Sing()
{
	qDebug() << " add sing ";
}