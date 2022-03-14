#include "Sort.h"
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>  
#include<time.h>
#include<stdlib.h>
#include <stdarg.h> 
#include<cstring>
#include<cmath>
Sort::Sort(int numOfElements, int min, int max)
{
	this->nrElem = numOfElements;
	this->vector = (int*)(malloc(this->nrElem * sizeof(int)));
	
	srand(time(NULL));
	for (int i = 0; i < this->nrElem; i++) {
		this->vector[i] = min + rand() % (min - max + 1);
		
	}

}
int Sort::ReversedNumber(int num)
{	int aux = 0;
	while (num)
	{
		aux = aux * 10 + num % 10;
		num /= 10;
	}
	return aux;
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
	int countWords = 0;
	for (int j = 0; j < strlen(string); j++)
	{
		if (string[j] == ',')
			countWords++;
	}
	countWords++;
	this->nrElem = countWords;
	this->vector = (int*)(malloc(this->nrElem * sizeof(int)));
	char* p;
	int i = 0;
	p = strtok(string, ",");
	while (p != nullptr)
	{
		this->vector[i] = 0;
		for (int j = 0; j < strlen(p); j++)
		{
			this->vector[i] += pow(10, strlen(p) - j - 1) * (p[j] - '0');
		}
		i++;
		p = strtok(nullptr, ",");
	
	}
	
}
Sort::Sort() :vector(new int[6]{ 1, 2, 3, 4, 5, 6 }) {
	
	this->nrElem = 6;
	

}
int Sort::partitionQuickSort(int low, int high)
{
	int aux;
	int pivot = this->vector[high];
	int i = (low - 1);
	for (int j = low; j <= high - 1; j++)
	{
		if (this->vector[j] < pivot)
		{
			i++;
			aux = this->vector[i];
			this->vector[i] = this->vector[j];
			this->vector[j] = aux;
		}
	}
	aux = this->vector[i + 1];
	this->vector[i + 1] = this->vector[high];
	this->vector[high] = aux;
	return (i + 1);
}
void Sort::quicksort(int low, int high)
{
	if (low < high)
	{
		int pi = partitionQuickSort(low, high);

		quicksort(low, pi - 1);
		quicksort(pi + 1, high);
	}


}
void Sort::ReverseArray()
{
	int low = 0;
	int high = this->nrElem-1;
	while (low < high - 1)
	{
		int aux = this->vector[low];
		this->vector[low] = this->vector[high];
		this->vector[high] = aux;
		low++;
		high--;
	}

}
void Sort::QuickSort(bool ascendent)
{
	int low = 0;
	int high = this->nrElem -1;
	quicksort(low, high);
	if (ascendent == false)
		ReverseArray();

}
void Sort::InsertSort(bool ascendent)
{
	int i, k, j;
	for (i = 1; i < this->nrElem; i++)
	{
		k = this->vector[i];
		j = i - 1;
		while (j >= 0 && this->vector[j] > k)
		{
			this->vector[j + 1] = this->vector[j];
			j--;
		}
		this->vector[j + 1] = k;
	}
	if (ascendent == false)
	{
		ReverseArray();
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