#include "ObjStruct.h"

ObjStruct::ObjStruct(QObject *parent)
	: QObject(parent)
{

	for (int i = 0; i < 20; ++i)
	{
		ElementBase* e;
		if ( i%2 )
		{
			e = new Element1;
		}
		else
		{
			e = new Element2;
		}

		m_lsElement << e;
	}

}

ObjStruct::~ObjStruct()
{

}
