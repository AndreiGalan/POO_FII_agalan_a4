#include <iostream>
#include "calculator.h"
#include "operatii.h"
#include <stdio.h>
#include <string.h>
using namespace std;
calculator::calculator()
{
	x = 0;
	y = 0;
	nr_op = 0;
}

calculator& calculator::operator+=(operatii* o)
{
	int ok = 1;
	for (int i = 0; i < nr_op; i++)
		if (strcmp(o->GetName(),op[i]->GetName())==0)
			ok = 0;
	if (ok)
	{
		op[nr_op] = o;
		++nr_op;
	}
	return *this;
}

bool calculator::operator[](const char* s)
{
	for (int i = 0; i < nr_op; i++)
	{
		if (strcmp(s, op[i]->GetName()) == 0)
			return true;
	}
	return false;
}

void calculator::Compute(int x, int y)
{
	for(int i=0;i<nr_op;i++)
		printf("%d\n", op[i]->calc(x, y));
}

calculator::operator int() const
{
	return nr_op;
}

calculator& calculator::operator-=(const char* s)
{
	int ok = 1;
	for (int i = 0; i < nr_op; i++)
		if (strcmp(s, op[i]->GetName()) == 0)
			for (int j = i + 1; j < nr_op; j++)
				op[j - 1] = op[j];
	nr_op--;
	return *this;
}
