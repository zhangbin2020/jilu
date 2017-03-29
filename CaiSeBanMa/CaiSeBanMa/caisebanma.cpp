#include "caisebanma.h"


const int TIMERSPACE = 1*1000;//定时器时间间隔

CaiSeBanMa::CaiSeBanMa(QWidget *parent, Qt::WFlags flags)
	: QWidget(parent, flags)
	, m_time(10)
	, m_money(100)
	, m_Rate(0)
	, m_timer(NULL)
{
	ui.setupUi(this);


	ui.lcdNumber->setDigitCount(10);
	ui.lcdNumber->setMode( QLCDNumber::Dec	 );
	//ui.lcdNumber->setSegmentStyle( QLCDNumber::Outline );
	
	m_timer = new QTimer(this);
	m_timer->setInterval(TIMERSPACE);
	InitConnectSignals();
}

CaiSeBanMa::~CaiSeBanMa()
{

}

void CaiSeBanMa::OnStartBtn()
{
	//计算比率 默认分钟
	int nTimeS = m_time * 60;//秒 
	m_Rate = m_money / nTimeS;

	m_timer->start();
}

void CaiSeBanMa::OnStopBtn()
{
	//m_timer->stop();

}

void CaiSeBanMa::OnResetBtn()
{
	m_timer->stop();
	ui.lcdNumber->display("");
	ui.TimeEdit->clear();
	ui.MoneyEdit->clear();
}

void CaiSeBanMa::OnTimeChanged(const QString& text)
{
	QString strTime = ui.TimeEdit->displayText();
	m_time = strTime.toLongLong();
}

void CaiSeBanMa::OnMoneyChanged(const QString& text)
{
	QString strMoney = ui.MoneyEdit->displayText();
	m_money = strMoney.toLongLong();
}

void CaiSeBanMa::OnTimer()
{
	m_money = m_money - m_Rate;

	QString strMoney = QString::number( m_money,'f',2 );

	ui.lcdNumber->display( strMoney );

}

void CaiSeBanMa::InitConnectSignals()
{
	connect(ui.StartBtn,SIGNAL(clicked()),this,SLOT(OnStartBtn()));
	connect(ui.StopBtn,SIGNAL(clicked()),this,SLOT(OnStopBtn()));
	connect(ui.ResetBtn,SIGNAL(clicked()),this,SLOT(OnResetBtn()));
	connect(ui.TimeEdit,SIGNAL(textChanged(const QString&)),this,SLOT(OnTimeChanged(const QString &)));
	connect(ui.MoneyEdit,SIGNAL(textChanged(const QString&)),this,SLOT(OnMoneyChanged(const QString &)));
	connect(m_timer,SIGNAL(timeout()),this,SLOT(OnTimer()));
}