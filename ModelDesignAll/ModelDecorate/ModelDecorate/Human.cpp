#include "Human.h"

Human::Human(QObject *parent)
	: QObject(parent)
{

}

Human::~Human()
{

}

Human::Human(const Human& other)
{
	*this = other;
}

Human& Human::operator = (const Human&other)
{
	return *this;
}
