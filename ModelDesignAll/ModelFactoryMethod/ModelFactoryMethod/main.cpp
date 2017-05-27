
#include <QtWidgets/QApplication>
#include "ProductA.h"
#include "FactoryInterface.h"

#include "FactoryA.h"

#include <QDebug>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);

	FactoryInterface * fac = new FactoryA;

	IProductA* pa = fac->createA();
	IProductB* pb = fac->createB();

	return a.exec();
}
