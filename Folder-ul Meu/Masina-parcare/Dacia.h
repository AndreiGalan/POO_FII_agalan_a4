#pragma once
#include "Masina.h"
class Dacia :
    public Masina
{
private:
    char* nume;
    char* culoare;
public:
    Dacia(const char*);
    char* GetNume() override;
    char* GetCuloare() override;
};



