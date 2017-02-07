#include "TemplateBase.h"
#include <QDebug>


TemplateBase::TemplateBase(QObject *parent)
	: QObject(parent)
{

}

TemplateBase::~TemplateBase()
{

}

void TemplateBase::getResult()
{

	qDebug()<<"result" << Answer1()<< Answer2();
}


QString TemplateBase::Answer1()
{
	return "";
}

QString TemplateBase::Answer2()
{
	return "";

}