#pragma once
#include "operatii.h"
class Adunare :
    public operatii
{
public:
    Adunare();
    int calc(int x, int y) override;
    char* GetName() override;
};

