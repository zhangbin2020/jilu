#ifndef TEST_SQLITE_H
#define TEST_SQLITE_H

#include <QtGui/QMainWindow>
#include "ui_test_sqlite.h"
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QDebug>
#include "CustomThread.h"
#include <QList>
#include <QSqlError>
#include <QFuture>
#include <QtConcurrentRun>
#include <QThreadPool>


#include "WorkerThread.h"
#include "WorkerThreadManager.h"
#include <QTime>

class TaskObj;


class entity
{
public:
	qint64 id;
	QString name;
};


class test_sqlite : public QMainWindow
{
	Q_OBJECT

public:
	test_sqlite(QWidget *parent = 0, Qt::WFlags flags = 0);
	~test_sqlite();

	QSqlDatabase& GetDatabase(QString const& connectionName);
	void CreateDB();
	void CreateThread();


private:
	void ReadData(QSqlDatabase&);

public slots:
	void OnBeginThread();
	void OnStop();
	void OnWrite();
	void OnClearDb();
	void OnWorkerThreadManagerFinished();

private:
	Ui::test_sqliteClass ui;

	QList< CustomThread* > m_lsReadThread;
	QList< CustomThread* > m_lsWriteThread;

	QList< entity* > m_lsEntity;
	QSqlDatabase m_db;

	WorkerThreadManager * m_pManagerWork;					//manager
	QList< TaskObj* > m_lsTask;

	QTime* m_time;
};

#endif // TEST_SQLITE_H
