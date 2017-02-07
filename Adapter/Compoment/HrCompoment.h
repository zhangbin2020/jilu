#ifndef HRCOMPOMENT_H
#define HRCOMPOMENT_H

#include <QObject>
#include "CompomentInterface.h"

class HrCompoment : public CompomentInterface
{
	Q_OBJECT

public:
	HrCompoment(QObject *parent=0,QString name="");
	~HrCompoment();
	
	void Show(int nLevel);

private:
	
};

#endif // HRCOMPOMENT_H
