#pragma once


class LessThan
{
public:
	LessThan();
	~LessThan();

	bool operator ()(int& x, int& y);
};

