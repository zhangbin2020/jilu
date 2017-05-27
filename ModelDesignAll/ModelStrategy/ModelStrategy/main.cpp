
#include <QtWidgets/QApplication>
#include "Context.h"
#include "StrategyA.h"
#include "StrategyB.h"


//策略模式，
//客户端只需要知道一个context上下文类就行，

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
