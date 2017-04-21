#ifndef TEST_WEBENGINE_EDITOR_H
#define TEST_WEBENGINE_EDITOR_H

#include <QtWidgets/QMainWindow>
#include "ui_test_webengine_editor.h"
#include "Dialog.h"

class test_webEngine_Editor : public QMainWindow
{
	Q_OBJECT

public:
	test_webEngine_Editor(QWidget *parent = 0);
	~test_webEngine_Editor();

	private slots:
	void OnBtn();

private:
	Ui::test_webEngine_EditorClass ui;
};

#endif // TEST_WEBENGINE_EDITOR_H
