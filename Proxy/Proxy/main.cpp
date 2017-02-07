#include "proxy.h"
#include <QtGui/QApplication>

#include "SubjectInterface.h"
#include "ProxyPerson.h"

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
// 	Proxy w;
// 	w.show();
	SubjectInterface* sub = new SubjectInterface;
	sub->m_name = QString("xiaoxiao");

	RealPerson* real = new RealPerson;
	real->setSub(sub);

	ProxyPerson * p = new ProxyPerson;
	p->SetRealPerson(real);

	p->SongDongXi();

	return a.exec();


}
