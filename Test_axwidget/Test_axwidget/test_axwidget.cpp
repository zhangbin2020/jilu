#include "test_axwidget.h"
#include <QAxWidget>

Test_axwidget::Test_axwidget(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);

// 	QAxWidget* XiriDes = new QAxWidget(this);
// 	//XiriDes->setControl(QString::fromUtf8("{8856F961-340A-11D0-A96B-00C04FD705A2}"));
// 	XiriDes->setControl("Shell.Explorer.2");
// 	XiriDes->setObjectName(QString::fromUtf8("XiriDes"));
// 	this->setCentralWidget(XiriDes);
// 	XiriDes->setProperty("DisplayAlerts", false);  //不显示任何警告信息。
// 	XiriDes->setProperty("DisplayScrollBars", false); // 显示滚动条
// 
// 	bool b = connect(XiriDes, SIGNAL(NavigateComplete2(IDispatch*, QVariant&)),
// 
// 		this, SLOT(sltNavigateComplete2(IDispatch*, QVariant&)));
// 
/* 	XiriDes->dynamicCall("Navigate(const QString&)", "http://121.41.180.2:30005/cmdy_jm/oauth/jm?token=Jb8Ab%2BTimkBO%2FzMnsebkEnr%2BxAuOFaT6%2BfywhRB2%2F%2FkTXtjpY5%2BPujCVQM%2B9lePm&menu=1&timetamp=20170315171808&sign=2C61E8D0E3085A84D0485C98AA429B92&assistantuuid={7ec98ad0-2c09-4f9f-94d9-eef883f228ff}&from=pc&uid=test_pop_7191&version=6.0.0.0");
*/
}

Test_axwidget::~Test_axwidget()
{

}

void Test_axwidget::sltNavigateComplete2(IDispatch* IID, QVariant& url)
{
	QString str = "";
}
