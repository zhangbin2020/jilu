#pragma once


#include "BuildInterface.h"

#include <QDebug>

//������һ��
class BuilderOne : public BuildInterface
{
public:
	BuilderOne(  );
	~BuilderOne();

	void zhizao1(){ qDebug() << "builder One zhizao 1"; }
	void zhizao2(){ qDebug() << "builder One zhizao 2"; };
};

