#include "ClassA.h"
#include <QDebug>

ClassA::ClassA(QObject *parent)
	: QObject(parent)
{

}

ClassA::~ClassA()
{

}

void ClassA::MethodA()
{
	qDebug()<<"A";
}
