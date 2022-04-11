#pragma once
class Student
{
private:
	char* nume;
	int mate;
	int isto;
	int romana;
	int franceza;
	int sport;
public:
	Student(const char*);
	char* GetName();
	int& operator[](const char*);
	operator float() const;
	void PrintNote();
};

