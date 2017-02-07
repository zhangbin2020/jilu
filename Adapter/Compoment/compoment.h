#ifndef COMPOMENT_H
#define COMPOMENT_H

#include <QtGui/QMainWindow>
#include "ui_compoment.h"

class Compoment : public QMainWindow
{
	Q_OBJECT

public:
	Compoment(QWidget *parent = 0, Qt::WFlags flags = 0);
	~Compoment();

private:
	Ui::CompomentClass ui;
};

#endif // COMPOMENT_H
