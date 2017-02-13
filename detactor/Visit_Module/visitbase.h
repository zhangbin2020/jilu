#ifndef VISITBASE_H
#define VISITBASE_H

#include <QObject>
#include "visit_module.h"
#include "ElementBase.h"


//visit�ӿڣ�������ЩԪ�ؿ��Ա����ʣ�
class VISIT_MODULE_EXPORT VisitBase : public QObject
{
	Q_OBJECT

public:
	VisitBase(QObject *parent);
	~VisitBase();

	//visit�ӿڣ�������ЩԪ�ؿ��Ա����ʣ�
	virtual void visit1( ElementBase* e1 );
	virtual void visit2( ElementBase* e2 );

private:
	
};

#endif // VISITBASE_H
