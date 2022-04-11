#include "Impartire.h"
#include "operatii.h"
#include <stdio.h>
Impartire::Impartire()
{
	nume = new char[10];
	memcpy(nume, "Impartire", 9);
	nume[9] = '\0';
}
int Impartire::calc(int x, int y)
{
	printf("Impartire(%d,%d) = ", x, y);
	return x / y;
}

char* Impartire::GetName()
{
	return nume;
}