#include "Mercedes.h"
#include "Car.h"
#include "Weather.h"
#include <stdio.h>
#include <string.h>

Mercedes::Mercedes()
{
	fuelcap = 170.0f;
	consum[0] = 7.9f;
	consum[1] = 6.8f;
	consum[2] = 9.1f;
	avgspeed[0] = 72.0f;
	avgspeed[1] = 115.0f;
	avgspeed[2] = 68.0f;
	name = new char[9];
	memcpy(name, "Mercedes", 8);
	name[8] = '\0';
}

float Mercedes::RaceCalc(float lenght, int weather)
{
	if (lenght * consum[weather] / 100 <= fuelcap)
		return (lenght / avgspeed[weather]);
	else
		return -1;
}

char* Mercedes::Getname()
{
	return name;
}