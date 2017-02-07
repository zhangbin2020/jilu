#include "thread.h"
#include <QThread>

thread::thread(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);

	m_worker = new Workder(NULL);
	connect(this, SIGNAL(sig()), m_worker, SLOT(funa()));
	connect(this, &thread::sig, m_worker, &Workder::funb);

	m_worker->funb();

	QThread* pThread = new QThread;
	m_worker->moveToThread(pThread);
	pThread->start();



	emit sig();

}

thread::~thread()
{

}
