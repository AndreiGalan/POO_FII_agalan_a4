#include <iostream>
#include "Propozitie.h"
using namespace std;
int main()
{
	Propozitie p1("Azi am cumparat 10 morcovi");
	p1.GetProp();
	cout << p1(2);
	return 0;
}