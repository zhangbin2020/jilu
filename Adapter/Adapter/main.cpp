#include "adapter.h"
#include <QtGui/QApplication>
#include "OutClass.h"


//������ģʽ
int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
// 	Adapter w;
// 	w.show();


	//������ģʽ�Ĺؼ����ڣ������ⲿ�ӿ�OutInterface��
	OutInterface* pClass = new OutClass;
	pClass->Request();

	return a.exec();
}
