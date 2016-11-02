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


	virtual void Parse( QByteArray ba,IEntity * entity );

	//strClassName�жϽ����ĸ�����
	virtual void JsonParseObject(QByteArray ba, QString strClassName);
	virtual void JsonParseArray(QJsonArray &npcArray,QString strClassName);

	
};

#endif // IENTITY_H
