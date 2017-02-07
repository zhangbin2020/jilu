#include "NotifyInterface.h"

NotifyInterface::NotifyInterface(QObject *parent)
	: QObject(parent)
{

}

NotifyInterface::~NotifyInterface()
{

}

void NotifyInterface::addOb(ObserverInterface* p)
{
	m_lsOb << p;
}

void NotifyInterface::notify()
{
	for ( auto ite=m_lsOb.begin(); ite!=m_lsOb.end(); ++ite)
	{
		(*ite)->Handle();
	}
}