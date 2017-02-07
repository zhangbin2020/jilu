#include "Workder.h"
#include <QDebug>

Workder::Workder(QObject *parent)
	: QObject(parent)
{

}

Workder::~Workder()
{

}

void Workder::funa()
{
	qDebug() << "funa";
}

void Workder::funb()
{
	qDebug() << "funb";
}
