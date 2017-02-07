#include "OutClass.h"

OutClass::OutClass(QObject *parent)
	: OutInterface(parent)
{
	m_Adaptor = new AdaportInter;
}

OutClass::~OutClass()
{

}

void OutClass::Request()
{
	m_Adaptor->SpecialRequest();
}
