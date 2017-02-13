#ifndef ELEMENTBASE_H
#define ELEMENTBASE_H

#include <QObject>
#include "visit_module.h"

class VisitBase;

class VISIT_MODULE_EXPORT ElementBase : public QObject
{
	Q_OBJECT

public:
	ElementBase(QObject *parent);
	~ElementBase();

	virtual void accept( VisitBase* visit );
	virtual void dosomething();

private:
	
};

#endif // ELEMENTBASE_H
