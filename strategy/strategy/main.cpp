#include "strategy.h"
#include <QtWidgets/QApplication>

#include "Factory.h"


int main(int argc, char *argv[])
{
	QApplication a(argc, argv);

	//策略，需要让客户端知道baseinterface和Strategy1，Strategy2三个类，
// 	BaseInterface* pBase = 0;
// 
// 	enum_strategy ss = s1;
// 
// 	switch (ss)
// 	{
// 	case s1:
// 	{
// 			   pBase = new Strategy1;
// 	}
// 	case s2:
// 	{
// 			   pBase = new Strategy2;
// 	}
// 	default:
//		break;
// 	}


	/*
	* 策略模式， 就是一个简单的虚函数，
	* 一个共同的基类中，有一个虚函数，然后多个子类去实现这个虚函数，
	*/
	
	BaseInterface* pBase = Factory::GetStrategy(s2);

	pBase->setPrice(100);
	double d = pBase->GetShould();

	return a.exec();
}
