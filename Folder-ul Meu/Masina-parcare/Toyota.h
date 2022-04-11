#pragma once
#include "Masina.h"
class Toyota :
    public Masina
{
private:
    char* nume;
    char* culoare;
public:
    Toyota(const char*);
    char* GetNume() override;
    char* GetCuloare() override;
};

