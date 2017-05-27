#pragma once
#include "DirectorInterface.h"


class DirectOne :
	public DirectorInterface
{
public:
	DirectOne();
	~DirectOne();

	void Direct(){
		m_builder->zhizao1();
		m_builder->zhizao2();
	}
};

