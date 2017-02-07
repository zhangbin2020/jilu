#ifndef TEST_MULTI_DLL_H
#define TEST_MULTI_DLL_H

#include <QtWidgets/QMainWindow>
#include "ui_test_multi_dll.h"

class test_multi_dll : public QMainWindow
{
	Q_OBJECT

public:
	test_multi_dll(QWidget *parent = 0);
	~test_multi_dll();

private slots:
	void OnBtn();

private:
	Ui::test_multi_dllClass ui;
};

#endif // TEST_MULTI_DLL_H
