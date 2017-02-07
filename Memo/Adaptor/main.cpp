#include "adaptor.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	Adaptor w;
	w.show();
	return a.exec();
}
