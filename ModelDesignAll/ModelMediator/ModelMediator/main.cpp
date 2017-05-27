
#include <QtWidgets/QApplication>

#include "Modiator.h"
#include "TongshiA.h"
#include "TongshiB.h"
#include <QDebug>

//中介者模式，
int main(int argc, char *argv[])
{
	QApplication a(argc, argv);

	TongshiInterface* ta = new TongshiA;
	TongshiInterface* tb = new TongshiB;
	Modiator* mo = new Modiator;
	mo->m_ta = ta;
	mo->m_tb = tb;

	ta->setNumber(100,mo);

	qDebug() << ta->m_num << tb->m_num;

	tb->setNumber(1000,mo);
	qDebug() << ta->m_num << tb->m_num;

	return a.exec();
}
