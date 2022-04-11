#include "FerrariRosu.h"

FerrariRosu::FerrariRosu()
{
	nume = new char[8];
	memcpy(nume, "Ferrari", 7);
	nume[7] = '\0';
	culoare = new char[5];
	memcpy(culoare, "rosu", 4);
	culoare[4] = '\0';
}

char* FerrariRosu::GetNume()
{
	return nume;
}

char* FerrariRosu::GetCuloare()
{
	return culoare;
}