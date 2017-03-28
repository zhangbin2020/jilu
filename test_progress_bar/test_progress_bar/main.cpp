#include "test_progress_bar.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	test_progress_bar w;
	w.show();
	return a.exec();
}
