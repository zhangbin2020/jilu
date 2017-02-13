#include "facade.h"
#include <QtGui/QApplication>

#include "FacadeObj.h"

/*
//外观模式 
//非常简单，就是对多个类的实例的一个封装，
*/
int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
// 	facade w;
// 	w.show();

	FacadeObj* obj  = new FacadeObj;
	ClassA *ca = new ClassA;
	ClassB *cb = new ClassB;

	obj->SetClassA(ca);//对ClassA进行封装，
	obj->SetClassB(cb);
	obj->Method();

	return a.exec();
}
