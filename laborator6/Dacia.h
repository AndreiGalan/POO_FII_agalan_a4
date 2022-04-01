#pragma once
#include "Car.h"
class Dacia :public Car
{
public:
	Dacia();
	float RaceCalc(float lenght, int weather) override;
	char* Getname() override;
};

