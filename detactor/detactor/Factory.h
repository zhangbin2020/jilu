#ifndef FACTORY_H
#define FACTORY_H

#include <QObject>


#include "Decator1.h"
#include "Decator2.h"
#include "Decator3.h"


class Factory : public QObject
{
	Q_OBJECT

public:
	Factory(QObject *parent);
	~Factory();

	
	static DetactorInterface* create( dec_type type );

private:
	
};

#endif // FACTORY_H
