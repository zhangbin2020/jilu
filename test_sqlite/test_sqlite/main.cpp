#include "test_sqlite.h"
#include <QtGui/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	test_sqlite w;
	w.show();
	return a.exec();
}
