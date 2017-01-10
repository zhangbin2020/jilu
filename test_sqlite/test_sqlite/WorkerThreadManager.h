#ifndef WORKERTHREADMANAGER_H
#define WORKERTHREADMANAGER_H

#include <QObject>
#include <QThread>
#include "WorkerThread.h"
#include "TaskInterface.h"

class WorkerThreadManager : public QObject
{
	Q_OBJECT

public:
	WorkerThreadManager(QObject *parent=nullptr);
	~WorkerThreadManager();

	void StopWork( bool bStop );
	void Wait();
	void BeginWork();
	void AddTask( TaskInterface* pTask );
	bool IsFinished(){ return m_bFinished; }	
	void SetTotal( int nTotal ){ m_nTotalCount = nTotal; }
	void Reset();
private:
	void InitWorkerThread();

public slots:
	void OnOneWorkerFinished();

signals:
	void AllFinishedSignal();

protected:
	QList< WorkerThread* > m_lsWorker;
	QList< TaskInterface* > m_lsTask;
	bool m_bFinished;
	int m_nFinishedCount;
	int m_nTotalCount;
	int m_bStop;
	int m_nWorkerStoped;
};


#endif // WORKERTHREADMANAGER_H
