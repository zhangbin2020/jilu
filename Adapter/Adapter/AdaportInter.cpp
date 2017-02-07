#include "AdaportInter.h"
#include <QDebug>

AdaportInter::AdaportInter(QObject *parent)
	: QObject(parent)
{

}

AdaportInter::~AdaportInter()
{

}

void AdaportInter::SpecialRequest()
{
	qDebug()<< "AdaportInter::SpecialRequest()";
}