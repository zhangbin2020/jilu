#ifndef SHICHANGCOMPOMENT_H
#define SHICHANGCOMPOMENT_H

#include <QObject>
#include "CompomentInterface.h"

//市场部门
class ShiChangCompoment : public CompomentInterface
{
	Q_OBJECT

public:
	ShiChangCompoment(QObject *parent=0,QString name="");
	~ShiChangCompoment();
	
	void Add( CompomentInterface* );
	void Remove( CompomentInterface* );
	void Show(int nLevel);

private:
	
	QList< CompomentInterface* > m_child;
};

#endif // SHICHANGCOMPOMENT_H
