#include "drag_drop.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	Drag_drop w;
	w.show();
	return a.exec();
}
