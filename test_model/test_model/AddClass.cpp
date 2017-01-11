#include "AddClass.h"

AddClass::AddClass(QObject *parent)
	: baseInterface(parent)
{

}

AddClass::~AddClass()
{

}

int AddClass::GetResult()
{
	return m_a + m_b;
	return 1;

}
