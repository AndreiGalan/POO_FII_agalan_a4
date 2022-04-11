#include "Programator.h"
#define _CRT_SECURE_NO_WARNINGS
#include <string.h>
#include <stdio.h>
Programator::Programator(const char* s, int a, int b)
{
	linii = 0;
	nume = new char[strlen(s) + 1];
	memcpy(nume, s, strlen(s) + 1);
	strcpy(codul, "");
	x = a;
	y = b;
}

void Programator::Add(const char* s)
{
	strcat(codul, s);
}

char* Programator::GetCode()
{
	return codul;
}

void Programator::GetName()
{
		printf("[%s]", nume);
}

