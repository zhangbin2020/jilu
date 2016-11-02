#include "test_json_qt.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	test_json_qt w;
	w.show();
	return a.exec();
}
