#include "DeleteClass.h"

DeleteClass::DeleteClass(QObject *parent)
	: baseInterface(parent)
{

}

DeleteClass::~DeleteClass()
{

}

int DeleteClass::GetResult()
{
	return m_a - m_b;
	return 1;
}