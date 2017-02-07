#ifndef TEMPLATEBASE_H
#define TEMPLATEBASE_H

#include <QObject>

class TemplateBase : public QObject
{
	Q_OBJECT

public:
	TemplateBase(QObject *parent);
	~TemplateBase();

	void getResult();


	virtual QString Answer1();
	virtual QString Answer2();

private:

};

#endif // TEMPLATEBASE_H
