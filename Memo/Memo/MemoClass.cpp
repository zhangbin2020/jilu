#include "MemoClass.h"

MemoClass::MemoClass(QObject *parent)
	: QObject(parent)
{

}

MemoClass::~MemoClass()
{

}

MemoClass::MemoClass(const MemoClass& other)
{
	m_power = other.getPower();
	m_name = other.getName();
}
