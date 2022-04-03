#pragma once
#include "Car.h"
class Circuit
{
	int lengthOfRace;
	Car** Cars;
	int currentNumberOfCars;
	int currentWeather;
public:
	Circuit();
	void SetLength(int length);
	void SetWeather(Weather wthr);
	void AddCar(Car* pointerCar);
	int GetWeather();
	int GetNumberOfCars();
	void Race();
	void ShowWhoDidNotFinish();
	void ShowFinalRanks();
	
};

