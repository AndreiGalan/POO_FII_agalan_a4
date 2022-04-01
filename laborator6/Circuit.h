#pragma once
#include "Car.h"
#include "Dacia.h"
#include "Toyota.h"
#include "Mercedes.h"
#include "Ford.h"
#include "Mazda.h"
class Circuit
{
	int NrCars;
	Car** cars;
	float length;
	int weather;
	float* timp;
public:
	Circuit();
	void SetLength(float length);
	void SetWeather(int weather);
	void Race();
	void AddCar(Car* c);
	void Sort();
	void ShowFinalRanks();
	void ShowWhoDidNotFinish();
};

