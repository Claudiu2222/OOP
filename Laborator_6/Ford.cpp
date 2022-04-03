#include "Ford.h"
#include<string.h>

Ford::Ford()
{
	strcpy(this->name, "Ford");
	this->fuelCapacity = 50;
	this->fuelConsumption = 4;
	this->weatherSpeed[0] = 60;
	this->weatherSpeed[1] = 79;
	this->weatherSpeed[2] = 65;
	this->time = 0;
}
char* Ford::getName()
{
	return this->name;
}
int Ford::getFuelConsumption()
{
	return this->fuelConsumption;
}
float Ford::getAverageSpeed(int wht)
{
	return this->weatherSpeed[wht];
}
int Ford::getFuelCapacity()
{
	return this->fuelCapacity;
}
float Ford::getTime()
{
	return this->time;
}
void Ford::setTime(float dx)
{
	this->time = dx;
}