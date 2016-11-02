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


	virtual void Parse( QByteArray ba,IEntity * entity );

	//strClassName判断解析哪个属性
	virtual void JsonParseObject(QByteArray ba, QString strClassName);
	virtual void JsonParseArray(QJsonArray &npcArray,QString strClassName);

	
};

#endif // IENTITY_H
