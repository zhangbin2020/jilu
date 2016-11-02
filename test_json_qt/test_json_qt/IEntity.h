#ifndef IENTITY_H
#define IENTITY_H

#include <QObject>
#include <QJsonDocument>
#include <QJsonObject>
#include <QJsonArray>
#include <QMetaProperty>


//添加一个模版，T，JsonToEntity（）函数在IEntity中实现，直接调用T->JsonToEntity()函数，

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
