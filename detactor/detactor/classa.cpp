#include "classa.h"
#include "ClassB.h"
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
	qDebug() << "show a";
}

void ClassA::MethodB(ClassB b)
{
	b.Method(this);
}
