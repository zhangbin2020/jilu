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


	
	BaseInterface* pBase = Factory::GetStrategy(s2);

	pBase->setPrice(100);
	double d = pBase->GetShould();

	return a.exec();
}
