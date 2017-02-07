#ifndef CLASSB_H
#define CLASSB_H

#include <QObject>

class ClassB : public QObject
{
	Q_OBJECT

public:
	ClassB(QObject *parent);
	~ClassB();

	void MethodB();

private:
	
};

#endif // CLASSB_H
