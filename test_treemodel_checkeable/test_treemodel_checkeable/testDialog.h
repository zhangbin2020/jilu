#ifndef TEST_DIALOG_H
#define TEST_DIALOG_H

#include <QDialog>

class TreeModel;

class TestDialog : public QDialog
{
	Q_OBJECT

public:
	TestDialog(QWidget *parent=0);
	TreeModel *model;

public slots:
	void getCheckedItemData();
};

#endif // TEST_DIALOG_H