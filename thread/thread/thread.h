#ifndef THREAD_H
#define THREAD_H

#include <QtWidgets/QMainWindow>
#include "ui_thread.h"

#include "Workder.h"

class thread : public QMainWindow
{
	Q_OBJECT

public:
	thread(QWidget *parent = 0);
	~thread();

signals:
	void sig();

private:
	Ui::threadClass ui;

	Workder* m_worker;
};

#endif // THREAD_H
