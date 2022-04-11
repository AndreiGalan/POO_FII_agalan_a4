#pragma once
class Propozitie
{
private:
	char* prop;
public:
	Propozitie(const char*);
	void GetProp();
	int operator()(int);
};

