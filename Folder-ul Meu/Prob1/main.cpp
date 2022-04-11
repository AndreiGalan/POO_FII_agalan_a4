#include <iostream>
#include <string>
#include "calculator.h"
#include "operatii.h"

using namespace std;

int main()
{
	calculator c;
	c += new Adunare();
	c += new Scadere();
	c += new Adunare(); // NU se mai adauga inca o operatie de adunare
	c += new Inmultire();
	c += new Impartire();
	std::cout << "Numar operatii suportate: " << (int)c << std::endl;
	c.Compute(20, 10);
	if (c["Scadere"])
		std::cout << "Operatia de scadere este suportata de calculator" <<
		std::endl;
	c -= "Scadere";
	c -= "Impartire";
	c.Compute(15, 6);
	std::cout << "Numar operatii suportate: " << (int)c << std::endl;
}
