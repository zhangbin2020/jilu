/* This file is part of qjson
  *
  * Copyright (C) 2009 Till Adam <adam@kde.org>
  *
  * This library is free software; you can redistribute it and/or
  * modify it under the terms of the GNU Lesser General Public
  * License version 2.1, as published by the Free Software Foundation.
  * 
  *
  * This library is distributed in the hope that it will be useful,
  * but WITHOUT ANY WARRANTY; without even the implied warranty of
  * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
  * Lesser General Public License for more details.
  *
  * You should have received a copy of the GNU Lesser General Public License
  * along with this library; see the file COPYING.LIB.  If not, write to
  * the Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor,
  * Boston, MA 02110-1301, USA.
  */

#ifndef PERSON_H
#define PERSON_H

#include <QtCore/QDate>
#include <QtCore/QtGlobal>
#include <QtCore/QObject>
#include <QtCore/QVariant>


// 
// class TestStruct2: public JsonEntity
// {
// 	Q_OBJECT
// 		Q_PROPERTY(int num2 READ num2 WRITE setNum2)
// 
// public:
// 	TestStruct2(QObject* parent = 0);
// 	TestStruct2( const TestStruct2& ts );
// 	~TestStruct2();
// 
// 	TestStruct2& operator = (const TestStruct2& rhs);
// 
// 	int num2() const;
// 	void setNum2(const int& n);
// 
// private:
// 	int m_num;
// };
// Q_DECLARE_METATYPE( TestStruct2 );
// 
// class TestStruct: public JsonEntity
// {
// 	Q_OBJECT
// 	Q_PROPERTY(int num READ num WRITE setNum)
// 	 Q_PROPERTY(JsonEntityPtr ts READ ts WRITE setTs)
// 
// public:
// 	TestStruct(QObject* parent = 0);
// 	TestStruct( const TestStruct& ts );
// 	~TestStruct();
// 
// 	 TestStruct& operator = (const TestStruct& rhs);
// 
// 	int num() const;
// 	void setNum(const int& n);
// 
// 	JsonEntityPtr ts();
// 	void setTs( JsonEntityPtr ts);
// 
// private:
// 	int m_num;
// 	JsonEntityPtr m_ts;
// };
// 
// typedef TestStruct* TestStructPtr;
// 
// Q_DECLARE_METATYPE( TestStruct );
// Q_DECLARE_METATYPE( TestStructPtr );
// 


#include "IEntity.h"

class TestStruct2: public IJsonParser
{
	Q_OBJECT
		Q_PROPERTY(int num2 READ num2 WRITE setNum2)

public:
	TestStruct2(QObject* parent = 0);
	TestStruct2( const TestStruct2& ts );
	~TestStruct2();

	TestStruct2& operator = (const TestStruct2& rhs);

	void JsonToEntity(QByteArray ba);
	void JsonParseObject(QByteArray ba, QString strClassName);

	int num2() const;
	void setNum2(const int& n);

private:
	int m_num;
};


class Person : public IJsonParser
{
  Q_OBJECT


  Q_PROPERTY(QString name READ name WRITE setName)
  Q_PROPERTY(int phoneNumber READ phoneNumber WRITE setPhoneNumber)
  Q_PROPERTY(Gender gender READ gender WRITE setGender)
  Q_PROPERTY(QDate dob READ dob WRITE setDob)
  Q_PROPERTY(QVariant customField READ customField WRITE setCustomField)
  Q_PROPERTY(quint16 luckyNumber READ luckyNumber WRITE setLuckyNumber)
  Q_PROPERTY(TestStruct2 testStruct READ testClass WRITE setTestClass)
  Q_PROPERTY(QList<TestStruct2> listTS READ getLsTS WRITE setLsTs)
  Q_ENUMS(Gender)

 public:
    Person(QObject* parent = 0);
	Person( const Person& ts );
    ~Person();

	void JsonToEntity( QByteArray ba );
	void JsonParseObject(QByteArray ba, QString strClassName);
	void JsonParseArray(QJsonArray &npcArray, QString strClassName);


    QString name() const;
    void setName(const QString& name);

    int phoneNumber() const;
    void setPhoneNumber(const int  phoneNumber);

    enum Gender {Male, Female};
    void setGender(Gender gender);
    Gender gender() const;

    QDate dob() const;
    void setDob(const QDate& dob);

    QVariant customField() const;
    void setCustomField(const QVariant& customField);

    const quint16 luckyNumber() const;
    void setLuckyNumber(const quint16 luckyNumber);

	TestStruct2 testClass();
	void setTestClass( TestStruct2 ts);

	QList<TestStruct2> getLsTS();
	void setLsTs(QList<TestStruct2> ts);


protected:

  private:
	TestStruct2 m_testStruct;
    QString m_name;
    int m_phoneNumber;
    Gender m_gender;
    QDate m_dob;
    QVariant m_customField;
    quint16 m_luckyNumber;

	QList<TestStruct2> m_lsStruct;
};

#endif
