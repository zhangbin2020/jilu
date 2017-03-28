#include "test_webkit_neihe.h"
#include <QWebView>
#include <QUrl>

Test_webkit_neihe::Test_webkit_neihe(QWidget *parent, Qt::WFlags flags)
	: QMainWindow(parent, flags)
{
	ui.setupUi(this);

//	QString strFinalUrl = "http://121.41.180.2:30005/cmdy_jm/oauth/jm?token=GJQF%2BXbYyvOSSWm%2B8OkxWFu61hss0R565HkFOQw%2BIcJvmVNzJ%2B%2BlhKiLlVbNIaCF&menu=1&timetamp=20170320104859&sign=08B3478B349E0B43435E8816FCCD06D9&assistantuuid={7ec98ad0-2c09-4f9f-94d9-eef883f228ff}&from=pc&uid=test_pop_deleteman&version=5.7.1.0";
	QString strFinalUrl = "http://www.163.com/";
	QByteArray a = strFinalUrl.toAscii();
	QUrl url;
	url.setEncodedUrl(a);
	ui.webView->load( url);

	//ui.webView->load(strFinalUrl);
}

Test_webkit_neihe::~Test_webkit_neihe()
{

}
