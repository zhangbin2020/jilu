#ifndef WS_UPDATE_H
#define WS_UPDATE_H

#include <QtGui/QMainWindow>
#include "ui_ws_update.h"

class ws_update : public QMainWindow
{
	Q_OBJECT

public:
	ws_update(QWidget *parent = 0, Qt::WFlags flags = 0);
	~ws_update();

private:
	Ui::ws_updateClass ui;
};

#endif // WS_UPDATE_H
