#include "test_webengine_editor.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QCoreApplication::setAttribute(Qt::AA_ShareOpenGLContexts);
	QApplication a(argc, argv);
	test_webEngine_Editor w;
	w.show();
	return a.exec();
}
