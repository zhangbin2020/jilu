#ifndef PROXY_H
#define PROXY_H

#include <QtGui/QMainWindow>
#include "ui_proxy.h"

class Proxy : public QMainWindow
{
	Q_OBJECT

public:
	Proxy(QWidget *parent = 0, Qt::WFlags flags = 0);
	~Proxy();

private:
	Ui::ProxyClass ui;
};

#endif // PROXY_H
