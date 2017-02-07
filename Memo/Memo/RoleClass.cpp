#include "RoleClass.h"
#include <QDebug>

RoleClass::RoleClass(QObject *parent)
	: QObject(parent)
	, m_power(100)
	, m_name()
{

}

RoleClass::~RoleClass()
{

}

void RoleClass::fight()
{
	m_power = 0;

	qDebug() << "after fight " << m_power << m_name;
}

MemoClass RoleClass::saveState()
{
	MemoClass memo;

	memo.setPower(m_power);
	memo.setName(m_name);

	return memo;
}

void RoleClass::RecoverState(MemoClass* val)
{
	m_power = val->getPower();
	m_name = val->getName();

	qDebug() << "recover state" << m_power << m_name;
}
