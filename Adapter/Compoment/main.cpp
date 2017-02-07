#include "compoment.h"
#include <QtGui/QApplication>

#include "ShiChangCompoment.h"
#include "HrCompoment.h"



//注意点
//CompomentInterface作用：提供接口，root，分支，叶子都要从该类派生

//组合模式
int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
// 	Compoment w;
// 	w.show();

	CompomentInterface* root = new ShiChangCompoment( 0,"zong gong si" );

	//增加叶子
	CompomentInterface* beijingHr = new HrCompoment(0,"beijingHr");
	root->Add(beijingHr);

	//增加分支
	CompomentInterface* BeijingShichang = new ShiChangCompoment( 0,"beijing shichang" );
	CompomentInterface* nanjingShichang = new ShiChangCompoment( 0,"nanjing shichang" );
	CompomentInterface* shanghaiShichang = new ShiChangCompoment( 0,"shanghaijing shichang" );
	BeijingShichang->Add(nanjingShichang);
	BeijingShichang->Add(shanghaiShichang);

	root->Add(BeijingShichang);

	root->Show(1);


	return a.exec();
}
