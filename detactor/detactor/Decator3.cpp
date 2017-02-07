#include "Decator3.h"

Decator3::Decator3(QObject *parent)
: DetactorInterface(parent)
{

}

Decator3::~Decator3()
{

}

void Decator3::Attack()
{
	m_component->Attack();
	qDebug() << "dec3 gongneng";
}
