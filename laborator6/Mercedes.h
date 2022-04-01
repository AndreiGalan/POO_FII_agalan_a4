#pragma once
#include "Car.h"
class Mercedes :public Car
{
public:
	Mercedes();
	float RaceCalc(float lenght, int weather) override;
	char* Getname() override;
};

