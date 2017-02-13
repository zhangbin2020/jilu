#ifndef OBJSTRUCT_H
#define OBJSTRUCT_H

#include <QObject>
#include "visit_module.h"

#include "Element1.h"
#include "Element2.h"

class VISIT_MODULE_EXPORT ObjStruct : public QObject
{
	Q_OBJECT

public:
	ObjStruct(QObject *parent=0);
	~ObjStruct();

	QList<ElementBase*> GetElement(){ return m_lsElement; }

private:

	QList<ElementBase*> m_lsElement;
	
};

#endif // OBJSTRUCT_H
