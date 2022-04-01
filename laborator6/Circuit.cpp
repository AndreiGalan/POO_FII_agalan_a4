#include "Circuit.h"
#include "Weather.h"
#include "Car.h"
#include <iostream>
#include <stdlib.h>

Circuit::Circuit()
{
	length = 0.0f;
	weather = -1;
	NrCars = 0;
	cars = new Car * [10];
	timp = new float[10];
}

void Circuit::SetLength(float length)
{
	this->length = length;
}

void Circuit::SetWeather(int weather)
{
	this->weather = weather;
}

void Circuit::Race()
{
	for (int i = 0; i < NrCars; i++)
		timp[i] = cars[i]->RaceCalc(length, weather);
	Sort();
}

void Circuit::AddCar(Car* c)
{
	cars[NrCars++] = c;
}

void Circuit::Sort()
{
	for (int i = 0; i < NrCars - 1; i++)
	{
		for (int j = i + 1; j < NrCars; j++)
			if (timp[i] > timp[j])
			{
				float aux = timp[i];
				timp[i] = timp[j];
				timp[j] = aux;
				Car* auxx;
				auxx = cars[i];
				cars[i] = cars[j];
				cars[j] = auxx;
			}
	}
}

void Circuit::ShowFinalRanks()
{
	printf("Clasamentul final este:\n");
	for (int i = 0; i < NrCars; i++)
	{
		if (timp[i] != -1)
			printf("Masina %s a terminat intr-un timp de: %f\n", cars[i]->Getname(), timp[i]);
	}
}

void Circuit::ShowWhoDidNotFinish()
{
	for (int i = 0; i < NrCars; i++)
	{
		if (timp[i] == -1)
			printf("%s nu a terminat curs\n", cars[i]->Getname());
	}
}