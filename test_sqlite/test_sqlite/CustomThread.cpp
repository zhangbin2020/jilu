#include "CustomThread.h"

CustomThread::CustomThread(QObject *parent)
	: QThread(parent)
	, m_db()
	, m_nFlag(1)
{

}

CustomThread::~CustomThread()
{

}

void CustomThread::createCon()
{
	m_db = QSqlDatabase::addDatabase("QSQLITE",m_name);
	m_db.setDatabaseName("D:\\space_application\\test_sqlite\\test_sqlite\\test.db");
	if(m_db.isValid())
		m_db.open();
}

void CustomThread::run()
{

	{


		while(1)
		{
			if ( m_nFlag == 1 )
			{
				QString strReadTb = "select * from testMultithread";
				QSqlQuery sq(m_db);
				sq.prepare( strReadTb );
				if ( !sq.exec() )
				{
					qDebug()<<"read exec failed"<<m_name;
				}
				else
				{
					sq.next();
					qDebug()<<"read data suc"<<m_name<<sq.value(0).toInt()<<sq.value(1).toString()<<sq.size()<<this->currentThreadId();
				}
			}
			if ( m_nFlag == 2 )
			{

				QString strReadTb = "insert into testMultithread(name) Values(:name);";
				QSqlQuery sq(m_db);
				sq.prepare( strReadTb );

				QTime t;
				t = QTime::currentTime();
				int nSec = t.msec() + t.second()*1000;
				qsrand(nSec);
				int nid = qrand();

				sq.bindValue(":name",QString::number(nid));
				if ( !sq.exec() )
				{
					qDebug()<<sq.lastError();
					qDebug()<<"write exec failed"<<m_name;
					for ( int i=0; i<3; i++ )
					{
						if ( sq.exec() )
						{
							qDebug()<<"write exec suc---------------"<<i<<m_name;
							break;
						}
						qDebug()<<"write exec failed--repeat"<<i;
					}
				}
				else
				{
					qDebug()<<"insert data suc"<<m_name<<this->currentThreadId();
				}
			}

			//sleep(30);
		}

		m_db.close();


	}


}

QSqlDatabase CustomThread::GetDatabase(QString const& connectionName)
{
	if(QSqlDatabase::contains(connectionName))
	{
		//判断当前数据库ware.db中的连接中是否已经包含了connectionName这个连接
		return QSqlDatabase::database(connectionName);
	}
	//新连接
	QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE", connectionName);
	db.setDatabaseName(connectionName);
	//打开
	if(db.isValid())
		db.open();
	return db;
}		
