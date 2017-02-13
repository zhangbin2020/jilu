#include "detactor.h"
#include <QtWidgets/QApplication>

#include "JutiComponent.h"
#include "Decator1.h"
#include "Decator2.h"
#include "Decator3.h"
#include "Factory.h"



#include "ClassB.h"
#include "../Visit_Module/Element1.h"
#include "../Visit_Module/Element2.h"
#include "../Visit_Module/Visit1.h"
#include "../Visit_Module/ObjStruct.h"

/*
//装饰模式
*/

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);

	ClassA AA;
	ClassB BB;

	AA.MethodA();
	AA.MethodB(&BB);// BB.Method(&AA);//B是A的访问者，B访问A，


	/*
	假如一个对象中存在着一些与本对象不相干（或者关系较弱）的操作，为了避免这些操作污染这个对象，则可以使用访问者模式来把这些操作封装到访问者中去。
	假如一组对象中，存在着相似的操作，为了避免出现大量重复的代码，也可以将这些重复的操作封装到访问者中去。
	*/

	//访问者
// 	QList<ElementBase*> lsElement;
// 	for (int i = 0; i < 20; i++)
// 	{
// 		if ( i%2 )
// 		{
// 			lsElement << new Element1;
// 		}
// 		else
// 		{
// 			lsElement << new Element2;
// 		}
// 	}

	ObjStruct obj;
	QList<ElementBase*> lsElement = obj.GetElement();

	for (auto i = lsElement.begin(); i!=lsElement.end(); i++)
	{
		(*i)->accept( new Visit1 );
	}



	Person* p = new Person;//baseInterface派生


	//具体功能，从DetactorInterface类派生，
	Decator1* d1 = new Decator1;
	Decator2* d2 = new Decator2;
	Decator3* d3 = new Decator3;

// 	DetactorInterface* d1 = Factory::create(dec1);
// 	DetactorInterface* d2 = Factory::create(dec2);
// 	DetactorInterface* d3 = Factory::create(dec3);

	d1->setCompon(p);
	d2->setCompon(d1);
	d3->setCompon(d2);

	d3->Attack();

	return a.exec();
}
