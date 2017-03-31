#include "caisebanma.h"

CaiSeBanMa::CaiSeBanMa(QWidget *parent, Qt::WFlags flags)
	: QWidget(parent, flags)
	, m_bStart(true)
{
	ui.setupUi(this);

	this->setWindowIcon(QIcon(":/CaiSeBanMa/Resources/231.png"));

	//QValidator *validator=new QIntValidator(1,10000,this);
	QRegExp regx("[1-9]{5}$");
	QValidator *validator = new QRegExpValidator(regx, this );
	ui.TIME->setValidator(validator);
	ui.MONEY->setValidator(validator);

	m_thread = new WorkThread(this);
	connect( m_thread,SIGNAL(SigResult(QString)),this,SLOT(OnShowRet(QString)),Qt::BlockingQueuedConnection );

	connect(ui.StartBtn,SIGNAL(clicked()),this,SLOT(OnStart()));
}

CaiSeBanMa::~CaiSeBanMa()
{

}

void CaiSeBanMa::OnTime()
{

}
void CaiSeBanMa::OnMoney()
{

}
void CaiSeBanMa::OnStart()
{
	if ( m_bStart )
	{
		m_bStart = !m_bStart;
		ui.StartBtn->setText(tr("重置"));

		QString strTime = ui.TIME->text();
		QString strMoney = ui.MONEY->text();

		double t = strTime.toDouble()*60;
		double money = strMoney.toDouble();
		m_Rate = money / t;

		m_thread->SetItem( money,m_Rate );
		m_thread->start();
	}
	else
	{
		m_bStart = !m_bStart;
		ui.StartBtn->setText(tr("开始"));

		m_thread->SetStop(true);

		ui.TIME->setText("");
		ui.MONEY->setText("");
		ui.RESULT->setText("");
	}
}
// void CaiSeBanMa::OnReset()
// {
// 	m_thread->SetStop(true);
// 
// 	ui.TIME->setText("");
// 	ui.MONEY->setText("");
// 	ui.RESULT->setText("");
// }

void CaiSeBanMa::OnShowRet( QString val )
{
	//val += QStringLiteral("元");
	ui.RESULT->setText( val );

}
