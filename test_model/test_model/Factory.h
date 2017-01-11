#ifndef FACTORY_H
#define FACTORY_H

#include <QObject>
#include "baseInterface.h"
#include "Enum_Common.h"



class Factory : public QObject
{
	Q_OBJECT

public:
	Factory(QObject *parent);
	~Factory();

	static baseInterface* Create(enum_factory ope);



private:
};

#endif // FACTORY_H
