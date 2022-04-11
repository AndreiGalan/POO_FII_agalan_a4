#include "Adunare.h"
#include "operatii.h"
#include <stdio.h>
Adunare::Adunare()
{
	nume = new char[8];
	memcpy(nume, "Adunare", 7);
	nume[7] = '\0';
}
int Adunare::calc(int x, int y)
{
	printf("Adunare(%d,%d) = ", x, y);
	return x + y;
}

char* Adunare::GetName()
{
	return nume;
}