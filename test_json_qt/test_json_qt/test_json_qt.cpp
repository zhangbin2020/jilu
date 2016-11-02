#include "test_json_qt.h"
#include <QJsonDocument>
#include <QJsonObject>
#include <QJsonArray>
#include "person.h"
#include <QMetaProperty>


test_json_qt::test_json_qt(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);

	Person *person = new Person;

	QByteArray data = "{\"gender\" : 0, \"name\" : \"Flavio\", \"phoneNumber\" : 456789, \"testStruct\":{\"num2\":121212} }";

	person->JsonToEntity(data);

	QString str = "";


}

test_json_qt::~test_json_qt()
{

}


void test_json_qt::jsonToEntity(QByteArray data)
{


}