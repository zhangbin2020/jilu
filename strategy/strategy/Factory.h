#ifndef FACTORY_H
#define FACTORY_H

#include <QObject>
#include "BaseInterface.h"
#include "Strategy1.h"
#include "Strategy2.h"
#include "Header.h"

class Factory : public QObject
{
	Q_OBJECT

public:
	Factory(QObject *parent);
	~Factory();


	static BaseInterface* GetStrategy(enum_strategy type);

protected:

private:
	
};

#endif // FACTORY_H
