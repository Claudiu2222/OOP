#define _CRT_SECURE_NO_WARNINGS
#include "Math.h"
#include<stdlib.h>
#include<stdarg.h>
#include<cstring>
int Math::Add(int n1 , int n2)
{
	return n1 + n2;
}

int Math::Add(int n1, int n2, int n3)
{
	return n1 + n2 + n3;
}

int Math::Add(double n1, double n2)
{
	return (int)(n1 + n2);
}

int Math::Add(double n1, double n2, double n3)
{
	return (int)(n1 + n2 + n3);
}

int Math::Mul(int n1, int n2)
{
	return n1 * n2;
}

int Math::Mul(int n1, int n2, int n3)
{
	return n1 * n2 * n3;
}

int Math::Mul(double n1, double n2)
{
	return (int)(n1 * n2);
}

int Math::Mul(double n1, double n2, double n3)
{
	return (int)(n1 * n2 * n3);
}

int Math::Add(int count, ...)
{
	int sum = 0, i;
	va_list vl;
	va_start(vl, count);
	for (i = 0; i < count; i++)
	{
		sum += va_arg(vl, int);
	}
	return sum;
	

}

char* Math::Add(const char* n1, const char* n2)
{
	if (n1 == nullptr || n2 == nullptr)
		return nullptr;
	else
	{
		char* string = (char*)malloc((strlen(n1) + strlen(n2)) * sizeof(char));
		strcpy(string, n1);
		strcat(string, n2);
		
		return string;
	}
}