#include "WorkerThreadManager.h"

WorkerThreadManager::WorkerThreadManager(QObject *parent)
	: QObject(parent)
	, m_lsWorker()
	, m_lsTask()
	, m_bFinished(false)
	, m_nFinishedCount(0)
	, m_nTotalCount(0)
	, m_bStop(false)
	, m_nWorkerStoped(0)
{
	InitWorkerThread();
}

WorkerThreadManager::~WorkerThreadManager()
{
	QList< WorkerThread* >::iterator ite = m_lsWorker.begin();
	for ( ; ite!=m_lsWorker.end(); ++ite )
	{
		if ( *ite )
		{
			(*ite)->wait(1000*3);
			if ( (*ite)->isRunning() )
			{
				(*ite)->terminate();
			}
			delete ( *ite );
			( *ite ) = NULL;
		}
	}
	m_lsWorker.clear();
}


void WorkerThreadManager::StopWork( bool bStop )
{
	m_bStop = bStop;
	QList< WorkerThread* >::iterator ite = m_lsWorker.begin();
	for ( ; ite!=m_lsWorker.end(); ++ite )
	{
		(*ite)->SetStop( bStop );
	}
}

void WorkerThreadManager::Wait()
{
	QList< WorkerThread* >::iterator ite = m_lsWorker.begin();
	for ( ; ite!=m_lsWorker.end(); ++ite )
	{
		(*ite)->wait();
	}
}

void WorkerThreadManager::BeginWork()
{
	m_bStop = false;
	QList< WorkerThread* >::iterator ite = m_lsWorker.begin();
	for ( ; ite!=m_lsWorker.end(); ++ite )
	{
		if ( *ite )
		{
			if ( !m_lsTask.isEmpty() )
			{
				(*ite)->SetStop( m_bStop );
				(*ite)->SetTask( m_lsTask.first() );
				m_lsTask.removeFirst();
				(*ite)->start();
			}
		}
	}
}

void WorkerThreadManager::AddTask( TaskInterface* pTask  )
{
	m_lsTask.push_back(pTask);
}

void WorkerThreadManager::InitWorkerThread(  )
{
	int nc = QThread::idealThreadCount();
	for ( int i=0; i<1/*QThread::idealThreadCount()*/; i++ )
	{
		WorkerThread * pWorker = new WorkerThread(this);
		if ( pWorker )
		{
			connect( pWorker,SIGNAL(finished()),this,SLOT(OnOneWorkerFinished()) );
			m_lsWorker << pWorker;
		}		
	}
}

void WorkerThreadManager::OnOneWorkerFinished()
{
	if ( m_bStop )
	{
		m_nWorkerStoped ++;
		if ( m_nWorkerStoped==m_lsWorker.count() || m_lsTask.isEmpty() )
		{
			m_bFinished = true;
			emit AllFinishedSignal();
		}
		return;
	}

	m_nFinishedCount ++;
	if ( m_nFinishedCount == m_nTotalCount )
	{
		m_bFinished = true;
		emit AllFinishedSignal();
		return;
	}

	WorkerThread *pWorker = static_cast< WorkerThread* >( sender() );
	if ( pWorker )
	{
		if ( pWorker->isRunning() )
		{
			pWorker->wait();
		}
		if ( !m_lsTask.isEmpty() )
		{	
			pWorker->SetTask( m_lsTask.first() );	
			m_lsTask.removeFirst();
			pWorker->start();
		}
	}
}

void WorkerThreadManager::Reset()
{
	m_bFinished = false;
	m_nFinishedCount = 0;
	m_nWorkerStoped = 0;
	m_lsTask.clear();
}
