#ifndef METHOD2_H
#define METHOD2_H

#include <QObject>
#include "TemplateBase.h"

class Method2 : public TemplateBase
{
	Q_OBJECT

public:
	Method2(QObject *parent=0);
	~Method2();


	virtual QString Answer1();
	virtual QString Answer2();

private:
	
};

#endif // METHOD2_H
