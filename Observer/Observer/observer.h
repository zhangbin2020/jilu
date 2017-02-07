#ifndef OBSERVER_H
#define OBSERVER_H

#include <QtGui/QMainWindow>
#include "ui_observer.h"


class Observer : public QMainWindow
{
	Q_OBJECT

public:
	Observer(QWidget *parent = 0, Qt::WFlags flags = 0);
	~Observer();


private:
	Ui::ObserverClass ui;
};

#endif // OBSERVER_H
