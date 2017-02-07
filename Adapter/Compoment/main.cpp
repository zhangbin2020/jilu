#include "compoment.h"
#include <QtGui/QApplication>

#include "ShiChangCompoment.h"
#include "HrCompoment.h"



//ע���
//CompomentInterface���ã��ṩ�ӿڣ�root����֧��Ҷ�Ӷ�Ҫ�Ӹ�������

//���ģʽ
int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
// 	Compoment w;
// 	w.show();

	CompomentInterface* root = new ShiChangCompoment( 0,"zong gong si" );

	//����Ҷ��
	CompomentInterface* beijingHr = new HrCompoment(0,"beijingHr");
	root->Add(beijingHr);

	//���ӷ�֧
	CompomentInterface* BeijingShichang = new ShiChangCompoment( 0,"beijing shichang" );
	CompomentInterface* nanjingShichang = new ShiChangCompoment( 0,"nanjing shichang" );
	CompomentInterface* shanghaiShichang = new ShiChangCompoment( 0,"shanghaijing shichang" );
	BeijingShichang->Add(nanjingShichang);
	BeijingShichang->Add(shanghaiShichang);

	root->Add(BeijingShichang);

	root->Show(1);


	return a.exec();
}
