#ifndef TEST_MODEL_H
#define TEST_MODEL_H

#include <QtGui/QMainWindow>
#include "ui_test_model.h"

class test_model : public QMainWindow
{
	Q_OBJECT

public:
	test_model(QWidget *parent = 0, Qt::WFlags flags = 0);
	~test_model();

private:
	Ui::test_modelClass ui;
};

#endif // TEST_MODEL_H
