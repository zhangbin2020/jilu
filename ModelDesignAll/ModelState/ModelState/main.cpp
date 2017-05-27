
#include <QtWidgets/QApplication>
#include "Context.h"
#include "StateA.h"

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);

	Context* cont = new Context;
	StateA* st = new StateA;

	cont->setState(st);

	cont->Request();
	cont->Request();
	cont->Request();

	return a.exec();
}
