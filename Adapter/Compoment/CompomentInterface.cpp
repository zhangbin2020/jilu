#include "CompomentInterface.h"
#include <QDebug>

CompomentInterface::CompomentInterface(QObject *parent,QString name)
	: QObject(parent)
	, m_name(name)
{

}

CompomentInterface::~CompomentInterface()
{

}

void CompomentInterface::Add( CompomentInterface* )
{

}

void CompomentInterface::Remove( CompomentInterface* )
{


}

void CompomentInterface::Show(int nLevel)
{
	/*qDebug()<<new QString('-',nLevel)<<m_name;*/
}
