#include "test_axwidget.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	Test_axwidget w;
	w.show();
	return a.exec();
}
