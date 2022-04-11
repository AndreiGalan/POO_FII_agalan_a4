#include "Manager.h"
#include <string.h>
#include <stdio.h>
#include "Programator.h"
Manager::Manager(const char* c,const char* s, int a, int b)
{
	nr_an = 0;
	cod = new char[strlen(c) + 1];
	memcpy(cod, c, strlen(c) + 1);
	nume = new char[strlen(s) + 1];
	memcpy(nume, s, strlen(s) + 1);
	x = a;
	y = b;
}
Manager& Manager::Angajeaza(Programator* v)
{
	a[nr_an] = v;
	nr_an++;
	return *this;
}

void Manager::lucreaza()
{
	for (int i = 0; i < nr_an; i++)
	{
		a[i]->GetName();
		printf("\n");
		printf("%s",a[i]->GetCode());
	}
}
// char** m=(char**)(malloc(l*sizeof(char*))
Manager& Manager::Concediaza(Programator* s)
{
	for (int i = 0; i < nr_an; i++)
	{
		if (s == a[i])
		{
			for (int j = i + 1; j < nr_an; j++)
				a[j - 1] = a[j];
			nr_an--;
		}
	}
	return *this;
}
