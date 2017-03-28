#ifndef TEST_WEBKIT_NEIHE_H
#define TEST_WEBKIT_NEIHE_H

#include <QtGui/QMainWindow>
#include "ui_test_webkit_neihe.h"

class Test_webkit_neihe : public QMainWindow
{
	Q_OBJECT

public:
	Test_webkit_neihe(QWidget *parent = 0, Qt::WFlags flags = 0);
	~Test_webkit_neihe();

private:
	Ui::Test_webkit_neiheClass ui;
};

#endif // TEST_WEBKIT_NEIHE_H
