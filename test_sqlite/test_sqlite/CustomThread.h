#ifndef CUSTOMTHREAD_H
#define CUSTOMTHREAD_H

#include <QThread>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QDebug>
#include <QSqlError>
#include <QTime>


class CustomThread : public QThread
{
	Q_OBJECT

public:
	CustomThread(QObject *parent);
	~CustomThread();

	void run();
	void setFlat( int nFlag ){m_nFlag = nFlag;}
	void SetConName(QString str){m_name = str;}
	void createCon();
	QSqlDatabase GetDatabase(QString const& connectionName);

private:
	QSqlDatabase m_db;
	int m_nFlag;//¶Á Ð´
	QString m_name;
};

#endif // CUSTOMTHREAD_H
