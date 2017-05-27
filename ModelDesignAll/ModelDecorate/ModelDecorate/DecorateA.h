#ifndef DECORATEA_H
#define DECORATEA_H

#include <QObject>
#include "DecorateBase.h"

class DecorateA : public DecorateBase
{
	Q_OBJECT

public:
	DecorateA(QObject *parent=0);
	~DecorateA();

	//¹¦ÄÜÈý
	void jump();

	void run()
	{
		jump();
		DecorateBase::run();
	}

private:
	
};

#endif // DECORATEA_H
