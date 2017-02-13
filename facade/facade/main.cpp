#include "facade.h"
#include <QtGui/QApplication>

#include "FacadeObj.h"

/*
//���ģʽ 
//�ǳ��򵥣����ǶԶ�����ʵ����һ����װ��
*/
int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
// 	facade w;
// 	w.show();

	FacadeObj* obj  = new FacadeObj;
	ClassA *ca = new ClassA;
	ClassB *cb = new ClassB;

	obj->SetClassA(ca);//��ClassA���з�װ��
	obj->SetClassB(cb);
	obj->Method();

	return a.exec();
}
