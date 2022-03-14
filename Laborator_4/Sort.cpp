#include "Sort.h"
#include<stdio.h>  
#include<time.h>
#include<stdlib.h>
#include <stdarg.h> 
#include<cstring>
Sort::Sort(int numOfElements, int min, int max)
{
	this->nrElem = numOfElements;
	this->vector = (int*)(malloc(this->nrElem * sizeof(int)));
	
	srand(time(NULL));
	for (int i = 0; i < this->nrElem; i++) {
		this->vector[i] = min + rand() % (min - max + 1);
		
	}

}
Sort::Sort(int* vectorr, int numOfElements)
{
	this->nrElem = numOfElements;
	this->vector = (int*)(malloc(this->nrElem * sizeof(int)));
	for (int i = 0; i < nrElem; i++)
	{
		this->vector[i] = vectorr[i];
	}
}
Sort::Sort(int count, ...)
{
	this->nrElem = count;
	this->vector = (int*)(malloc(this->nrElem * sizeof(int)));
	va_list v1;
	va_start(v1, count);
	for (int i = 0; i < this->nrElem; i++)
	{
		this->vector[i] = va_arg(v1, int);
	}
	va_end(v1);
}
Sort::Sort(char* string)
{
	char* p;
	p = strtok(string, ',');
	while (p != nullptr)
	{

		p = strtok(nullptr, ',');
	}
}
void Sort::BubbleSort(bool ascendent)
{
	int i, swapper;
	int sorted = false;
	do {
		sorted = true;
		for (i = 0; i < this->nrElem - 1; i++)
		{
			if (ascendent == true)
			{
				if (this->vector[i] > this->vector[i + 1])
				{
					swapper = this->vector[i];
					this->vector[i] = this->vector[i + 1];
					this->vector[i + 1] = swapper;
					sorted = false;
				}
			}
			else
			{
				if (this->vector[i] < this->vector[i + 1])
				{
					swapper = this->vector[i];
					this->vector[i] = this->vector[i + 1];
					this->vector[i + 1] = swapper;
					sorted = false;
				}
			}
		}



	} while (!sorted);
}
void Sort::Print()
{
	int i;
	for (i = 0; i < nrElem; i++)
		printf("%d ", this->vector[i]);
	printf("\n");
}
int Sort::GetElementsCount()
{
	return this->nrElem;
}
int Sort::GetElementFromIndex(int index)
{
	if (index > this->nrElem)
	{
		printf("error");
		return -1;
	}
	return this->vector[index];
}