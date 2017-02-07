#include "proxy.h"
#include <QtGui/QApplication>

#include "SubjectInterface.h"
#include "ProxyPerson.h"

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
// 	Proxy w;
// 	w.show();

	//目标对象
	SubjectInterface* sub = new SubjectInterface;
	sub->m_name = QString("xiaoxiao");


	//目标对象 的实例，放在baseInterface类中，
	RealPerson* real = new RealPerson;//real对象必须有一个 目标对象的 实例
	real->setSub(sub);

	ProxyPerson * p = new ProxyPerson;//
	p->SetRealPerson(real);////代理类必须 拥有一个real对象的实例，

	p->SongDongXi();//调用real对象的SongDongXi

	return a.exec();


}
