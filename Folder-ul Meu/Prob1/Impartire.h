#pragma once
#include "operatii.h"
class Impartire :
    public operatii
{
public:
    Impartire();
    int calc(int x, int y) override;
    char* GetName() override;
};

