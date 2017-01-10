#include "WorkerThread.h"

WorkerThread::WorkerThread(QObject *parent)
	: QThread(parent)
	, m_bStop(false)
	, m_task(NULL)
{

}

WorkerThread::~WorkerThread()
{

}

void WorkerThread::SetStop( bool bStop )
{
	QMutexLocker locker( &m_mutex );
	m_bStop = bStop;
}

void WorkerThread::run()
{
	{
		QMutexLocker locker(&m_mutex);
		if ( m_bStop )
		{
			return;
		}
	}
	if ( m_task )
	{
		m_task->DoTask();
	}
}
