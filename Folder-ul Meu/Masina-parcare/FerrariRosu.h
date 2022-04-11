#pragma once
#include "Masina.h"
class FerrariRosu :
    public Masina
{
private:
    char* nume;
    char* culoare;
public:
    FerrariRosu();
    char* GetNume() override;
    char* GetCuloare() override;
};



