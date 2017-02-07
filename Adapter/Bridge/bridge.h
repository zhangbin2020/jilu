#ifndef BRIDGE_H
#define BRIDGE_H

#include <QtGui/QMainWindow>
#include "ui_bridge.h"

class Bridge : public QMainWindow
{
	Q_OBJECT

public:
	Bridge(QWidget *parent = 0, Qt::WFlags flags = 0);
	~Bridge();

private:
	Ui::BridgeClass ui;
};

#endif // BRIDGE_H
