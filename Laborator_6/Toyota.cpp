#include "Toyota.h"

#include<string.h>
Toyota::Toyota()
{
	strcpy(this->name, "Toyota");
	this->fuelCapacity = 56;
	this->fuelConsumption = 6;
	this->weatherSpeed[0] = 50;
	this->weatherSpeed[1] = 80;
	this->weatherSpeed[2] = 60;
	this->time = 0;
}
char* Toyota::getName()
{
	return this->name;
}
int Toyota::getFuelConsumption()
{
	return this->fuelConsumption;
}
float Toyota::getAverageSpeed(int wht)
{
	return this->weatherSpeed[wht];
}
int Toyota::getFuelCapacity()
{
	return this->fuelCapacity;
}
float Toyota::getTime()
{
	return this->time;
}
void Toyota::setTime(float dx)
{
	this->time = dx;
}