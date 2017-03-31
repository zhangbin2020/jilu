#include "caisebanma.h"
#include <QtGui/QApplication>
#include <QTextCodec>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);

	QTextCodec *codec=QTextCodec::codecForName("utf-8");

	QTextCodec::setCodecForLocale(codec);

	QTextCodec::setCodecForCStrings(codec);

	QTextCodec::setCodecForTr(codec);

	CaiSeBanMa w;
	w.show();
	return a.exec();
}
