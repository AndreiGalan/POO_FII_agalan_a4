#pragma once
#include "operatii.h"
class Inmultire :
    public operatii
{
public:
    Inmultire();
    int calc(int x, int y) override;
    char* GetName() override;
};

