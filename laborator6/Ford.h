#pragma once
#include "Car.h"
class Ford :public Car
{
public:
	Ford();
	float RaceCalc(float lenght, int weather) override;
	char* Getname() override;
};

