#include "Mazda.h"
#include "Car.h"
#include "Weather.h"
#include <stdio.h>
#include <string.h>

Mazda::Mazda()
{
	fuelcap = 140.0f;
	consum[0] = 7.5f;
	consum[1] = 6.8f;
	consum[2] = 8.2f;
	avgspeed[0] = 70.0f;
	avgspeed[1] = 104.0f;
	avgspeed[2] = 68.0f;
	name = new char[6];
	memcpy(name, "Mazda", 5);
	name[5] = '\0';
}

float Mazda::RaceCalc(float lenght, int weather)
{
	if (lenght * consum[weather] / 100 <= fuelcap)
		return (lenght / avgspeed[weather]);
	else
		return -1;
}

char* Mazda::Getname()
{
	return name;
}