#include "Visit1.h"

Visit1::Visit1(QObject *parent)
: VisitBase(parent)
{

}

Visit1::~Visit1()
{

}

void Visit1::visit1(ElementBase* e1)
{
	e1->dosomething();
}

void Visit1::visit2(ElementBase* e2)
{
	e2->dosomething();
}
