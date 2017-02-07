#include "JutiClassB1.h"
#include <QDebug>

JutiClassB1::JutiClassB1(QObject *parent)
	: InterfaceB(parent)
{

}

JutiClassB1::~JutiClassB1()
{

}

void JutiClassB1::method()
{
	qDebug()<< "JutiClassB1::method()";
}
