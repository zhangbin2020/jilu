#include "Dialog.h"
#include <QDebug>

Dialog::Dialog(QWidget *parent)
	: QDialog(parent)
{
	ui.setupUi(this);

	m_view = new QWebEngineView(this);
	m_view->setMouseTracking(true);

	connect(m_view, SIGNAL(loadFinished(bool)), SLOT(finishLoading(bool)));

// 	m_view->page()->runJavaScript("contentEditable=true", [](const QVariant &result){
// 		qDebug() << result;
// 	});
	
// 	m_view->page()->runJavaScript("contentEditable=true", [](const QVariant &result){
// 		qDebug() << result; 
// 	});
	//m_view->page()->runJavaScript("document.documentElement.contentEditable = false");

	m_view->setHtml(QString("123"));

	//m_view->page()->runJavaScript("document.documentElement.contentEditable = true");

	ui.horizontalLayout->addWidget(m_view);
}

Dialog::~Dialog()
{

}

void Dialog::finishLoading(bool)
{
	m_view->page()->runJavaScript("document.documentElement.contentEditable = true");
}
