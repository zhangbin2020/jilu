#include "Decator2.h"

Decator2::Decator2(QObject *parent)
: DetactorInterface(parent)
{

}

Decator2::~Decator2()
{

}

void Decator2::Attack()
{
	m_component->Attack();
	qDebug() << "dec2 gongneng";
}
