#include "memo.h"
#include <QtWidgets/QApplication>

#include "TakerClass.h"
#include "RoleClass.h"

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
// 	Memo w;
// 	w.show();
	

	RoleClass* role = new RoleClass;
	role->setName("petter");

	//take的作用只是提供接口，set和get memo
	TakerClass* take = new TakerClass;
	take->setMemo(&( role->saveState() ) );//保存进度

	role->fight();

	role->RecoverState( take->GetMemo() );

	return a.exec();
}
