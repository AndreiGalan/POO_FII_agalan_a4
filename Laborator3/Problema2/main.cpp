#include <iostream>
#include <stdlib.h>
#include "Canvas.h"

using namespace std;
int main()
{
	Canvas ex(50, 40);
	ex.Clear();
	ex.DrawCircle(10,30,10, '*');
	ex.Print();
	ex.Clear();
	ex.FillCircle(10, 30, 10, '*');
	ex.Print();
	ex.Clear();
	ex.DrawRect(5, 5, 30,30, '*');
	ex.Print();
	ex.Clear();
	ex.FillRect(5, 5, 30, 30, '*');
	ex.Print();
	ex.Clear();
	ex.SetPoint(25, 30, '+');
	ex.Print();
	ex.Clear();
	ex.DrawLine(10,30, 10, 40, '*');
	ex.Print();
}