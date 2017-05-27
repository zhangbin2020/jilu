
#include <QtWidgets/QApplication>
#include <QDebug>
#include "DecorateA.h"



//装饰模式，
//装饰模式，给一个类增加功能，比派生子类增加功能要灵活的多，

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
比如制作汉堡包的过程：夹生菜，夹火腿，夹辣椒等三种口味的汉堡，
单纯派生的话，先需要一个汉堡类，再派生一个夹生菜汉堡，夹火腿汉堡，夹辣椒汉堡，
装饰模式：一个汉堡类，三个功能类：夹生菜，夹火腿，夹辣椒，
*/
