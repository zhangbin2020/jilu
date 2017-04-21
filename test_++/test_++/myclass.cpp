#include "myclass.h"
#include <QWebEngineView>

MyClass::MyClass(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);

	QWebEngineView* view = new QWebEngineView();
	view->load( QUrl("https://www.baidu.com") );

	ui.horizontalLayout->addWidget(view);
}

MyClass::~MyClass()
{

}
