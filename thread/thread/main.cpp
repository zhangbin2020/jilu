#include "thread.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);



	thread w;
	w.show();



	return a.exec();
}
