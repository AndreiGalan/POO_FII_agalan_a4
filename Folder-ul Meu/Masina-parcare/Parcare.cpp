#include "Parcare.h"
#include <stdio.h>
#include <string.h>
Parcare::Parcare()
{
	nr_masini = 0;
	capp = 0;
}

Parcare& Parcare::Add(Masina* v)
{
	if (IsFull() == false)
	{
		m[nr_masini] = v;
		nr_masini++;
		return *this;
	}
}

void Parcare::Create(int x)
{
	capp = x;
}

int Parcare::GetCount()
{
	return this->nr_masini;
}

bool Parcare::IsFull()
{
	if (capp > nr_masini)
		return false;
	else
		return true;
}

void Parcare::ShowAll()
{
	printf("SHOW-ALL:");
	for (int i = 0; i < nr_masini; i++)
		printf("%s(%s), ", m[i]->GetNume(), m[i]->GetCuloare());
	printf("\n");
}

void Parcare::ShowByColor(const char* col)
{
	printf("SHOW-COLOR (%s):,", col);
	for (int i = 0; i < nr_masini; i++)
	{
		if(strcmp(col,m[i]->GetCuloare())==0)
			printf("%s, ", m[i]->GetNume());
	}
	printf("\n");
}

Parcare& Parcare::RemoveByName(const char* name)
{
	for (int i = 0; i < nr_masini; i++)
	{
		if (strcmp(name, m[i]->GetNume()) == 0)
			for (int j = i + 1; j < nr_masini; j++)
				m[j - 1] = m[j];
		nr_masini--;
	}
	return *this;
}
