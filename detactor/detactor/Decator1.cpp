#include "Decator1.h"

Decator1::Decator1(QObject *parent)
: DetactorInterface(parent)
{

}

Decator1::~Decator1()
{

}

void Decator1::Attack()
{
	m_component->Attack();
	qDebug() << "dec1 gong neng";
}
