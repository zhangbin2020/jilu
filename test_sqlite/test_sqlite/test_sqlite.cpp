#include "test_sqlite.h"
#include "TaskObj.h"

test_sqlite::test_sqlite(QWidget *parent, Qt::WFlags flags)
	: QMainWindow(parent, flags)
	, m_lsEntity()
	, m_ncount(0)
{
	ui.setupUi(this);

	CreateDB();
	CreateThread();
	connect( ui.pushButton,SIGNAL(clicked()),this,SLOT( OnBeginThread() ) );
	connect( ui.btn3,SIGNAL(clicked()),this,SLOT( OnClearDb() ) );
	connect( ui.btn4,SIGNAL(clicked()),this,SLOT( OnWrite() ) );
	connect( ui.btn5,SIGNAL(clicked()),this,SLOT( OnBtn5() ) );

	m_pManagerWork = new WorkerThreadManager(this);
	connect(m_pManagerWork, SIGNAL(AllFinishedSignal()), this, SLOT(OnWorkerThreadManagerFinished()));

	m_time = new QTime;
}

test_sqlite::~test_sqlite()
{

}


QSqlDatabase& test_sqlite::GetDatabase(QString const& connectionName)
{
	if(QSqlDatabase::contains(connectionName))
	{
		//判断当前数据库ware.db中的连接中是否已经包含了connectionName这个连接
		return QSqlDatabase::database(connectionName);
	}
	//新连接
	m_db = QSqlDatabase::addDatabase("QSQLITE", connectionName);
	m_db.setDatabaseName(connectionName);
	//打开
	if(m_db.isValid())
		m_db.open();
	return m_db;
}		

void test_sqlite::CreateDB()
{
	QStringList sl = QSqlDatabase::drivers();

	QSqlDatabase db = GetDatabase("D:\\github_jilu\\test_sqlite\\test_sqlite\\test.db");


// 	QString strCreateTb = "create table if not exists testMultithread (id integer primary key ,name varchar(30) );";
// 	QSqlQuery sq(db);
// 	sq.prepare( strCreateTb );
// 	if ( !sq.exec() )
// 	{
// 		qDebug()<<"create failed"<<sq.lastError();
// 	}

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

	QString strReadTb = "select * from testMultithread";
	QSqlQuery sq1(m_db);
	sq1.prepare( strReadTb );
	if ( !sq1.exec() )
	{
		qDebug()<<"read exec failed";
	}
	else
	{
		while(sq1.next())
		{
			entity* pEntity = new entity;
			pEntity->id = sq1.value(0).toLongLong();
			pEntity->name = sq1.value(1).toString();

			m_lsEntity << pEntity;
		}
		//qDebug()<<"read data suc"<<m_name<<sq.value(0).toInt()<<sq.value(1).toString()<<sq.size();//<<this->currentThreadId();
	}

	//m_db.close();

	QString str = "";
}

void testSqlite( QString m_name, int m_nFlag )
{
	QSqlDatabase m_db = QSqlDatabase::addDatabase("QSQLITE",m_name);
	m_db.setDatabaseName("D:\github_jilu\test_sqlite\test_sqlite\\test.db");
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


void test_sqlite::ReadData(QSqlDatabase& db)
{

	QString strReadTb = "select * from testMultithread";
	QSqlQuery sq(db);
	sq.prepare( strReadTb );
	if ( !sq.exec() )
	{
		qDebug()<<"read exec failed";
	}
	else
	{
		sq.next();
		//qDebug()<<"read data suc"<<m_name<<sq.value(0).toInt()<<sq.value(1).toString()<<sq.size();//<<this->currentThreadId();
	}
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

void test_sqlite::OnWrite()
{
	for ( auto ite=m_lsEntity.begin(); ite!=m_lsEntity.end(); ++ite)
	{
		TaskObj* pTask = new TaskObj;
		pTask->setEntity(*ite);
		//pTask->setdb(m_db);
		m_pManagerWork->AddTask( pTask );

		m_lsTask << pTask;
	}

	m_pManagerWork->SetTotal(m_lsTask.count());
	m_pManagerWork->BeginWork();

	m_time->start();

}

void test_sqlite::OnBtn5()
{
	m_time->start();
	for ( int i=0; i<4; ++i )
	{
		WorkderInsertThread * pthred = new WorkderInsertThread(this);
		//connect(pthred,&QThread::finished,this,&test_sqlite::OnFinished);
		connect( pthred,SIGNAL(finished()),this,SLOT(OnFinished()) );
		pthred->start();
	}
	return;



	//打开
	if(m_db.isValid())
	{
		m_db.open();
	}
	else
	{
		qDebug()<<"open db failed";
	}

	QTime tm;
	tm.start();



	for ( int i=0; i<1950; ++i )
	{
		QString strReadTb = "insert into testMultithread(id,name) Values(:id,:name);";
		QSqlQuery sq(m_db);
		sq.prepare( strReadTb );

		sq.bindValue(":id",i);
		sq.bindValue(":name",QString::number(i));
		if ( !sq.exec() )
		{
			qDebug()<<sq.lastError();
			qDebug()<<"write exec failed"<<i;
		}
		else
		{
			qDebug()<<"insert data suc"<<i;
		}
		
	}

	qDebug()<<tm.elapsed()<<"-------------------";
	m_db.close();

}

void test_sqlite::OnClearDb()
{
	QString strReadTb = "delete  from testMultithread";
	QSqlQuery sq(m_db);
	sq.prepare( strReadTb );
	if ( !sq.exec() )
	{
		qDebug()<<sq.lastError();
		qDebug()<<"delete exec failed";
	}
	else
	{
		//qDebug()<<"read data suc"<<m_name<<sq.value(0).toInt()<<sq.value(1).toString()<<sq.size();//<<this->currentThreadId();
	}
}

void test_sqlite::OnWorkerThreadManagerFinished()
{
	qint64 n = m_time->elapsed();
	qDebug()<<"+++++++++++++"<<n;

}

void test_sqlite::OnFinished()
{
	m_ncount++;
	if ( m_ncount == 4 )
	{
		qDebug()<<"================="<<m_time->elapsed();
	}
}
