#pragma once
class methods
{
private:
	char nume[20];
	int mate;
	int engl;
	int hist;
	double med;
public:
	void SetNume(char* nume);
	char* GetNume();
	void SetMate(int x);
	int GetMate();
	void SetEngl(int x);
	int GetEngl();
	void SetHist(int x);
	int GetHist();
	double GetMed();
};

