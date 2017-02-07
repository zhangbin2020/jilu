#ifndef PROXYPERSON_H
#define PROXYPERSON_H

#include <QObject>

#include "RealPerson.h"


//代理类必须 拥有一个real对象的实例，
class ProxyPerson : public BaseInterface
{
	Q_OBJECT

public:
	ProxyPerson(QObject *parent=0);
	~ProxyPerson();

	void SetRealPerson(BaseInterface*p){m_RealPerson = p;};

	void SongDongXi();//调用real对象的SongDongXi

private:
	BaseInterface* m_RealPerson;//
	
};

#endif // PROXYPERSON_H
