#include "caisebanma.h"
#include <QtGui/QApplication>
#include <QTextCodec>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);

	//使QT支持弹出对话框及界面显示中文
	QTextCodec *codec = QTextCodec::codecForName("GB18030");   //现在的PC平台必须支持 GB18030 ，对嵌入式产品暂不作要求。所以手机、MP3 一般只支持 GB2312。
	if(codec)
	{
		QTextCodec::setCodecForLocale(codec);
		QTextCodec::setCodecForCStrings(codec);
		QTextCodec::setCodecForTr(codec);
	}

	CaiSeBanMa w;
	w.show();
	return a.exec();
}
