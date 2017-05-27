#pragma once

#include "BuildInterface.h"

//指挥者基类
class DirectorInterface
{
public:
	DirectorInterface();
	~DirectorInterface();

	void SetBuilder(BuildInterface*val){ m_builder = val; }
	virtual void Direct(){}

protected:
	BuildInterface* m_builder;
};

