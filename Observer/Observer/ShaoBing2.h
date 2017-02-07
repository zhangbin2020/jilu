#ifndef SHAOBING2_H
#define SHAOBING2_H

#include <QObject>
#include "NotifyInterface.h"

class ShaoBing2 : public NotifyInterface
{
	Q_OBJECT

public:
	ShaoBing2(QObject *parent=0);
	~ShaoBing2();

private:
	
};

#endif // SHAOBING2_H
