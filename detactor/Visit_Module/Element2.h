#ifndef ELEMENT2_H
#define ELEMENT2_H

#include <QObject>
#include "ElementBase.h"

class  VISIT_MODULE_EXPORT Element2 : public ElementBase
{
	Q_OBJECT

public:
	Element2(QObject *parent=0);
	~Element2();

	void accept(VisitBase* visit);
	void dosomething();

private:
	
};

#endif // ELEMENT2_H
