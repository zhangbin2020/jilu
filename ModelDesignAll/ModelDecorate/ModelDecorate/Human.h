#ifndef HUMAN_H
#define HUMAN_H

#include <QObject>
#include <QDebug>

//被装饰者
class Human : public QObject
{
	Q_OBJECT

public:
	Human(QObject *parent=0);
	~Human();
	Human(const Human& other);

	Human& operator =(const Human&other);

	//功能一：跑步
	virtual void run(){
		qDebug() << "running";
	}


private:
	
};

#endif // HUMAN_H
