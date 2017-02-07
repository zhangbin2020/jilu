#include "dll1.h"
#include "dll2.h"

dll1::dll1()
{

}

dll1::~dll1()
{

}

int dll1::add(int x, int y)
{
	dll2 d;
	return d.add_2(x, y);
}
