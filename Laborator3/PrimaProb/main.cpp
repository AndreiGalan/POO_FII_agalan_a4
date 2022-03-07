#include <iostream>
#include <stdio.h>     
#include <stdlib.h> 
#include "Math.h"

using namespace std;

int main()
{
	Math n;
	printf("Prima suma: %d\n", n.Add(4, 6));
	printf("A doua suma: %d\n", n.Add(4, 6,9));
	printf("A treia suma: %d\n", n.Add(4.5, 6.2));
	printf("A patra suma: %d\n", n.Add(4.7, 6.3,8.3));
	printf("Prima inmultire: %d\n", n.Add(4, 6));
	printf("A doua inmultire: %d\n", n.Add(4, 6, 9));
	printf("A treia inmultire: %d\n", n.Add(4.5, 6.2));
	printf("A patra inmultire: %d\n", n.Add(4.7, 6.3, 8.3));
	printf("Suma cu lista: %d\n", n.Add(3, 6, 8,9));
	printf("Suma cu char: %s\n", n.Add("Ana"," sta"));

}