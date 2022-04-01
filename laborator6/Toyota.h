#pragma once
#include "Car.h"
class Toyota :public Car
{
public:
	Toyota();
	float RaceCalc(float lenght, int weather) override;
	char* Getname() override;
};

