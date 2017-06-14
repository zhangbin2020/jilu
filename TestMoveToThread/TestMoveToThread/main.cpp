
#include <QtWidgets/QApplication>
#include <QThread>
#include "WorderThread.h"

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);

	WorderThread* workder = new WorderThread;

	QThread * thread = new QThread;
	workder->moveToThread(thread);
	thread->start();

	workder->OnFun1();

	QMetaObject::invokeMethod(workder, "OnFun2", Qt::QueuedConnection);


	return a.exec();
}
