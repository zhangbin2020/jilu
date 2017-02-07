#include "ClassB.h"
#include <QDebug>

ClassB::ClassB(QObject *parent)
	: QObject(parent)
{

}

ClassB::~ClassB()
{

}

void ClassB::MethodB()
{
	qDebug()<<"B";
}