#ifndef CLASSA_H
#define CLASSA_H

#include <QObject>

class ClassA : public QObject
{
	Q_OBJECT

public:
	ClassA(QObject *parent=0);
	~ClassA();

	void MethodA();

private:
	
};

#endif // CLASSA_H
