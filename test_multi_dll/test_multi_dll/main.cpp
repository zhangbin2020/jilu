#include "test_multi_dll.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	test_multi_dll w;
	w.show();
	return a.exec();
}
