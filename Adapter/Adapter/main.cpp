#include "adapter.h"
#include <QtGui/QApplication>
#include "OutClass.h"


//������ģʽ
/*
//���Ƕ�һ�������һ��򵥵ķ�װ�������������ģʽ��
*/
int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
// 	Adapter w;
// 	w.show();


	//outClass���У���װ��һ������Adaptor��ʵ����
	OutInterface* pClass = new OutClass;
	pClass->Request();//ֱ�ӵ��ö���Adaptor��request����������

	return a.exec();
}
