#include "Method1.h"
#include <QDebug>

Method1::Method1(QObject *parent)
	: TemplateBase(parent)
{

}

Method1::~Method1()
{

}

QString Method1::Answer1()
{
	return QString("method1 anwser1");
}

QString Method1::Answer2()
{
	return QString("method1 anwser1");

}
