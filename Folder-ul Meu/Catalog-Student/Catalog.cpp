#include "Catalog.h"
#include <string.h>
Catalog::Catalog()
{
	nr_stud = 0;
}

Catalog& Catalog::operator+=(const Student v)
{
	s[nr_stud] = new Student ;
	s[nr_stud] = v;
	nr_stud++;
	return *this;
}

Student& Catalog::operator[](const char* v)
{
	for (int i = 0; i < nr_stud; i++)
		if (strcmp(v, s[i]->GetName()) == 0)
			return *s[i];
}

int Catalog::GetCount()
{
	return nr_stud;
}

Student& Catalog::operator[](int index)
{
	return *s[index];
}