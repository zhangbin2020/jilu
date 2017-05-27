#pragma once

class Modiator;

//同事类基类，
class TongshiInterface
{
public:
	TongshiInterface();
	~TongshiInterface();

	virtual void setNumber(int ,Modiator*){}

	int m_num;
};

