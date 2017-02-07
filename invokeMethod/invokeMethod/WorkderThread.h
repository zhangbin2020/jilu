#ifndef WORKDERTHREAD_H
#define WORKDERTHREAD_H

#include <QObject>

class WorkderThread : public QObject
{
	Q_OBJECT

public:
	WorkderThread(QObject *parent=0);
	~WorkderThread();

	public slots:
	void fun1();
	void fun2();

private:
	
};

#endif // WORKDERTHREAD_H
