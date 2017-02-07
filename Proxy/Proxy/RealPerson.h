#ifndef REALPERSON_H
#define REALPERSON_H

#include <QObject>
#include "BaseInterface.h"

class RealPerson : public BaseInterface
{
	Q_OBJECT

public:
	RealPerson(QObject *parent=0);
	~RealPerson();

	void SongDongXi();

private:
	
};

#endif // REALPERSON_H
