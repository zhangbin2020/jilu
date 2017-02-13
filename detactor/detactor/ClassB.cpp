#include "ClassB.h"

ClassB::ClassB(QObject *parent)
	: QObject(parent)
{

}

ClassB::~ClassB()
{

}

void ClassB::Method(ClassA* A)
{
	A->MethodA();
}
