#ifndef CLASSB_H
#define CLASSB_H

#include <QObject>
#include "classa.h"


class ClassB : public QObject
{
	Q_OBJECT

public:
	ClassB(QObject *parent=0);
	~ClassB();

	void Method(ClassA* A);

private:
	
};

#endif // CLASSB_H
