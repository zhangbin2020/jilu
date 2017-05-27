
#include <QtWidgets/QApplication>
#include "Context.h"
#include "StrategyA.h"
#include "StrategyB.h"


//����ģʽ��
//�ͻ���ֻ��Ҫ֪��һ��context����������У�

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);

	Context* pt = new Context(new StrategyA);
	pt->SetA(1);
	pt->SetB(2);
	int n = pt->GetResult();

	pt = new Context(new StrategyB);
	pt->SetA(1);
	pt->SetB(2);
	n = pt->GetResult();

	return a.exec();
}
