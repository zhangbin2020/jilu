#ifndef WORKDER_H
#define WORKDER_H

#include <QObject>


class Workder : public QObject
{
	Q_OBJECT

public:
	Workder(QObject *parent);
	~Workder();

	public slots:
	void funa();
	void funb();

private:
	
};

#endif // WORKDER_H
