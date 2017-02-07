#ifndef SHAOBING1_H
#define SHAOBING1_H

#include <QObject>
#include "NotifyInterface.h"

class ShaoBing1 : public NotifyInterface
{
	Q_OBJECT

public:
	ShaoBing1(QObject *parent=0);
	~ShaoBing1();

private:
	
};

#endif // SHAOBING1_H
