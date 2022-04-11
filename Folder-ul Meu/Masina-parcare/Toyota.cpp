#include "Toyota.h"

Toyota::Toyota(const char* cul)
{
	nume = new char[7];
	memcpy(nume, "Toyota", 6);
	nume[6	] = '\0';
	culoare = new char[strlen(cul) + 1];
	memcpy(culoare, cul, strlen(cul) + 1);
}

char* Toyota::GetNume()
{
	return nume;
}

char* Toyota::GetCuloare()
{
	return culoare;
}