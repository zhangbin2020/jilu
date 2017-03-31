#include "WorkThread.h"

WorkThread::WorkThread(QObject *parent)
	: QThread(parent)
	, m_bStop(false)
{

}

WorkThread::~WorkThread()
{

}

void WorkThread::SetStop(bool b)
{
	QMutexLocker lock(&m_mutex);
	m_bStop = b;

	m_totalMoney = 0;
	m_Rate = 0;
}

void WorkThread::SetItem( double val1,double val2 )
{
	QMutexLocker lock(&m_mutex);
	m_totalMoney = val1;
	m_Rate = val2;
}

void WorkThread::run()
{

	double ret  = 0;
	while (1)
	{
		{
			QMutexLocker lock(&m_mutex);
			if ( m_bStop )
			{
				return;
			}

			m_totalMoney = m_totalMoney - m_Rate;

			if ( m_totalMoney <= 0 )
			{
				m_totalMoney = 0;
			}

			emit SigResult( QString::number( m_totalMoney,'f',2 ) );

			if ( m_totalMoney == 0 )
			{
				return;
			}
		}


		sleep( 1 );

		QString str = "";
	}
}
