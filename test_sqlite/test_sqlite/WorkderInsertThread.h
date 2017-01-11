#ifndef WORKDERINSERTTHREAD_H
#define WORKDERINSERTTHREAD_H

#include <QObject>
#include <QThread>
#include <QSqlDatabase>
#include "test_sqlite.h"

class WorkderInsertThread : public QThread
{
	Q_OBJECT

public:
	WorkderInsertThread(QObject *parent=0);
	~WorkderInsertThread();

	void run();

private:
	QSqlDatabase m_db;
};

#endif // WORKDERINSERTTHREAD_H
