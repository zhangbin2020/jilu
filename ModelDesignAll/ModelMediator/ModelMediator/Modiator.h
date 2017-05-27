#pragma once

#include "TongshiInterface.h"

//中介者
//中介 必须要有所有的同事类的实例，
class Modiator
{
public:
	Modiator();
	~Modiator();

	void effectA(int val);
	void effectB(int val);

	TongshiInterface* m_ta;
	TongshiInterface* m_tb;

};

