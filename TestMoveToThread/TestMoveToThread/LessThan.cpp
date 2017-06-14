#include "LessThan.h"


LessThan::LessThan()
{
}


LessThan::~LessThan()
{
}

bool LessThan::operator()(int& x,int& y)
{
	++x;
	++y;
	return true;
}
