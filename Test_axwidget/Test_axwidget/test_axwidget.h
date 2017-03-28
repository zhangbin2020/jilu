#ifndef TEST_AXWIDGET_H
#define TEST_AXWIDGET_H

#include <QtWidgets/QMainWindow>
#include "ui_test_axwidget.h"
#include <QAxWidget>

class Test_axwidget : public QMainWindow
{
	Q_OBJECT

public:
	Test_axwidget(QWidget *parent = 0);
	~Test_axwidget();

	private slots:
	void sltNavigateComplete2(IDispatch*, QVariant&);

private:
	Ui::Test_axwidgetClass ui;
};

#endif // TEST_AXWIDGET_H
