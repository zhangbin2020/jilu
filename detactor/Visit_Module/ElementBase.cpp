#include "ElementBase.h"
#include "visitbase.h"
#include "QDebug"

ElementBase::ElementBase(QObject *parent)
	: QObject(parent)
{

}

ElementBase::~ElementBase()
{

}

void ElementBase::accept(VisitBase* visit)
{
	
}

void ElementBase::dosomething()
{

}