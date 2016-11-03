#include "IEntity.h"

IJsonParser::IJsonParser(QObject * parent)
:QObject(parent)
{

}

IJsonParser::~IJsonParser()
{

}

IJsonParser::IJsonParser(const IJsonParser & other)
{

}

void IJsonParser::Parse(QByteArray ba, IJsonParser * entity)
{
	QJsonParseError jsonError;
	QJsonDocument json = QJsonDocument::fromJson(ba, &jsonError);

	if (jsonError.error == QJsonParseError::NoError)
	{
		if (json.isObject())
		{
			QJsonObject obj = json.object();

			const QMetaObject* metaobject = entity->metaObject();//entity->staticMetaObject;
			int count = metaobject->propertyCount();
			for (int i = 0; i < count; ++i)
			{
				QMetaProperty metaproperty = metaobject->property(i);
				const char *name = metaproperty.name();
				QString propertyName(name);

				if (obj.contains(propertyName))
				{
					if (obj[propertyName].isObject())
					{
						QJsonObject tempObj = obj[propertyName].toObject();
						QByteArray ba1 = QJsonDocument(tempObj).toJson();
						entity->JsonParseObject(ba1,propertyName);
						continue;
					}
					else
					{
						if (obj[propertyName].isBool())
						{
							this->setProperty(name, obj[propertyName].toBool());
						}
						else if (obj[propertyName].isDouble())
						{
							this->setProperty(name, obj[propertyName].toDouble());
						}
						else if (obj[propertyName].isString())
						{
							this->setProperty(name, obj[propertyName].toString());
						}
						else if (obj[propertyName].isArray())
						{
							QJsonArray jsonArray = obj[propertyName].toArray();
							entity->JsonParseArray(jsonArray, propertyName);
						}
					}
				}
			}//for
		}
	}
}


void IJsonParser::JsonParseObject(QByteArray ba, QString strClassName)
{

}

void IJsonParser::JsonParseArray(QJsonArray &npcArray, QString strClassName)
{

}