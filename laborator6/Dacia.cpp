#include "Dacia.h"
#include "Car.h"
#include "Weather.h"
#include <stdio.h>
#include <string.h>

Dacia::Dacia()
{
	fuelcap = 120.0f;
	consum[0] = 7.5f;
	consum[1] = 6.4f;
	consum[2] = 8.7f;
	avgspeed[0] = 70.0f;
	avgspeed[1] = 92.0f;
	avgspeed[2] = 65.0f;
	name = new char[6];
	memcpy(name, "Dacia", 5);
	name[5] = '\0';
}

float Dacia::RaceCalc(float lenght, int weather)
{
	if (lenght * consum[weather] / 100 <= fuelcap)
		return (lenght / avgspeed[weather]);
	else
		return -1;
}

char* Dacia::Getname()
{
	return name;
}