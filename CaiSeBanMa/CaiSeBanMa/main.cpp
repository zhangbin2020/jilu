#include "caisebanma.h"
#include <QtGui/QApplication>
#include <QTextCodec>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);

	//ʹQT֧�ֵ����Ի��򼰽�����ʾ����
	QTextCodec *codec = QTextCodec::codecForName("GB18030");   //���ڵ�PCƽ̨����֧�� GB18030 ����Ƕ��ʽ��Ʒ�ݲ���Ҫ�������ֻ���MP3 һ��ֻ֧�� GB2312��
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
