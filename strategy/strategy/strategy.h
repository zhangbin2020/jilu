#ifndef STRATEGY_H
#define STRATEGY_H

#include <QtWidgets/QMainWindow>
#include "ui_strategy.h"

class strategy : public QMainWindow
{
	Q_OBJECT

public:
	strategy(QWidget *parent = 0);
	~strategy();



private:
	Ui::strategyClass ui;
};

#endif // STRATEGY_H
