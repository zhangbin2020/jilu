
#include <QtWidgets/QApplication>
#include <QDebug>
#include "DecorateA.h"



//װ��ģʽ��
//װ��ģʽ����һ�������ӹ��ܣ��������������ӹ���Ҫ���Ķ࣬

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);

	Human man;

	DecorateBase dBase;
	dBase.SetHuman(man);
	dBase.run();

	DecorateA dA;
	dA.SetHuman(man);
	dA.run();

	return a.exec();
}

/*
���������������Ĺ��̣������ˣ��л��ȣ������������ֿ�ζ�ĺ�����
���������Ļ�������Ҫһ�������࣬������һ�������˺������л��Ⱥ�����������������
װ��ģʽ��һ�������࣬���������ࣺ�����ˣ��л��ȣ���������
*/
