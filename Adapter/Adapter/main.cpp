#include "adapter.h"
#include <QtGui/QApplication>
#include "OutClass.h"


//适配器模式
/*
//就是对一个类进行一层简单的封装，这就是适配器模式，
*/
int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
// 	Adapter w;
// 	w.show();


	//outClass类中，封装另一个对象Adaptor的实例，
	OutInterface* pClass = new OutClass;
	pClass->Request();//直接调用对象Adaptor的request（）方法，

	return a.exec();
}
