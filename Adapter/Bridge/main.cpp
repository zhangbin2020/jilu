#include "bridge.h"
#include <QtGui/QApplication>

#include "JutiClassA.h"
#include "JutiClassB1.h"
//�Ž�

/*
�Ž�ģʽ����������ģʽ���߼��ĵط��������Ž�ģʽ��װ���ǻ���ӿڵ�һ��ʵ����
*/

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
// 	Bridge w;
// 	w.show();

	//InterfaceA �з�װ���ǻ���ӿ�InterfaceB��һ��ʵ����
	InterfaceA* pA = new JutiClassA;
	InterfaceB* pB = new JutiClassB1;
	pA->setB(pB);
	pA->UserInterfaceB();

	return a.exec();
}
