#ifndef ELEMENT1_H
#define ELEMENT1_H

#include <QObject>
#include "ElementBase.h"

class VISIT_MODULE_EXPORT Element1 : public ElementBase
{
	Q_OBJECT

public:
	Element1(QObject *parent=0);
	~Element1();

	void accept(VisitBase* visit);
	void dosomething();


private:
	
};

#endif // ELEMENT1_H
