#pragma once
#include "Car.h"
class Mazda :public Car
{
public:
	Mazda();
	float RaceCalc(float lenght, int weather) override;
	char* Getname() override;
};

