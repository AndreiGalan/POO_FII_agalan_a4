#pragma once
#include "Programator.h"
class Manager
{
private:
    char* nume;
    char* cod;
    int x, y;
    int nr_an;
    Programator* a[100];
public:
    Manager(const char*,const char*, int, int);
    Manager& Angajeaza(Programator*);
    void lucreaza();
    Manager& Concediaza(Programator*);
};

