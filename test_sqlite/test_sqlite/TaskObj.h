#ifndef TASKOBJ_H
#define TASKOBJ_H

#include <QObject>
#include "TaskInterface.h"
#include "test_sqlite.h"
#include <QSqlDatabase>

class TaskObj : public TaskInterface
{
	Q_OBJECT

public:
	TaskObj(QObject *parent=0);
	~TaskObj();

	void setEntity( entity* p){m_pEntity = p;};
	void setdb(QSqlDatabase& db){m_db = db;};

	void DoTask();

signals:
	void oneFinished();

private:
	entity * m_pEntity;

	QSqlDatabase m_db;
};

#endif // TASKOBJ_H
