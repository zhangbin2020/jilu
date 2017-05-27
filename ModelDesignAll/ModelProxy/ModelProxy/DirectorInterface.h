#pragma once

#include "BuildInterface.h"

//ָ���߻���
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

