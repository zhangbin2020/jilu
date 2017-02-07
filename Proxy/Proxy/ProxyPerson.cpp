#include "ProxyPerson.h"

ProxyPerson::ProxyPerson(QObject *parent)
	: BaseInterface(parent)
{

}

ProxyPerson::~ProxyPerson()
{

}

void ProxyPerson::SongDongXi()
{
	m_RealPerson->SongDongXi();
}
