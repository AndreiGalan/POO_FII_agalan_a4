#pragma once
#include "operatii.h"
class Scadere :
    public operatii
{
public:
    Scadere();
    int calc(int x, int y) override;
    char* GetName() override;
};

