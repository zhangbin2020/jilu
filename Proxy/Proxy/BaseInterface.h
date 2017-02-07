#ifndef BASEINTERFACE_H
#define BASEINTERFACE_H

#include <QObject>
#include "SubjectInterface.h"


/*
//代理类和real类 的基类；代理类和real类，必须具有相同的行为，
*/
class BaseInterface : public QObject
{
	Q_OBJECT

public:
	BaseInterface(QObject *parent);
	~BaseInterface();

	void setSub(SubjectInterface* p){m_Subject = p;}

	virtual void SongDongXi();


protected:
	SubjectInterface* m_Subject;
	
};

#endif // BASEINTERFACE_H
