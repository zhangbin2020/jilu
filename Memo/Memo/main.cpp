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

	//take������ֻ���ṩ�ӿڣ�set��get memo
	TakerClass* take = new TakerClass;
	take->setMemo(&( role->saveState() ) );//�������

	role->fight();

	role->RecoverState( take->GetMemo() );

	return a.exec();
}
