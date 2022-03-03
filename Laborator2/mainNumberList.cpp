#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include "NumberList.h"

using namespace std;

int main()
{
	NumberList n;
	n.Init();
	n.Add(2);
	n.Add(46);
	n.Add(13);
	n.Add(20);
	n.Add(21);
	n.Add(9);
	n.Add(4);
	n.Add(7);
	n.Add(2);
	n.Add(22);
	n.Add(10);
	n.Add(1);
	n.Sort();
	n.Print();
	system("pause");
}