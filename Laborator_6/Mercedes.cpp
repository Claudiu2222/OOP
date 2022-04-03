#include "Mercedes.h"
#include<string.h>

Mercedes::Mercedes()
{
	strcpy(this->name, "Mercedes");
	this->fuelCapacity = 90;
	this->fuelConsumption = 7;
	this->weatherSpeed[0] = 90;
	this->weatherSpeed[1] = 100;
	this->weatherSpeed[2] = 130;
	this->time = 0;
}
char* Mercedes::getName()
{
	return this->name;
}
int Mercedes::getFuelConsumption()
{
	return this->fuelConsumption;
}
float Mercedes::getAverageSpeed(int wht)
{
	return this->weatherSpeed[wht];
}
int Mercedes::getFuelCapacity()
{
	return this->fuelCapacity;
}
float Mercedes::getTime()
{
	return this->time;
}
void Mercedes::setTime(float dx)
{
	this->time = dx;
}