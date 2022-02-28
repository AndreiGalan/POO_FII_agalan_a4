#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include "NumberList.h"
using namespace std;

int main()
{
	NumberList n;
	n.Init();
	n.Add(3);
	n.Add(1);
	n.Add(7);
	n.Add(2);
	n.Add(20);
	n.Add(2);
	n.Add(23);
	n.Add(11);
	n.Add(2);
	n.Add(6);
	n.Add(6);
	n.Add(9);
	n.Sort();
	n.Print();
	system("pause");
}