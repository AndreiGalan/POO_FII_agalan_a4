#include "Sortt.h"
#include <stdlib.h>
#include <stdio.h> 

int main() {
	bool ascendent=false;
	Sortt c1(10, 10, 100);
	c1.InsertSort();
	c1.Print();
	int v[5] = { 12, 21, 30, 4, 5 };
	Sortt c2(v, 5);
	c2.QuickSort();
	c2.Print();
	Sortt c3(6, 1, 2, 3, 4, 5, 6);
	int index = 0;
	printf("Elementul de la indexul:%d este %d\n", index, c3.GetElementFromIndex(index));
	char c[] = "12,34,56,78,17,19,98,67";
	Sortt c4(c);
	c4.BubbleSort();
	c4.Print();
	Sortt c5(6,1);
	printf("Numarul de elemente din vectorul dat este: %d\n", c5.GetElementsCount());
	system("pause");
	return 0;
}