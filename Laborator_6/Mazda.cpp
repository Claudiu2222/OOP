#include "Mazda.h"
#include<string.h>

Mazda::Mazda()
{
	strcpy(this->name, "Mazda");
	this->fuelCapacity = 30;
	this->fuelConsumption = 7;
	this->weatherSpeed[0] = 60;
	this->weatherSpeed[1] = 79;
	this->weatherSpeed[2] = 65;
	this->time = 0;
}
char* Mazda::getName()
{
	return this->name;
}
int Mazda::getFuelConsumption()
{
	return this->fuelConsumption;
}
float Mazda::getAverageSpeed(int wht)
{
	return this->weatherSpeed[wht];
}
int Mazda::getFuelCapacity()
{
	return this->fuelCapacity;
}
float Mazda::getTime()
{
	return this->time;
}
void Mazda::setTime(float dx)
{
	this->time = dx;
}