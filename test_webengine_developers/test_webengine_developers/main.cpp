#include "test_webengine_developers.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	test_webengine_developers w;
	w.show();
	return a.exec();
}
