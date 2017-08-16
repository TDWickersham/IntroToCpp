#include "mathutils.h"

int min(int a, int b)
{
	if (a < b)
	{
		return a;
	}
	else if (b < a)
	{
		return b;
	}
}

int max(int a, int b)
{
	if (a > b)
	{
		return a;
	}
	else if (b > a)
	{
		return b;
	}
}

int clamp(int lower, int upper, int value)
{
	if (value > lower && value < upper)
	{
		return value;
	}
	else if (value <= lower)
	{
		return lower;
	}
	else if (value >= upper)
	{
		return upper;
	}
}

int dist(int x1, int y1, int x2, int y2)
{
	int travel = sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));

	return travel;
}