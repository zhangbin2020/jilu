#include "WorkderInsertThread.h"


WorkderInsertThread::WorkderInsertThread(QObject *parent)
	: QThread(parent)
{

}

WorkderInsertThread::~WorkderInsertThread()
{

}

void WorkderInsertThread::run()
{
	for ( int i=0; i<500; i++ )
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

		sq.bindValue(":id",i+(int)QThread::currentThreadId());
		sq.bindValue(":name",strid);
		if ( !sq.exec() )
		{
			qDebug()<<sq.lastError();
			qDebug()<<"write exec failed"<<1;
		}
		else
		{
			qDebug()<<"insert data suc"<<1<< strid;
		}
		m_db.close();
	}


}
