#ifndef DRAG_DROP_H
#define DRAG_DROP_H

#include <QtWidgets/QMainWindow>
#include "ui_drag_drop.h"

class Drag_drop : public QMainWindow
{
	Q_OBJECT

public:
	Drag_drop(QWidget *parent = 0);
	~Drag_drop();

private:
	Ui::Drag_dropClass ui;
};

#endif // DRAG_DROP_H
