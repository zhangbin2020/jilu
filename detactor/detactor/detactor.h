#ifndef DETACTOR_H
#define DETACTOR_H

#include <QtWidgets/QMainWindow>
#include "ui_detactor.h"

class detactor : public QMainWindow
{
	Q_OBJECT

public:
	detactor(QWidget *parent = 0);
	~detactor();

private:
	Ui::detactorClass ui;
};

#endif // DETACTOR_H
