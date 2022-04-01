#pragma once
#include<string.h>
#include <stdio.h>
class Car
{
protected:
	float fuelcap, consum[3], avgspeed[3];
	char* name;
public:
	Car()
	{
		fuelcap = 0.0f;
		consum[0] = 0.0f;
		consum[1] = 0.0f;
		consum[2] = 0.0f;
		avgspeed[0] = 0.0f;
		avgspeed[1] = 0.0f;
		avgspeed[2] = 0.0f;
	};
	Car(const Car& a)
	{
		fuelcap = a.fuelcap;
		consum[0] = a.consum[0];
		consum[1] = a.consum[1];
		consum[2] = a.consum[2];
		avgspeed[0] = avgspeed[0];
		avgspeed[1] = avgspeed[1];
		avgspeed[2] = avgspeed[2];
		name = new char[strlen(a.name) + 1];
		memcpy(name, a.name, strlen(a.name) + 1);
	}
	virtual float RaceCalc(float lenght, int weather) = 0;
	virtual char* Getname() = 0;
};

