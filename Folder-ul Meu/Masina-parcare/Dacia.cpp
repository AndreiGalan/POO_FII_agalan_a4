#include "Dacia.h"

Dacia::Dacia(const char* cul)
{
	nume = new char[6];
	memcpy(nume, "Dacia", 5);
	nume[5] = '\0';
	culoare = new char[strlen(cul)+1];
	memcpy(culoare, cul, strlen(cul) + 1);
}

char* Dacia::GetNume()
{
	return nume;
}

char* Dacia::GetCuloare()
{
	return culoare;
}
