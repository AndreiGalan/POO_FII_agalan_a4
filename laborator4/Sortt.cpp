#define _CRT_SECURE_NO_WARNINGS
#include "Sortt.h"
#include <stdio.h> 
#include <time.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>


Sortt::Sortt(int numar_elemente, int min_element, int max_element) {
	this->vector = (int*)(malloc(numar_elemente * sizeof(int)));
	this->nr_elem = numar_elemente;
	time_t t;
	srand((unsigned)time(&t));
	for (int i = 0; i < numar_elemente; i++) {
		this->vector[i]= (min_element + rand() % (min_element - max_element + 1));
	}

}


Sortt::Sortt(int* v, int numar_elemente) {
	this->vector = (int*)(malloc(numar_elemente * sizeof(int)));
	this->nr_elem = numar_elemente;
	for (int i = 0; i < numar_elemente; i++) {
		this->vector[i] = v[i];
	}
}

Sortt::Sortt(int count, ...) {
	this->vector = (int*)(malloc(count * sizeof(int)));
	this->nr_elem = count;
	va_list vl;
	va_start(vl, count);
	for (int i = 0; i < count; i++)
	{
		this->vector[i]= va_arg(vl, int);
	}
	va_end(vl);
}

Sortt::Sortt(char* c) {
	char s2[256];
	int vect[100];
	int k = 0;
	char* p = strtok(c, ",");
	while (p)
	{
		int x = 0;
		strcpy(s2, p);
		for (int i = 0; i < strlen(s2); i++)
			x = x * 10 + (s2[i] - '0');
		vect[k++] = x;
		p = strtok(NULL, ",");

	}
	this->nr_elem = k;
	this->vector = (int*)(malloc(k * sizeof(int)));
	for (int i = 0; i < k; i++)
	{
		this->vector[i] = vect[i];
	}
}

Sortt::Sortt(int count,bool ok) : vector(new int[count]{ 1, 2, 3, 4, 5, 6 }) {
	this->nr_elem = count;
}
void Sortt::Print()
{
	for (int i = 0; i < this->nr_elem; i++)
		printf("Elemenul %d: %d\n", i + 1, this->vector[i]);
}
void Sortt::InsertSort(bool ascendent)
{
	int i, key, j;
	printf("Sortare cu InsertSort\n");
	if(ascendent==true)
	for (i = 1; i < this->nr_elem; i++)
	{
		key = this->vector[i];
		j = i - 1;
		while (j >= 0 && this->vector[j] > key)
		{
			this->vector[j + 1] = this->vector[j];
			j = j - 1;
		}
		this->vector[j + 1] = key;
	}
	else
	{
		for (int i = 1; i < this->nr_elem; i++)
		{
			int key = this->vector[i];
			int j = i - 1;
			while (key > this->vector[j] && j >= 0)
			{
				this->vector[j + 1] = this->vector[j];
				j--;
			}
			this->vector[j + 1] = key;
		}
	}
}

void Sortt::swap(int* a, int* b)
{
	int t = *a;
	*a = *b;
	*b = t;
}

int Sortt::partition(int *a,int low, int high,bool ascendent)
{
	int pivot = a[high]; 
	int i = (low - 1); 

	for (int j = low; j <= high - 1; j++)
	{
		if(ascendent==true)
		{
			if (a[j] < pivot)
			{
				i++; 
				swap(&a[i], &a[j]);
			}
		}
		else
		{
			if (a[j] > pivot)
			{
				i++;
				swap(&a[i], &a[j]);
			}
		}

	}
	swap(&a[i + 1], &a[high]);
	return (i + 1);
}
void Sortt::quickSortt(int *a, int low, int high,bool ascendent)
{
	if (low < high)
	{
		int pi = partition(a, low, high, ascendent);
		quickSortt(a, low, pi - 1, ascendent);
		quickSortt(a, pi + 1, high, ascendent);
	}
}
void Sortt::QuickSort(bool ascendent)
{
	printf("Sortare cu QuickSort\n");
	quickSortt(this->vector, 0, this->nr_elem-1, ascendent);

}

void Sortt::BubbleSort(bool ascendent)
{
	printf("Sortare cu BubbleSort\n");
	int i, j;
	for (i = 0; i < this->nr_elem-1; i++)
		for (j = 0; j < this->nr_elem  - i - 1; j++)
			if (ascendent == true)
			{
				if (this->vector[j] > this->vector[j + 1])
					swap(&this->vector[j], &this->vector[j + 1]);
			}
			else
			{
				if (this->vector[j] < this->vector[j + 1])
					swap(&this->vector[j], &this->vector[j + 1]);
			}

}

int Sortt::GetElementsCount()
{
	return this->nr_elem;
}

int Sortt::GetElementFromIndex(int index)
{
	return this->vector[index];
}