#pragma once


#include "BuildInterface.h"

#include <QDebug>

//创建第一个
class BuilderOne : public BuildInterface
{
public:
	BuilderOne(  );
	~BuilderOne();

	void zhizao1(){ qDebug() << "builder One zhizao 1"; }
	void zhizao2(){ qDebug() << "builder One zhizao 2"; };
};

