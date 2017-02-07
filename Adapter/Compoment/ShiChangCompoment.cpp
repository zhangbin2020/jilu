#include "ShiChangCompoment.h"
#include <QDebug>

ShiChangCompoment::ShiChangCompoment(QObject *parent,QString name)
	: CompomentInterface(parent,name)
	, m_child()
{

}

ShiChangCompoment::~ShiChangCompoment()
{

}

void ShiChangCompoment::Add( CompomentInterface* p )
{
	m_child << p;
}

void ShiChangCompoment::Remove( CompomentInterface* p)
{
	m_child.removeOne(p );
	 
	delete p;
}

void ShiChangCompoment::Show(int nLevel)
{
	QString str =  QString(nLevel,'-');
	qDebug()<< str <<m_name;
	for ( auto ite=m_child.begin(); ite!=m_child.end(); ++ite)
	{
		(*ite)->Show( nLevel+1 );
	}
}
