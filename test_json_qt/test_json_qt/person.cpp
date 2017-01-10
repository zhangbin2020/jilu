#include "person.h"


#include <QJsonDocument>
#include <QJsonObject>
#include <QJsonArray>
#include "person.h"
#include <QMetaProperty>

TestStruct2::TestStruct2(QObject* parent)
	: IJsonParser(parent),
	m_num(0)
{

}

TestStruct2::TestStruct2(const TestStruct2& ts )
:IJsonParser(ts)
{
	this->m_num = ts.num2();
}

TestStruct2::~TestStruct2()
{
}



// TestStruct2& TestStruct2::operator = (const TestStruct2& rhs)
// {
// 	this->m_num = rhs.num2();
// 	return *this;
// }

 void TestStruct2::JsonToEntity(QByteArray ba)
 {
	 IJsonParser::Parse(ba, this);
 }

 void TestStruct2::JsonParseObject(QByteArray ba, QString strClassName)
{

}

int TestStruct2::num2() const
{
	return m_num;
}

void TestStruct2::setNum2(const int& n)
{
	m_num = n;
}
// 
// 
// 
// TestStruct::TestStruct(QObject* parent)
// 	: JsonEntity(parent),
// 	m_num(0)
// 	, m_ts(NULL)
// {
// 	m_ts = new JsonEntity;
// 		 
// }
// 
// JsonEntityPtr TestStruct::ts() 
// {
// 	return m_ts;
// }
// 
// void TestStruct::setTs( JsonEntityPtr ts)
// {
// 	if ( m_ts )
// 	{
// 		delete m_ts;
// 		m_ts = new JsonEntity;
// 	}
// 	m_ts = ts;
// }
// 
// TestStruct::TestStruct(const TestStruct& ts )
// {
// 	this->m_num = ts.num();
// }
// 
// TestStruct::~TestStruct()
// {
// }
// 
// TestStruct& TestStruct::operator = (const TestStruct& rhs)
// {
// 	this->m_num = rhs.num();
// 	return *this;
// }
// 
// int TestStruct::num() const
// {
// 	return m_num;
// }
// 
// void TestStruct::setNum(const int& n)
// {
// 	m_num = n;
// }


Q_DECLARE_METATYPE( Person );

Person::Person(QObject* parent)
  : IJsonParser(parent),
    m_name(),
    m_phoneNumber(0),
    m_gender(Female),
    m_luckyNumber(0)
{
 	qRegisterMetaType< TestStruct2 >("TestStruct2");
	qRegisterMetaType< QList<TestStruct2> >("listTS");
}

Person::Person( const Person& ts )
:IJsonParser(ts)
{
	this->m_customField = ts.m_customField;
	this->m_dob = ts.m_dob;
	this->m_gender = ts.m_gender;
	this->m_luckyNumber = ts.m_luckyNumber;
	this->m_name = ts.m_name;
	this->m_phoneNumber = ts.m_phoneNumber;
}

Person::~Person()
{

}

 void Person::JsonToEntity(QByteArray ba)
 { 
	 IJsonParser::Parse(ba, this);
//  	QJsonParseError jsonError;//Qt5新类
//  	QJsonDocument json = QJsonDocument::fromJson(ba, &jsonError);//Qt5新类
//  
//  	//判断，是否是QJsonDocument，
//  
//  	if (jsonError.error == QJsonParseError::NoError)//Qt5新类
//  	{
//  		if (json.isObject())
//  		{
//  			QJsonObject obj = json.object();//Qt5新类
//  
//  			QMetaObject metaobject = this->staticMetaObject;
//  			int count = metaobject.propertyCount();
//  			for (int i = 0; i < count; ++i)
//  			{
//  				//
//  				QMetaProperty metaproperty = metaobject.property(i);
//  				const char *name = metaproperty.name();
//  				QString propertyName(name);
//  
//  				if (obj.contains(propertyName))
//  				{
//  					if (obj[propertyName].isObject())
//  					{
//  						QJsonObject tempObj = obj[propertyName].toObject();
//  						QByteArray ba1 = QJsonDocument(tempObj).toJson();
//  						m_testStruct.JsonToEntity(ba1);
//  						return;
//  					}
//  					else
//  					{
//  						if (obj[propertyName].isBool())
//  						{
//  							//判断value是否为空，
//  							this->setProperty(name, obj[propertyName].toBool());
//  						}
//  						else if (obj[propertyName].isDouble())
//  						{
//  							this->setProperty(name, obj[propertyName].toDouble());
//  						}
//  						else if (obj[propertyName].isString())
//  						{
//  							this->setProperty(name, obj[propertyName].toString());
//  						}
//  						else if (obj[propertyName].isArray() )
//  						{
//  							m_lsStruct.clear();
//  
//  							QJsonArray npcArray = obj[propertyName].toArray();
//  							for (int npcIndex = 0; npcIndex < npcArray.size(); ++npcIndex) 
//  							{
//  								QJsonObject npcObject = npcArray[npcIndex].toObject();
//  								TestStruct2 ts;
//  								ts.JsonToEntity(QJsonDocument(npcObject).toJson());
//  								m_lsStruct << ts;
//  							}
//  					//  					}
//  				}
//  			}
//  		}
//  	}
 }



 void Person::JsonParseObject(QByteArray ba, QString strClassName)
{
	if ( strClassName == "testStruct" )
	{
		m_testStruct.JsonToEntity(ba);
	}
}

 void Person::JsonParseArray(QJsonArray &npcArray, QString strClassName)
{
	 m_lsStruct.clear();
	 for (int npcIndex = 0; npcIndex < npcArray.size(); ++npcIndex)
	 {
		 QJsonObject npcObject = npcArray[npcIndex].toObject();
		 if (strClassName == "listTS")
		 {			 		
			 TestStruct2 ts;
			 ts.JsonToEntity(QJsonDocument(npcObject).toJson());
			 m_lsStruct << ts;
		 }
		 else
		 {

		 }
	 }
}

QString Person::name() const
{
  return m_name;
}

void Person::setName(const QString& name)
{
  m_name = name;
}

int Person::phoneNumber() const
{
  return m_phoneNumber;
}

void Person::setPhoneNumber(const int phoneNumber)
{
  m_phoneNumber = phoneNumber;
}

void Person::setGender(Gender gender)
{
  m_gender = gender;
}

Person::Gender Person::gender() const
{
  return m_gender;
}

QDate Person::dob() const
{
  return m_dob;
}

void Person::setDob(const QDate& dob)
{
  m_dob = dob;
}

QVariant Person::customField() const
{
  return m_customField;
}

void Person::setCustomField(const QVariant& customField)
{
  m_customField = customField;
}

const quint16 Person::luckyNumber() const
{
  return m_luckyNumber;
}

void Person::setLuckyNumber(const quint16 luckyNumber)
{
  m_luckyNumber = luckyNumber;
}

TestStruct2 Person::testClass()
{
	return m_testStruct;
}

void Person::setTestClass( TestStruct2 ts)
{
	m_testStruct = ts;
}

QList<TestStruct2> Person::getLsTS()
{
	return m_lsStruct;
}

void Person::setLsTs(QList<TestStruct2> ts)
{
	m_lsStruct = ts;
}

// JsonEntityPtr Person::testClass() 
// {
// 	return m_testStruct;
// }
// 
// void Person::setTestClass( JsonEntityPtr ts)
// {
// 	if ( m_testStruct )
// 	{
// 		delete m_testStruct;
// 		m_testStruct = new JsonEntity;
// 	}
// 	m_testStruct = ts;
// }

