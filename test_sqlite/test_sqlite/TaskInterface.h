#ifndef WORKERINTERFACE_H
#define WORKERINTERFACE_H

#include <QObject>


class TaskInterface : public QObject
{
	Q_OBJECT

public:
	TaskInterface(QObject *parent);
	~TaskInterface();

	virtual void DoTask() = 0;

private:
	
};

#endif // WORKERINTERFACE_H
