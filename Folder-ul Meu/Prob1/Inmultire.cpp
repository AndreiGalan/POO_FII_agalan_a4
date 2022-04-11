#include "Inmultire.h"
#include "operatii.h"
#include <stdio.h>
Inmultire::Inmultire()
{
	nume = new char[10];
	memcpy(nume, "Inmultire", 9);
	nume[9] = '\0';
}
int Inmultire::calc(int x, int y)
{
	printf("Inmultire(%d,%d) = ", x, y);
	return x * y;
}

char* Inmultire::GetName()
{
	return nume;
}