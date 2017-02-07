#include "Method2.h"
#include <QDebug>

Method2::Method2(QObject *parent)
	: TemplateBase(parent)
{

}

Method2::~Method2()
{

}

QString Method2::Answer1()
{
	return QString("method2 anwser1");
}

QString Method2::Answer2()
{
	return QString("method2 anwser2");

}
