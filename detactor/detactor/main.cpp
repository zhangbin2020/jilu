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
//װ��ģʽ
*/

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);

	ClassA AA;
	ClassB BB;

	AA.MethodA();
	AA.MethodB(&BB);// BB.Method(&AA);//B��A�ķ����ߣ�B����A��


	/*
	����һ�������д�����һЩ�뱾������ɣ����߹�ϵ�������Ĳ�����Ϊ�˱�����Щ������Ⱦ������������ʹ�÷�����ģʽ������Щ������װ����������ȥ��
	����һ������У����������ƵĲ�����Ϊ�˱�����ִ����ظ��Ĵ��룬Ҳ���Խ���Щ�ظ��Ĳ�����װ����������ȥ��
	*/

	//������
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



	Person* p = new Person;//baseInterface����


	//���幦�ܣ���DetactorInterface��������
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
