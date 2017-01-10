#include "TaskObj.h"

TaskObj::TaskObj(QObject *parent)
	: TaskInterface(parent)
{

}

TaskObj::~TaskObj()
{

}

void TaskObj::DoTask()
{
	QString strid = QString::number ( (quintptr)QThread::currentThread() );
	if ( !QSqlDatabase::contains( strid ) )
	{
		m_db = QSqlDatabase::addDatabase("QSQLITE",strid);
		m_db.setDatabaseName("D:\\github_jilu\\test_sqlite\\test_sqlite\\test.db");

	}
	else
	{
		m_db = QSqlDatabase::database(strid);
	}
	//´ò¿ª
	if(m_db.isValid())
	{
		m_db.open();
	}
	else
	{
		qDebug()<<"open db failed";
	}
	QString strReadTb = "insert into testMultithread(id,name) Values(:id,:name);";
	QSqlQuery sq(m_db);
	sq.prepare( strReadTb );

	sq.bindValue(":id",m_pEntity->id);
	sq.bindValue(":name",m_pEntity->name);
	if ( !sq.exec() )
	{
		qDebug()<<sq.lastError();
		qDebug()<<"write exec failed"<<m_pEntity->id;
	}
	else
	{
		qDebug()<<"insert data suc"<<m_pEntity->id<< strid;
	}
	m_db.close();

}
