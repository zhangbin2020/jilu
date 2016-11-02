#ifndef TEST_JSON_QT_H
#define TEST_JSON_QT_H

#include <QtWidgets/QMainWindow>
#include "ui_test_json_qt.h"

#include "IEntity.h"
#include "person.h"

class test_json_qt : public QMainWindow
{
	Q_OBJECT

public:
	test_json_qt(QWidget *parent = 0);
	~test_json_qt();

	void jsonToEntity(QByteArray data);

private:
	Ui::test_json_qtClass ui;
};

#endif // TEST_JSON_QT_H
