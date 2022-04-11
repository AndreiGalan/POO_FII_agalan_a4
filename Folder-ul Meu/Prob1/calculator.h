#include "operatii.h"
#include "Adunare.h"
#include "Impartire.h"
#include "Inmultire.h"
#include "Scadere.h"
class calculator
{
	int nr_op = 0;
	operatii* op[100];
	int x, y;
public:
	calculator();
	calculator& operator +=(operatii* o);
	void Compute(int,int);
	calculator& operator -=(const char* s);
	bool operator[](const char* s);
	operator int() const;
};
