#include "mycalendar.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	MyCalendar w;
	w.show();
	return a.exec();
}
