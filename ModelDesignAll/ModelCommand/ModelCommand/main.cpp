
#include <QtWidgets/QApplication>

#include "Invoker.h"
#include "TV.h"
#include "OpenCommand.h"
#include "turnOffCommand.h"
#include "SwitchChannelCommand.h"

//����ģʽ��
int main(int argc, char *argv[])
{
	QApplication a(argc, argv);


	//lam
	//��[]��ʼ��
	auto fun = []{
		qDebug() << "test lam";
	};

	[]
	{
		
	}();

	fun();

	TV tv;

// 	tv.open();
// 	tv.turnOff();
// 	tv.ChangeChannel();


	Invoker invoke;

	OpenCommand opencmd;
	opencmd.SetTV(tv);
	invoke.open = opencmd;

	turnOffCommand offcmd;
	offcmd.SetTV(tv);
	invoke.off = offcmd;

	SwitchChannelCommand switchchannel;
	switchchannel.SetTV(tv);
	invoke.swit = switchchannel;

	invoke.openTv();
	invoke.offTv();
	invoke.change();

	return a.exec();
}
