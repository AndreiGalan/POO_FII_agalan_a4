#pragma once
#include <string.h>
class Masina
{
protected:
	char* name;
public:
	virtual char* GetNume() = 0;
	virtual char* GetCuloare() = 0;
};

