#include "HrCompoment.h"
#include <QDebug>

HrCompoment::HrCompoment(QObject *parent,QString name)
	: CompomentInterface(parent,name)
{

}

HrCompoment::~HrCompoment()
{

}

void HrCompoment::Show(int nLevel)
{
	QString str =  QString(nLevel,'-');
	qDebug()<<str <<m_name;
}
