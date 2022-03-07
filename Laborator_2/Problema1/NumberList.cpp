#include "NumberList.h"
#include<iostream>

void NumberList::Init() {
	this->count = 0;
}

bool NumberList::Add(int x)
{
	if (this->count >= 10)
		return false;
	else
	{
		this->count++;
		this->numbers[this->count - 1] = x;

	}

}

void NumberList::Sort()
{
	
	for (int i = 0; i < count - 1; i++)
	{
		for (int j = i + 1; j < count; j++)
			if (this->numbers[i] > this->numbers[j])
				std::swap(this->numbers[i], this->numbers[j]);
	}

}
void NumberList::Print()
{
	for (int i = 0; i < count; i++)
		printf("%d ", this->numbers[i]);
	printf("\n");
}