#ifndef TEST_PROGRESS_BAR_H
#define TEST_PROGRESS_BAR_H

#include <QtWidgets/QMainWindow>
#include "ui_test_progress_bar.h"

class test_progress_bar : public QMainWindow
{
	Q_OBJECT

public:
	test_progress_bar(QWidget *parent = 0);
	~test_progress_bar();

private:
	Ui::test_progress_barClass ui;
};

#endif // TEST_PROGRESS_BAR_H
