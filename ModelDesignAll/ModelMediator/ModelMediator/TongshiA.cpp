#include "TongshiA.h"
#include "Modiator.h"

TongshiA::TongshiA()
{
}


TongshiA::~TongshiA()
{
}

void TongshiA::setNumber(int val,Modiator* mo)
{
	m_num = val;
	mo->effectB( val );
}
