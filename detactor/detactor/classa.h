#ifndef CLASSA_H
#define CLASSA_H

#include <QObject>


class ClassB;
class ClassA : public QObject
{
	Q_OBJECT

public:
	ClassA(QObject *parent=0);
	~ClassA();

	void MethodA();
	void MethodB( ClassB b );

private:
	
};

#endif // CLASSA_H
