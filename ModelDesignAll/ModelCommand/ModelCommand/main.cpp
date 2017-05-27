
#include <QtWidgets/QApplication>

#include "Invoker.h"
#include "TV.h"
#include "OpenCommand.h"
#include "turnOffCommand.h"

//ÃüÁîÄ£Ê½£¬
int main(int argc, char *argv[])
{
	QApplication a(argc, argv);


	TV tv;
	Invoker invoke;

	OpenCommand opencmd;
	opencmd.SetTV(tv);
	invoke.open = opencmd;

	turnOffCommand offcmd;
	offcmd.SetTV(tv);
	invoke.off = offcmd;

	invoke.openTv();
	invoke.offTv();

	return a.exec();
}
