#include "adapter.h"
#include <QtGui/QApplication>
#include "OutClass.h"


//适配器模式
int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
// 	Adapter w;
// 	w.show();


	//适配器模式的关键在于，定义外部接口OutInterface，
	OutInterface* pClass = new OutClass;
	pClass->Request();

	return a.exec();
}
