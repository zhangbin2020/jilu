#pragma once

class Modiator;

//ͬ������࣬
class TongshiInterface
{
public:
	TongshiInterface();
	~TongshiInterface();

	virtual void setNumber(int ,Modiator*){}

	int m_num;
};

