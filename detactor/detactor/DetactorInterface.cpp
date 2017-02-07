#include "DetactorInterface.h"

DetactorInterface::DetactorInterface(QObject *parent)
: GongNengInterface(parent)
{

}

DetactorInterface::~DetactorInterface()
{

}

void DetactorInterface::setCompon(GongNengInterface* p)
{ 
	m_component = p;
}

void DetactorInterface::Attack()
{
	m_component->Attack();
}
