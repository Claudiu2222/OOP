#pragma once
#include "Car.h"
#define _CRT_SECURE_NO_WARNINGS
class Mazda :
    public Car
{
public:
	Mazda();
	int getFuelConsumption();
	float getAverageSpeed(int weather);
	int getFuelCapacity();
	float getTime();
	void setTime(float dx);
	char* getName();
};

