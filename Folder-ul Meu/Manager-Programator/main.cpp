#include <iostream>
#include "Programator.h"
#include "Manager.h"

using namespace std;
int operator"" _revers(unsigned long long x)
{
	return x-1;
}
int main()
{
	Programator petru("Petru", 1000, 0);
	Programator maria("Maria", 1100, 1);
	Manager mihai("C++", "Mihai", 1200, 2);
	mihai.Angajeaza(&maria);
	mihai.Angajeaza(&petru);
	petru.Add("int main()\n{\n");
	maria.Add("std::cout<<\"Hello World\";\n");
	mihai.lucreaza();
	
	Programator george("George", 900, 3);
	george.Add(petru.GetCode());
	george.Add(maria.GetCode());
	george.Add("\n}\n");
	mihai.Concediaza(&petru);
	mihai.Angajeaza(&george);
	mihai.lucreaza();

	cout << 123_revers;

}

//va_list l1;
//va_start(l1,n);
//bucla
//va_arg(x,int)
//va_end(l1)