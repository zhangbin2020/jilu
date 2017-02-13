#ifndef VISIT1_H
#define VISIT1_H

#include <QObject>
#include "visitbase.h"

class VISIT_MODULE_EXPORT Visit1 : public VisitBase
{
	Q_OBJECT

public:
	Visit1(QObject *parent=0);
	~Visit1();

	void visit1(ElementBase* e1);
	void visit2(ElementBase* e2);

private:
	
};

#endif // VISIT1_H
