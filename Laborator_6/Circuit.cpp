#include "Circuit.h"
#include<stdio.h>
#include<stdlib.h>
Circuit::Circuit()
{
	this->Cars = (Car**)malloc(30 * sizeof(Car*));
	this->currentNumberOfCars = 0;
	this->lengthOfRace = 0;
}
void Circuit::SetLength(int length)
{
	this->lengthOfRace = length;
}
void Circuit::SetWeather(Weather wthr)
{
	this->currentWeather = wthr;
}
void Circuit::AddCar(Car* pointerCar)
{
	this->Cars[this->currentNumberOfCars++] = pointerCar;

}
int Circuit::GetWeather()
{
	return this->currentWeather;
}
int Circuit::GetNumberOfCars()
{
	return this->currentNumberOfCars;
}
void Circuit::Race()
{
	for (int i = 0; i < this->currentNumberOfCars; i++)
	{
		if (this->Cars[i]->getFuelConsumption() * this->lengthOfRace / 10 > this->Cars[i]->getFuelCapacity())
			this->Cars[i]->setTime(-1);
		else
		this->Cars[i]->setTime(this->lengthOfRace / this->Cars[i]->getAverageSpeed(this->GetWeather()));
		
	}
}

void swap(int &x, int& y) {
	int aux = x;
	x = y;
	y = aux;
}
void Circuit::ShowFinalRanks()
{
	int save[30];
	int saveTwo[30];
	for (int i = 0; i < this->currentNumberOfCars; i++)
	{
		save[i] = this->Cars[i]->getTime();
		saveTwo[i] = i;
	}
	for (int i = 0; i < this->currentNumberOfCars-1; i++)
		for (int j = i + 1; j < this->currentNumberOfCars; j++)
		{
			if (save[i] > save[j])
			{
				swap(save[i], save[j]);
				swap(saveTwo[i], saveTwo[j]);
			}
	}int k = 1;
	for (int i = 0; i < this->currentNumberOfCars; i++)

	{
		
		if (save[i] > 0)
		{
			printf("Masina %s a terminat pe locul %d in timpul: %f\n", this->Cars[saveTwo[i]]->getName(), k, this->lengthOfRace / this->Cars[saveTwo[i]]->getAverageSpeed(this->GetWeather()));
			k++;
		}
	}
}
void Circuit::ShowWhoDidNotFinish()
{
	for (int i = 0; i < this->currentNumberOfCars; i++)
	{
		if (this->Cars[i]->getTime() == -1)
			printf("Masina %s nu a terminat cursa \n", this->Cars[i]->getName());
	}
}