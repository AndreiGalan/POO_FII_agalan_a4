#include "methods.h"
#include <string.h>

void methods::SetNume(char* nume)
{
	strcpy_s(this->nume, 20, nume);
}

char* methods::GetNume()
{
	return this->nume;
}

void methods::SetMate(int x)
{
	this->mate = x;
}

int methods::GetMate()
{
	return this->mate;
}

void methods::SetEngl(int x)
{
	this->engl= x;
}

int methods::GetEngl()
{
	return this->engl;
}

void methods::SetHist(int x)
{
	this->hist = x;
}

int methods::GetHist()
{
	return this->hist;
}

double methods::GetMed()
{
	return (this->mate + this->engl + this->hist) / 3.0;
}