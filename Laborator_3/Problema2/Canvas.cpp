#include "Canvas.h"
#include<stdlib.h>
#include<string.h>
#include<stdio.h>
#include<math.h>

Canvas::Canvas(int width, int height)
{
	this -> rows = height;
	this -> columns = width;
	this -> matrix = (char**)(malloc(this->rows * sizeof(char*)));
	for (int i = 0; i < rows; i++)
		matrix[i] = (char*)(malloc(this->columns * sizeof(char)));
	
	for (int i = 0; i < this->rows; i++)
		for (int j = 0; j < this->columns; j++)
			SetPoint(i, j,' ');
}
void Canvas::SetPoint(int x, int y, char ch)
{
	this->matrix[x][y] = ch;
}
void Canvas::DrawCircle(int x, int y, int ray, char ch)
{
	if (x < 0 || y<0 || ray <0 || x > this->rows || y > this->columns)
	{
		printf("ERROR: DRAWCIRCLE INPUT INCORRECT ");
		return;
	}
	for (int i = 0; i < this->rows; i++)
		for (int j = 0; j < this->columns; j++)
			if (((i - x) * (i - x) + (j - y) * (j - y) >= ray * (ray - 1)) && ((i - x) * (i - x) + (j - y) * (j - y) <= ray * (ray + 1)))
				SetPoint(i, j, ch);
			

}
void Canvas::FillCircle(int x, int y, int ray, char ch)
{
	if (x < 0 || y<0 || ray <0 || x > this->rows || y > this->columns)
	{
		printf("ERROR: FILLCIRCLE INPUT INCORRECT ");
		return;
	}
	for (int i = 0; i < this->rows; i++)
		for (int j = 0; j < this->columns; j++)
			if (((i - x) * (i - x) + (j - y) * (j - y) <= ray * ray))
				SetPoint(i, j, ch);
			

}
void Canvas::DrawLine(int x1, int y1, int x2, int y2, char ch)
{
	if (x1 > this->columns || x1 < 0 || x2 < 0 || x2 > this->columns)
	{
		printf("ERROR: DRAWLINE X INPUT INCORRECT ");
		return;
	}
	else if (y1 > this->rows|| y1 < 0 || y2 < 0 || y2 > this->rows)
	{
		printf("ERROR: DRAWLINE Y INPUT INCORRECT ");
		return;
	}

	if(y1 != y2){
	int diffX, diffY, X, Y, d;
	diffX = y2 - y1;
	diffY = x2 - x1;

	d = 2 * diffY - diffX;

	X = y1;
	Y = x1;
	while (X < y2)
	{
		if (d >= 0)
		{
			SetPoint(X, Y, '*');
			Y++;
			d += 2 * diffY - 2 * diffX;
		}
		else
		{
			SetPoint(X, Y, '*');
			d += 2 * diffY;

		}
		X++;
	}
	}
	else {
		for (int i = x1; i <= x2; i++)
			SetPoint(y1, i, ch);
	}
}
void Canvas::DrawRect(int left, int top, int right, int bottom, char ch)
{
	if (left > this->rows || left < 0 || right < 0 || right > this->rows)
	{
		printf("ERROR: DRAWRECT X INPUT INCORRECT ");
		return;
	}
	else if (top > this->columns || top < 0 || bottom < 0 || bottom > this->columns)
	{
		printf("ERROR: DRAWRECT Y INPUT INCORRECT ");
		return;
	}
	DrawLine(left, top, right, top,ch);
	DrawLine(right, top, right, bottom,ch);
	DrawLine(left, top, left, bottom, ch);
	DrawLine(left, bottom, right,bottom, ch);
}
void Canvas::FillRect(int left, int top, int right, int bottom, char ch)
{
	if (left > this->rows || left < 0 || right < 0 || right > this->rows)
	{
		printf("ERROR: DRAWRECT X INPUT INCORRECT ");
		return;
	}
	else if (top > this->columns || top < 0 || bottom < 0 || bottom > this->columns)
	{
		printf("ERROR: DRAWRECT Y INPUT INCORRECT ");
		return;
	}
	DrawLine(left, top, right, top, ch);
	DrawLine(right, top, right, bottom, ch);
	DrawLine(left, top, left, bottom, ch);
	DrawLine(left, bottom, right, bottom, ch);
	for(int i =top;i<=bottom;i++)
		DrawLine(left, i, right, i, ch);
}
void Canvas::Clear()
{
	for (int i = 0; i < this->rows; i++)
		for (int j = 0; j < this->columns; j++)
			SetPoint(i,j,' ');

}
void Canvas::Print()
{
	for (int i = 0; i < this->rows; i++)
	{
		for (int j = 0; j < this->columns; j++)
			printf("%c ", this->matrix[i][j]);
		printf("\n");
	}

}