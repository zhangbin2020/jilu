#ifndef ADAPORTINTER_H
#define ADAPORTINTER_H

#include <QObject>

class AdaportInter : public QObject
{
	Q_OBJECT

public:
	AdaportInter(QObject *parent=0);
	~AdaportInter();

	void SpecialRequest();

private:
	
};

#endif // ADAPORTINTER_H
