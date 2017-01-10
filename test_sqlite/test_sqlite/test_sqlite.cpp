#include "test_sqlite.h"

test_sqlite::test_sqlite(QWidget *parent, Qt::WFlags flags)
	: QMainWindow(parent, flags)
{
	ui.setupUi(this);

	CreateDB();
	CreateThread();
	connect( ui.pushButton,SIGNAL(clicked()),this,SLOT( OnBeginThread() ) );
}

test_sqlite::~test_sqlite()
{

}


QSqlDatabase test_sqlite::GetDatabase(QString const& connectionName)
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

void test_sqlite::CreateDB()
{
	QStringList sl = QSqlDatabase::drivers();

	QSqlDatabase db = GetDatabase("D:\\space_application\\test_sqlite\\test_sqlite\\test.db");


	QString strCreateTb = "create table if not exists testMultithread (id integer primary key ,name varchar(30) );";
	QSqlQuery sq(db);
	sq.prepare( strCreateTb );
	if ( !sq.exec() )
	{
		qDebug()<<"create failed"<<sq.lastError();
	}

	/*
	QString strReadTb = "insert into testMultithread (id,name) values(2,'123');";
	sq.prepare( strReadTb );
	if ( !sq.exec() )
	{
		qDebug()<<"write exec failed";
	}
	else
	{
		qDebug()<<"insert data suc";
	}

	QString strWTb = "select * from testMultithread;";
	sq.prepare( strWTb );
	if ( !sq.exec() )
	{
		qDebug()<<"write exec failed";
	}
	else
	{
		sq.next();
		qDebug()<<"insert data suc" <<sq.value(0).toInt()<<sq.value(1).toString();
	}
	*/

	db.close();
}

void testSqlite( QString m_name, int m_nFlag )
{
	QSqlDatabase m_db = QSqlDatabase::addDatabase("QSQLITE",m_name);
	m_db.setDatabaseName("D:\\space_application\\test_sqlite\\test_sqlite\\test.db");
	if(m_db.isValid())
		m_db.open();

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
				qDebug()<<"read data suc"<<m_name<<sq.value(0).toInt()<<sq.value(1).toString()<<sq.size();//<<this->currentThreadId();
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
				qDebug()<<"insert data suc"<<m_name;//<<this->currentThreadId();
			}
		}

		//sleep(30);
	}

	m_db.close();
}

void test_sqlite::CreateThread()
{
	for ( int i=0; i<10; i++ )
	{
		
		CustomThread * sp = new CustomThread(this);
		sp->setFlat(1);
		sp->SetConName("r" + QString::number(i));
		sp->createCon();
		m_lsReadThread << sp;

		CustomThread * sp2 = new CustomThread(this);
		sp2->setFlat(2);
		sp2->SetConName("w" + QString::number(i));
		sp2->createCon();
		m_lsWriteThread << sp2;
		
// 		QtConcurrent::run( testSqlite,"r" + QString::number(i),1 );
// 		qDebug()<<"num sec thread "<<QString::number(i);
// 
// 		QtConcurrent::run( testSqlite,"w" + QString::number(i),2 );
// 		qDebug()<<"num sec thread "<<QString::number(i);
	}
	qDebug()<<"-----------"<<QThread::idealThreadCount();
	//qDebug()<<"-----------"<<QThreadPool::globalInstance()->activeThreadCount();
}


void test_sqlite::OnBeginThread()
{
	
	QString str;

	QList< CustomThread* >::iterator ite2 = m_lsWriteThread.begin();
	for ( ; ite2!=m_lsWriteThread.end(); ++ite2 )
	{
		(*ite2)->start();
	}

	QList< CustomThread* >::iterator ite = m_lsReadThread.begin();
	for ( ; ite!=m_lsReadThread.end(); ++ite )
	{
		(*ite)->start();
	}
	
}


void test_sqlite::OnStop()
{

}
