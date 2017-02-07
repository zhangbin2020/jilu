#include "strategy.h"
#include <QtWidgets/QApplication>

#include "Factory.h"


int main(int argc, char *argv[])
{
	QApplication a(argc, argv);

	//���ԣ���Ҫ�ÿͻ���֪��baseinterface��Strategy1��Strategy2�����࣬
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
	* ����ģʽ�� ����һ���򵥵��麯����
	* һ����ͬ�Ļ����У���һ���麯����Ȼ��������ȥʵ������麯����
	*/
	
	BaseInterface* pBase = Factory::GetStrategy(s2);

	pBase->setPrice(100);
	double d = pBase->GetShould();

	return a.exec();
}
