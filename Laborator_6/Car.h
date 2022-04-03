#pragma once
#include"Weather.h"
class Car {
protected:
	int fuelCapacity, fuelConsumption;
	float weatherSpeed[3];
	float time;
	char name[20];
public:
	virtual int getFuelConsumption() = 0;
	virtual float getAverageSpeed(int weather)=0;
	virtual int getFuelCapacity() = 0;
	virtual float getTime() = 0;
	virtual void setTime(float dx) = 0;
	virtual char* getName()=0;

	};