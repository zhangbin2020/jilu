#include "bridge.h"
#include <QtGui/QApplication>

#include "JutiClassA.h"
#include "JutiClassB1.h"
//桥接

/*
桥接模式，比适配器模式，高级的地方，就是桥接模式封装的是基类接口的一个实例，
*/

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
// 	Bridge w;
// 	w.show();

	//InterfaceA 中封装的是基类接口InterfaceB的一个实例，
	InterfaceA* pA = new JutiClassA;
	InterfaceB* pB = new JutiClassB1;
	pA->setB(pB);
	pA->UserInterfaceB();

	return a.exec();
}
