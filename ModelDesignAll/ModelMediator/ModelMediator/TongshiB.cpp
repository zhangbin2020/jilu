#include "TongshiB.h"
#include "Modiator.h"

TongshiB::TongshiB()
{
}


TongshiB::~TongshiB()
{
}

void TongshiB::setNumber(int val, Modiator* mo)
{
	m_num = val;
	mo->effectA(val);
}
