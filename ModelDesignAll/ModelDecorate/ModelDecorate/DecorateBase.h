#ifndef DECORATEBASE_H
#define DECORATEBASE_H

#include <QObject>
#include "Human.h"

class DecorateBase : public Human
{
	Q_OBJECT

public:
	DecorateBase(QObject *parent=0);
	~DecorateBase();

	void SetHuman(Human val){ m_man = val; }

	//¹¦ÄÜ¶þ£º
	virtual void Sing();

	void run()
	{		
		Sing();
		Human::run();
	}

private:
	Human m_man;
};

#endif // DECORATEBASE_H
