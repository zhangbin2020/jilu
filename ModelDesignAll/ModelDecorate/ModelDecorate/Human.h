#ifndef HUMAN_H
#define HUMAN_H

#include <QObject>
#include <QDebug>

//��װ����
class Human : public QObject
{
	Q_OBJECT

public:
	Human(QObject *parent=0);
	~Human();
	Human(const Human& other);

	Human& operator =(const Human&other);

	//����һ���ܲ�
	virtual void run(){
		qDebug() << "running";
	}


private:
	
};

#endif // HUMAN_H
