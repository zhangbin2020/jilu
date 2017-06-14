#include "WorderThread.h"
#include <QDebug>
#include <QThread>
#include <functional>


WorderThread::WorderThread(QObject *parent)
	: QObject(parent)
{
	for (int i = 0; i < 100;++i)
	{
		m_lsData << i;
	}
}

WorderThread::~WorderThread()
{

}

int func1(int x, int y)
{
	if ( x >y )
	{
		return x;
	}
	return y;
}

int fun2(int x ,int y ,int i)
{
	return x + y + i;
}

void WorderThread::OnFun1()
{
	LessThan less;
	int x = 10;
	int y = 11;
	less( x,y );

	typedef int(*fPtr)(int);

	std::function< int(int) > fucPtr;//函数适配器，

	//适配用，返回值是适配的目的函数，
	fucPtr = std::bind(func1, std::placeholders::_1, 100);

	std::function< int(int,int) > funcptr2;
	funcptr2 = std::bind(fun2, std::placeholders::_1, std::placeholders::_2,10 );

	int yy = funcptr2( 1,2);

	int xx = fucPtr( 10 );


	qDebug() << "++++" << QThread::currentThreadId();
}

void WorderThread::OnFun2()
{
	qDebug() << "++++" << QThread::currentThreadId();
}