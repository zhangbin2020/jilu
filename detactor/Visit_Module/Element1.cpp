#include "Element1.h"
#include <QDebug>
#include "visitbase.h"

Element1::Element1(QObject *parent)
: ElementBase(parent)
{

}

Element1::~Element1()
{

}

void Element1::accept(VisitBase* visit)
{
	visit->visit1(this);
}

void Element1::dosomething()
{
	qDebug() << "element1 dosomething";
}
