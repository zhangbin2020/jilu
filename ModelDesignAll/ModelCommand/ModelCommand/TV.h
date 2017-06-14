#pragma once
#include <QDebug>

//receiver ÃüÁî½ÓÊÕÕß
class TV
{
public:
	TV();
	~TV();

	void open()
	{
		qDebug() << "open tv";
	}

	void turnOff()
	{
		qDebug() << "turn off tv";
	}

	void ChangeChannel()
	{
		qDebug() << "change channel";
	}
};

