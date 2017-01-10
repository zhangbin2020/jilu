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


class test_sqlite : public QMainWindow
{
	Q_OBJECT

public:
	test_sqlite(QWidget *parent = 0, Qt::WFlags flags = 0);
	~test_sqlite();

	QSqlDatabase GetDatabase(QString const& connectionName);
	void CreateDB();
	void CreateThread();

public slots:
	void OnBeginThread();
	void OnStop();

private:
	Ui::test_sqliteClass ui;

	QList< CustomThread* > m_lsReadThread;
	QList< CustomThread* > m_lsWriteThread;
};

#endif // TEST_SQLITE_H
