#define _CRT_SECURE_NO_WARNINGS
#include "Number.h"
#include<cstring>
#include<stdio.h>
#include<stdlib.h>
#include<cmath>
Number::Number(const char* value, int base)
{
	this->number = (char*)malloc((strlen(value) + 1)*sizeof(char));
	this->base = base;
	strcpy(this->number, value);
}
void Number::SwitchBase(int newBase)
{
	// NR - > BASE 10 - > BASE newBase
	int newNum = 0;
	int power = 1;
	if (newBase != 10)
	{
		for (int i = strlen(this->number) - 1; i >= 0; i--)
		{
			if (this->number[i] <= 'F' && this->number[i] >= 'A')
			{ // A=65 -> scad 55
				newNum = newNum + power * (this->number[i] - 55);
				power *= this->base;
			}
			else if (this->number[i] >= 48 && this->number[i] <= 57)
			{
				newNum = newNum + power * (this->number[i] - 48);
				power *= this->base;
			}
		}
	}
	printf("%d\n", newNum);
	//BASE 10 - > Base NEW BASE
	int i=0;
	char temp[32] = {};
	int remainder;
	while (newNum > 0)
	{
		remainder = newNum % newBase;
		switch (remainder)
		{
		case 0:
			strcat(temp, "0");
			break;
		case 1:
			strcat(temp, "1");
			break;
		case 2:
			strcat(temp, "2");
			break;
		case 3:
			strcat(temp, "3");
			break;
		case 4:
			strcat(temp, "4");
			break;
		case 5:
			strcat(temp,"5");
			break;
		case 6:
			strcat(temp, "6");
			break;
		case 7:
			strcat(temp, "7");
			break;
		case 8:
			strcat(temp, "8");
			break;
		case 9:
			strcat(temp, "9");
			break;
		case 10:
			strcat(temp, "A");
			break;
		case 11:
			strcat(temp, "B");
			break;
		case 12:
			strcat(temp, "C");
			break;
		case 13:
			strcat(temp, "D");
			break;
		case 14:
			strcat(temp, "E");
			break;
		case 15:
			strcat(temp, "F");
			break;
		default:
			break;
		}

		newNum /= newBase;
		
	}
	_strrev(temp);
	this->number = (char*)realloc(this->number, strlen(temp) + 1);
	this->base = newBase;
	strcpy(this->number, temp);
	
	
}
Number::~Number()
{
	this->base = 0;
	free(this->number);
}
int Number::GetDigitsCount()
{
	return strlen(this->number);
	
}
int Number::GetBase()
{
	return this->base;
}