#pragma once

#include "TongshiInterface.h"

//�н���
//�н� ����Ҫ�����е�ͬ�����ʵ����
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

