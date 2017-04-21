#ifndef DIALOG_H
#define DIALOG_H

#include <QWidget>
#include "ui_Dialog.h"
#include <QWebEngineView>
#include <QDialog>

class Dialog : public QDialog
{
	Q_OBJECT

public:
	Dialog(QWidget *parent = 0);
	~Dialog();

private slots:
	void finishLoading(bool);

private:
	Ui::Dialog ui;

	QWebEngineView* m_view;
};

#endif // DIALOG_H
