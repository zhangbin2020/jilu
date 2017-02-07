#ifndef PROXYPERSON_H
#define PROXYPERSON_H

#include <QObject>

#include "RealPerson.h"


//��������� ӵ��һ��real�����ʵ����
class ProxyPerson : public BaseInterface
{
	Q_OBJECT

public:
	ProxyPerson(QObject *parent=0);
	~ProxyPerson();

	void SetRealPerson(BaseInterface*p){m_RealPerson = p;};

	void SongDongXi();//����real�����SongDongXi

private:
	BaseInterface* m_RealPerson;//
	
};

#endif // PROXYPERSON_H
