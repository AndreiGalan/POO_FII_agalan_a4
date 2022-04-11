#pragma once
#include "Student.h"
class Catalog
{
private:
	Student* s[100];
	int nr_stud;
public:
	Catalog();
	Catalog& operator+=(const Student s);
	Student& operator[](const char*);
	int GetCount();
	Student& operator[](int index);
	operator float() const;
};

