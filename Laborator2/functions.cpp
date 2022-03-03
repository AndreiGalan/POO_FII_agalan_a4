#include "functions.h"
#include <string.h>

int functions::CompNume(char* nume1, char* nume2)
{
	return strcmp(nume1, nume2);
}

int functions::CompMate(int x, int y)
{
	if (x == y)
		return 0;
	if (x > y)
		return 1;
	if (x < y)
		return -1;
}

int functions::CompEngl(int x, int y)
{
	if (x == y)
		return 0;
	if (x > y)
		return 1;
	if (x < y)
		return -1;
}

int functions::CompHist(int x, int y)
{
	if (x == y)
		return 0;
	if (x > y)
		return 1;
	if (x < y)
		return -1;
}

int functions::CompMed(double x, double y)
{
	if (x == y)
		return 0;
	if (x > y)
		return 1;
	if (x < y)
		return -1;
}