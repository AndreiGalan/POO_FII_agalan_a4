#include "Ford.h"
#include "Car.h"
#include "Weather.h"
#include <stdio.h>
#include <string.h>

Ford::Ford()
{
	fuelcap = 125.0f;
	consum[0] = 7.2f;
	consum[1] = 6.6f;
	consum[2] = 7.9f;
	avgspeed[0] = 65.0f;
	avgspeed[1] = 97.0f;
	avgspeed[2] = 63.0f;
	name = new char[5];
	memcpy(name, "Ford", 4);
	name[4] = '\0';
}

float Ford::RaceCalc(float lenght, int weather)
{
	if (lenght * consum[weather] / 100 <= fuelcap)
		return (lenght / avgspeed[weather]);
	else
		return -1;
}

char* Ford::Getname()
{
	return name;
}