#ifndef DELETECLASS_H
#define DELETECLASS_H

#include <QObject>
#include "baseInterface.h"

class DeleteClass : public baseInterface
{
	Q_OBJECT

public:
	DeleteClass(QObject *parent=0);
	~DeleteClass();

	int GetResult();

private:

};

#endif // DELETECLASS_H
