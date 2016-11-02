#ifndef IENTITY_H
#define IENTITY_H

#include <QObject>
#include <QJsonDocument>
#include <QJsonObject>
#include <QJsonArray>
#include <QMetaProperty>


//���һ��ģ�棬T��JsonToEntity����������IEntity��ʵ�֣�ֱ�ӵ���T->JsonToEntity()������

class IEntity: public QObject
{
	Q_OBJECT

public:
	IEntity(QObject * parent = 0);
	~IEntity();

	IEntity( const IEntity & other );


	//virtual void JsonToEntity( QByteArray ba,IEntity * entity );
	virtual void JsonParseObject( QByteArray ba );
	virtual void JsonParseArray( QByteArray ba );

	
};

#endif // IENTITY_H
