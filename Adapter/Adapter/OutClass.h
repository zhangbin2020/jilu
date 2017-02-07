#ifndef OUTCLASS_H
#define OUTCLASS_H

#include <QObject>
#include "OutInterface.h"
#include "AdaportInter.h"

//�ⲿ�ӿ�
class OutClass : public OutInterface
{
	Q_OBJECT

public:
	OutClass(QObject *parent=0);
	~OutClass();

	void Request();

private:
	AdaportInter* m_Adaptor;
};

#endif // OUTCLASS_H
