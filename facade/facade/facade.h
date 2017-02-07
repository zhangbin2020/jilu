#ifndef FACADE_H
#define FACADE_H

#include <QtGui/QMainWindow>
#include "ui_facade.h"

class facade : public QMainWindow
{
	Q_OBJECT

public:
	facade(QWidget *parent = 0, Qt::WFlags flags = 0);
	~facade();

private:
	Ui::facadeClass ui;
};

#endif // FACADE_H
