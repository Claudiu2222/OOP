#include "Dacia.h"
#define _CRT_SECURE_NO_WARNINGS
#include<string.h>
Dacia::Dacia()
{	
	strcpy(this->name, "Dacia");
	this->fuelCapacity = 45;
	this->fuelConsumption =6;
	this->weatherSpeed[0] = 60;
	this->weatherSpeed[1] = 40;
	this->weatherSpeed[2]= 90;
	this->time = 0;
}
char* Dacia::getName()
{
	return this->name;
}
int Dacia::getFuelConsumption()
{
	return this->fuelConsumption;
}
float Dacia::getAverageSpeed(int wht)
{
	return this->weatherSpeed[wht];
}
int Dacia::getFuelCapacity()
{
	return this->fuelCapacity;
}
float Dacia::getTime()
{
	return this->time;
}
void Dacia::setTime(float dx)
{
	this->time = dx;
}