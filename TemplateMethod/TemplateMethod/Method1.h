#ifndef METHOD1_H
#define METHOD1_H

#include <QObject>
#include "TemplateBase.h"

class Method1 : public TemplateBase
{
	Q_OBJECT

public:
	Method1(QObject *parent=0);
	~Method1();

	virtual QString Answer1();
	virtual QString Answer2();

private:

};

#endif // METHOD1_H
