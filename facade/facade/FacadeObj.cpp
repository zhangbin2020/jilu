#include "FacadeObj.h"

FacadeObj::FacadeObj(QObject *parent)
	: QObject(parent)
{

}

FacadeObj::~FacadeObj()
{

}

void FacadeObj::Method()
{
	m_ClassA->MethodA();
	m_ClassB->MethodB();
}
