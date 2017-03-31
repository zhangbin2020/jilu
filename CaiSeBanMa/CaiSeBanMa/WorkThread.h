#ifndef WORKTHREAD_H
#define WORKTHREAD_H

#include <QObject>
#include <QMutexLocker>
#include <QMutex>
#include <QThread>

class WorkThread : public QThread
{
	Q_OBJECT

public:
	WorkThread(QObject *parent=0);
	~WorkThread();

	void SetStop(bool b);
	void SetItem( double,double );

protected:
	void run();

signals:
	void SigResult( QString  );

private:
	bool m_bStop;
	QMutex m_mutex;

	double m_totalMoney;
	double m_Rate;
};

#endif // WORKTHREAD_H
