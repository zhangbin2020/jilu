#ifndef INVOKEMETHOD_H
#define INVOKEMETHOD_H

#include <QtGui/QMainWindow>
#include "ui_invokemethod.h"

#include "WorkderThread.h"
#include <QTimer>
#include <QThread>

class invokeMethod : public QMainWindow
{
	Q_OBJECT

public:
	invokeMethod(QWidget *parent = 0, Qt::WFlags flags = 0);
	~invokeMethod();

public slots:
	void OnTime();

signals:
	void Sig();

private:
	Ui::invokeMethodClass ui;

	WorkderThread* m_thread;
	QTimer* m_tm;
	QThread m_t;
};

#endif // INVOKEMETHOD_H
