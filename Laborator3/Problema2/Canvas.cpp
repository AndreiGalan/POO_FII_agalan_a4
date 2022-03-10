#include "Canvas.h"
#include <stdlib.h>
#include <iostream>
#include <cmath>
using namespace std;
Canvas::Canvas(int weight, int height)
{
	this->w = weight;
	this->h = height;
	this->matrix = (char**)(malloc(height * sizeof(char*)));
		for (int i = 0; i < height; i++)
			matrix[i] = (char*)(malloc(weight * sizeof(char)));

}

void Canvas::DrawCircle(int x, int y, int ray, char ch)
{
	for (int i = 0; i < this->h; i++)
	{
		for (int j = 0; j < this->w; j++)
			if (((i - x) * (i - x) + (j - y) * (j - y) >= ray * (ray-1)) && ((i - x) * (i - x) + (j - y) * (j - y) <= ray * (ray + 1)) )
				this->matrix[i][j] = ch;
			else
				this->matrix[i][j] = ' ';
	}
}
void Canvas::FillCircle(int x, int y, int ray, char ch)
{
	for (int i = 0; i < this->h; i++)
	{
		for (int j = 0; j < this->w; j++)
			if (((i - x) * (i - x) + (j - y) * (j - y) <= ray * (ray-1)))
				this->matrix[i][j] = ch;
			else
				this->matrix[i][j] = ' ';
	}
}

void Canvas::DrawRect(int left, int top, int right, int bottom, char ch)
{
	for (int i = 0; i < this->h; i++)
	{
		for (int j = 0; j < this->w; j++)
			if ((i==left && j>=left && j<=right)||(i>=left && i<=right && j==left)|| (i == right && j >= left && j <= right) || (i>=left && i<=right && j==right))
				this->matrix[i][j] = ch;
			else
				this->matrix[i][j] = ' ';
	}
}
void Canvas::FillRect(int left, int top, int right, int bottom, char ch)
{
	for (int i = 0; i < this->h; i++)
	{
		for (int j = 0; j < this->w; j++)
			if ((i >= left && i<=right && j >= left && j <= right) || (i >= left && i <= right && j >= left && j<=right) || (i>=left && i <= right && j >= left && j <= right) || (i >= left && i <= right && j>=left && j <= right))
				this->matrix[i][j] = ch;
			else
				this->matrix[i][j] = ' ';
	}
}

void Canvas::SetPoint(int x, int y, char ch)
{
	this->matrix[x][y] = ch;
}

void Canvas::DrawLine(int x1, int x2, int y1, int y2, char ch)
{
	int dx = x2 - x1;
	int dy = y2 - y1;
	double error = 0;
	double D =abs(dy/dx);
	int y = y1;
	for (int x = x1; x <= x2; x++)
	{
		this->matrix[x][y] = ch;
		error = error + D;
		if (error >= 0.5)
		{
			y++;
			error -= 1.0;
		}
	}
}
void Canvas::Print()
{
	for (int i = 0; i < this->h; i++)
	{
		for (int j = 0; j < this->w; j++)
			cout << this->matrix[i][j] << " ";
		cout << endl;
	}
}

void Canvas::Clear()
{
	for (int i = 0; i < this->h; i++)
		for (int j = 0; j < this->w; j++)
			this->matrix[i][j] = ' ';
}
