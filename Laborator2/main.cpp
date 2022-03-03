#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include "methods.h"
#include "functions.h"
using namespace std;

int main()
{
	methods s1;
	methods s2;
	methods s3;
	functions f;
	s1.SetNume((char*)"Andrei");
	s1.SetMate(9);
	s1.SetEngl(6);
	s1.SetHist(10);
	s2.SetNume((char*)"Ioana");
	s2.SetMate(8);
	s2.SetEngl(9);
	s2.SetHist(10);
	s3.SetNume((char*)"Alex");
	s3.SetMate(9);
	s3.SetEngl(7);
	s3.SetHist(8);
	printf("Nume: %s Mate: %d Engleza: %d Istorie: %d Medie:%f \n",s1.GetNume(),s1.GetMate(),s1.GetEngl(),s1.GetHist(),s1.GetMed() );
	printf("Nume: %s Mate: %d Engleza: %d Istorie: %d Medie:%f \n", s2.GetNume(), s2.GetMate(), s2.GetEngl(), s2.GetHist(), s2.GetMed());
	printf("Nume: %s Mate: %d Engleza: %d Istorie: %d Medie:%f \n", s3.GetNume(), s3.GetMate(), s3.GetEngl(), s3.GetHist(), s3.GetMed());
	printf("%s VS %s  -------->Nume:%d Mate: %d Engleza: %d Istorie: %d Medie: %d\n", s1.GetNume(), s2.GetNume(),
	f.CompNume(s1.GetNume(),s2.GetNume()), f.CompMate(s1.GetMate(), s2.GetMate()), f.CompEngl(s1.GetEngl(), s2.GetEngl()), 
	f.CompHist(s1.GetHist(), s2.GetHist()), f.CompMed(s1.GetMed(), s2.GetMed()));
	printf("%s VS %s  -------->Nume:%d Mate: %d Engleza: %d Istorie: %d Medie: %d\n", s2.GetNume(), s3.GetNume(),
	f.CompNume(s2.GetNume(), s3.GetNume()), f.CompMate(s2.GetMate(), s3.GetMate()), f.CompEngl(s2.GetEngl(), s3.GetEngl()),
	f.CompHist(s2.GetHist(), s3.GetHist()), f.CompMed(s2.GetMed(), s3.GetMed()));
	system("pause");
}