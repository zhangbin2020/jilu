#include "templatemethod.h"
#include <QtGui/QApplication>
#include "Method1.h"
#include "Method2.h"

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
// 	TemplateMethod w;
// 	w.show();

	TemplateBase* p1 = new Method1;
	TemplateBase* p2 = new Method2;

	p1->getResult();
	p2->getResult();

	return a.exec();
}
