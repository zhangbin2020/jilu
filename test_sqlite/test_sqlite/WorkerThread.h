#ifndef WORKERTHREADBASE_H
#define WORKERTHREADBASE_H

#include <QThread>
#include <QMutex>
#include <QMutexLocker>
#include "TaskInterface.h"

class WorkerThread : public QThread
{
	Q_OBJECT

public:
	WorkerThread(QObject *parent);
	~WorkerThread();

	void SetTask( TaskInterface* pTask ){ m_task = pTask; }
	void SetStop( bool bStop );
	void run();

protected:
	bool m_bStop;
	QMutex m_mutex;
	TaskInterface * m_task;
};

#endif // WORKERTHREADBASE_H
