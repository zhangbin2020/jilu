#include "proxy.h"
#include <QtGui/QApplication>

#include "SubjectInterface.h"
#include "ProxyPerson.h"

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
// 	Proxy w;
// 	w.show();

	//Ŀ�����
	SubjectInterface* sub = new SubjectInterface;
	sub->m_name = QString("xiaoxiao");


	//Ŀ����� ��ʵ��������baseInterface���У�
	RealPerson* real = new RealPerson;//real���������һ�� Ŀ������ ʵ��
	real->setSub(sub);

	ProxyPerson * p = new ProxyPerson;//
	p->SetRealPerson(real);////��������� ӵ��һ��real�����ʵ����

	p->SongDongXi();//����real�����SongDongXi

	return a.exec();


}
