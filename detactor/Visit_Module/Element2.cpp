#include "Element2.h"

#include <QDebug>
#include "visitbase.h"

Element2::Element2(QObject *parent)
: ElementBase(parent)
{

}

Element2::~Element2()
{

}

void Element2::accept(VisitBase* visit)
{
	visit->visit2(this);
}

void Element2::dosomething()
{
	qDebug() << "element2 dosomething";
}
