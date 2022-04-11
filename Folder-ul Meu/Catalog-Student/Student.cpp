#include "Student.h"
#include <string.h>
#include <stdio.h>
#include <iostream>
Student::Student(const char* name)
{
	mate = 0;
	isto = 0;
	romana = 0;
	sport = 0;
	franceza = 0;
	nume = new char [strlen(name) + 1];
	memcpy(nume, name, strlen(name) + 1);
}

char* Student::GetName()
{
	return this->nume;
}

int& Student::operator[](const char* materie)
{
	if (strcmp(materie, "matematica") == 0)
		return mate;
	if (strcmp(materie, "istorie") == 0)
		return isto;
	if (strcmp(materie, "romana") == 0)
		return romana;
	if (strcmp(materie, "franceza") == 0)
		return franceza;
	if (strcmp(materie, "sport") == 0)
		return sport;
}

Student::operator float() const
{
	float media = 0.0;
	int count=0;
	if (mate != 0)
	{
		media += mate;
		count++;
	}
	if (isto != 0)
	{
		media += isto;
		count++;
	}
	if (sport != 0)
	{
		media += sport;
		count++;
	}
	if (romana != 0)
	{
		media += romana;
		count++;
	}
	if (franceza != 0)
	{
		media += franceza;
		count++;
	}
		//printf("%d\n", mate);
	return media / count;
}

void Student::PrintNote()
{
	if (mate != 0)
		std::cout << "Matematica: " << mate << std::endl;
	if (romana != 0)
		std::cout << "Romana: " << romana << std::endl;
	if (franceza != 0)
		std::cout << "Franceza: " << franceza << std::endl;
	if (sport != 0)
		std::cout << "Sport: " << sport << std::endl;
}

