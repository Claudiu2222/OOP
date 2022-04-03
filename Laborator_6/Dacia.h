#pragma once
#include "Car.h"
class Dacia :
	public Car
{
public:
	Dacia();
	int getFuelConsumption();
	float getAverageSpeed(int weather);
	int getFuelCapacity();
	float getTime();
	void setTime(float dx);
	char* getName();
};
