#pragma once
#include "Masina.h"
#include "Dacia.h"
#include "FerrariRosu.h"
#include "Toyota.h"
class Parcare
{
private:
	Masina* m[100];
	int nr_masini;
	int capp;
public:
	Parcare();
	Parcare& Add(Masina*);
	void Create(int);
	int GetCount();
	bool IsFull();
	void ShowAll();
	void ShowByColor(const char*);
	Parcare& RemoveByName(const char*);
};

