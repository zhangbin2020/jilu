#include "invokemethod.h"
#include <QtGui/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);

	invokeMethod w;
	w.show();

	return a.exec();
}
