
#include <QtWidgets/QApplication>

#include "ConcreateObserver.h"
#include "ConcreateWatched.h"

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);

	WatchedInterface* watched = new ConcreateWatched;

	ObserverInterface* ob1 = new ConcreateObserver;

	watched->add(ob1);


	return a.exec();
}
