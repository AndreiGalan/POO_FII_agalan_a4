#include "Toyota.h"
#include "Car.h"
#include "Weather.h"
#include <stdio.h>
#include <string.h>

Toyota::Toyota()
{
	fuelcap = 150.0f;
	consum[0] = 8.2f;
	consum[1] = 7.2f;
	consum[2] = 9.8f;
	avgspeed[0] = 74.0f;
	avgspeed[1] = 102.0f;
	avgspeed[2] = 70.0f;
	name = new char[7];
	memcpy(name, "Toyota", 6);
	name[6] = '\0';
}

float Toyota::RaceCalc(float lenght, int weather)
{
	if (lenght * consum[weather] / 100 <= fuelcap)
		return (lenght / avgspeed[weather]);
	else
		return -1;
}

char* Toyota::Getname()
{
	return name;
}