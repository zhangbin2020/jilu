#ifndef ADAPTER_H
#define ADAPTER_H

#include <QtGui/QMainWindow>
#include "ui_adapter.h"

class Adapter : public QMainWindow
{
	Q_OBJECT

public:
	Adapter(QWidget *parent = 0, Qt::WFlags flags = 0);
	~Adapter();

private:
	Ui::AdapterClass ui;
};

#endif // ADAPTER_H
