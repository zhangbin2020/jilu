#include "invokemethod.h"
#include <QThread>

invokeMethod::invokeMethod(QWidget *parent, Qt::WFlags flags)
	: QMainWindow(parent, flags)
{
	ui.setupUi(this);

	m_thread = new WorkderThread;
	connect(this,SIGNAL(Sig()),m_thread,SLOT(fun1()));
	connect(this,SIGNAL(Sig()),m_thread,SLOT(fun2()));

	m_thread->moveToThread(&m_t);
	m_t.start();

	m_thread->fun2();

	m_tm = new QTimer;
	connect(m_tm,SIGNAL(timeout()),this,SLOT(OnTime()));
	m_tm->start(3000);
}

void invokeMethod::OnTime()
{

	emit Sig();
}

invokeMethod::~invokeMethod()
{

}
