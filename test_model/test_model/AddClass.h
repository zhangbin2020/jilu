#ifndef ADDCLASS_H
#define ADDCLASS_H

#include <QObject>
#include "baseInterface.h"

class AddClass : public baseInterface
{
	Q_OBJECT

public:
	AddClass(QObject *parent=0);
	~AddClass();

	int GetResult();

private:
	
};

#endif // ADDCLASS_H
