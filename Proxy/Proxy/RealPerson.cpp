#include "RealPerson.h"
#include <QDebug>

RealPerson::RealPerson(QObject *parent)
	: BaseInterface(parent)
{

}

RealPerson::~RealPerson()
{

}

void RealPerson::SongDongXi()
{
	qDebug()<<"song dongxi gei "<<m_Subject->m_name;
}
