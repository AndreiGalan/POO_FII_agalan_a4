#pragma once
#include <string.h>
class operatii
{

protected:
	int rez;
	char* nume;
public:
	operatii()
	{
		rez = 0;
	};
	operatii(const operatii& a)
	{
		rez = a.rez;
		nume = new char[strlen(a.nume) + 1];
		memcpy(nume, a.nume, strlen(a.nume) + 1);
	}
	virtual int calc(int x, int y)=0;
	virtual char* GetName()=0;
};


