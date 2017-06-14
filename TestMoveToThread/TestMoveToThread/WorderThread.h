#ifndef WORDERTHREAD_H
#define WORDERTHREAD_H

#include <QObject>
#include "LessThan.h"

class WorderThread : public QObject
{
	Q_OBJECT

public:
	WorderThread(QObject *parent=0);
	~WorderThread();

	public slots:
	void OnFun1();
	void OnFun2();

private:
	QList<double> m_lsData;
	
};

#endif // WORDERTHREAD_H
