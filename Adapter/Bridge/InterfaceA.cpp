#include "InterfaceA.h"

InterfaceA::InterfaceA(QObject *parent)
	: QObject(parent)
{

}

InterfaceA::~InterfaceA()
{

}

void InterfaceA::UserInterfaceB()
{
	m_ClassB->method();
}
