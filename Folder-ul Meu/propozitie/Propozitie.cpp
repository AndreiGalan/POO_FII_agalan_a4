#define _CRT_SECURE_NO_WARNINGS
#include "Propozitie.h"
#include <string.h>
#include <stdio.h>
Propozitie::Propozitie(const char* s)
{
	prop = new char[strlen(s) + 1];
	memcpy(prop, s, strlen(s) + 1);
	
}

void Propozitie::GetProp()
{
	printf("%s", prop);
}

int Propozitie::operator()(int x)
{
	char* aux=new char[strlen(prop)+1];
	int k = 0;
	memcpy(aux, prop, strlen(prop) + 1);
	char* p = strtok(aux," ");
	while (p)
	{
		if (strlen(p) == x)
			k++;
		p = strtok(NULL, " ");
	}
	return k;
}
