#include "test_webengine_editor.h"
#include <QWebEngineView>

test_webEngine_Editor::test_webEngine_Editor(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);

	connect(ui.pushButton, &QPushButton::clicked, this, &test_webEngine_Editor::OnBtn);

// 	QWebEngineView* view = new QWebEngineView(NULL);
// 
// 	view->page()->runJavaScript("document.documentElement.contentEditable=true");
// 	view->setHtml(QString("123"));
// 
// 	ui.horizontalLayout_2->addWidget(view);
 }

test_webEngine_Editor::~test_webEngine_Editor()
{

}

void test_webEngine_Editor::OnBtn()
{
	Dialog* dlg = new Dialog(this);
	dlg->exec();
}
