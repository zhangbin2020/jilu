#include "observer.h"
#include <QtGui/QApplication>

#include "Observer1.h"
#include "Observer2.h"
#include "ShaoBing1.h"
#include "ShaoBing2.h"

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
// 	Observer w;
// 	w.show();

	ObserverInterface* o1 = new Observer1;
	ObserverInterface* o2 = new Observer2;

	NotifyInterface* sh1 = new ShaoBing1;
	NotifyInterface* sh2 = new ShaoBing2;

	sh1->addOb(o1);
	sh1->addOb(o2);
	sh2->addOb(o1);
	sh2->addOb(o2);
	
	return a.exec();
}
