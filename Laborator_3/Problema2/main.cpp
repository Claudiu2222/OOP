#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include "Canvas.h"
int main()
{
	Canvas canvasOne(50,50);
	canvasOne.DrawCircle(5, 5, 3, '*');
	canvasOne.FillCircle(15, 15, 5, '*');
	canvasOne.Clear();
	canvasOne.DrawLine(15, 5, 15,13, '*');
	canvasOne.Clear();
	canvasOne.FillRect(3, 3, 10, 10, '*');
	canvasOne.DrawRect(20, 20, 30, 30, '*');
	canvasOne.Print();
	return 0;
}