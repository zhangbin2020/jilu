#include "detactor.h"
#include <QtWidgets/QApplication>

#include "JutiComponent.h"
#include "Decator1.h"
#include "Decator2.h"
#include "Decator3.h"
#include "Factory.h"


int main(int argc, char *argv[])
{
	QApplication a(argc, argv);

	Person* p = new Person;

	Decator1* d1 = new Decator1;
	Decator2* d2 = new Decator2;
	Decator3* d3 = new Decator3;

// 	DetactorInterface* d1 = Factory::create(dec1);
// 	DetactorInterface* d2 = Factory::create(dec2);
// 	DetactorInterface* d3 = Factory::create(dec3);

	d1->setCompon(p);
	d2->setCompon(d1);
	d3->setCompon(d2);

	d3->Attack();

	return a.exec();
}
