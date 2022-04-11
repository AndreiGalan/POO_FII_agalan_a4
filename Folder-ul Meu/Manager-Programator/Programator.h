#pragma once
class Programator
{
private:
    char* nume;
    int x, y;
    char codul[100];
    int linii;
public:
    Programator(const char*, int, int);
    void Add(const char*);
    char* GetCode() ;
    void GetName();
};

