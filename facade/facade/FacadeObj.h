#ifndef FACADEOBJ_H
#define FACADEOBJ_H

#include <QObject>
#include "ClassA.h"
#include "ClassB.h"

class FacadeObj : public QObject
{
	Q_OBJECT

public:
	FacadeObj(QObject *parent=0);
	~FacadeObj();

	void Method();


	void SetClassA(ClassA * p){m_ClassA = p;}
	void SetClassB(ClassB * p){m_ClassB = p;}

private:
	ClassA* m_ClassA;
	ClassB* m_ClassB;
};

#endif // FACADEOBJ_H
