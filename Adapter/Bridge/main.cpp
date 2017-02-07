#include "bridge.h"
#include <QtGui/QApplication>

#include "JutiClassA.h"
#include "JutiClassB1.h"
//ге╫с

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
// 	Bridge w;
// 	w.show();

	InterfaceA* pA = new JutiClassA;
	InterfaceB* pB = new JutiClassB1;
	pA->setB(pB);
	pA->UserInterfaceB();

	return a.exec();
}
