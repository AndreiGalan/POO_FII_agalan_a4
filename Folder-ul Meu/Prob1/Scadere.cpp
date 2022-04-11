#include "Scadere.h"
#include "operatii.h"
#include <stdio.h>
Scadere::Scadere()
{
	nume = new char[8];
	memcpy(nume, "Scadere", 7);
	nume[7] = '\0';
}
int Scadere::calc(int x, int y)
{
	printf("Scadere(%d,%d) = ", x, y);
	return x - y;
}

char* Scadere::GetName()
{
	return nume;
}