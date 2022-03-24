#include "Number.h"
#include <iostream>
#include <stdio.h>     
#include <stdlib.h> 
#include <stdarg.h>
#include <string.h>

using namespace std;
Number::Number(const char* value, int base)
{
	this->b = base;
	this->vector = (char*)(malloc(strlen(value)* sizeof(char*)));
	this->vector[strlen(value)] = '\0';
	memcpy(this->vector, value, strlen(value));
	this->negative = false;
}

Number::~Number() 
{ 
	this->vector = nullptr;
}

void Number::Print()
{
	printf("%s\n",this->vector);
	//printf("%d\n", this->b);
	//cout << this->negative << endl;
}

void Number::SwitchBase(int base)
{
	int vec[100];
	char vec2[100];
	for (int i = 0; i < strlen(this->vector); i++)
	{
		if (this->vector[i] == 'A')
			vec[i] = 10;
		else
			if (this->vector[i] == 'B')
				vec[i] = 11;
			else
				if (this->vector[i] == 'C')
					vec[i] = 12;
				else
					if (this->vector[i] == 'D')
						vec[i] = 13;
					else
						if (this->vector[i] == 'E')
							vec[i] = 14;
						else
							if (this->vector[i] == 'F')
								vec[i] = 15;
							else
								vec[i] = this->vector[i] - '0';
	}
	int nr = 0;
	int k = 1;
	for (int i = strlen(this->vector) - 1; i >= 0; i--)
	{
		nr = nr + vec[i] * k;
		k *= this->b;
	}
	
	int i = 0;
	//printf("%d\n\n", nr);
	while (nr)
	{
		int x = nr % base;
		if (x == 10)
			vec2[i++] = 'A';
		else
			if (x == 11)
				vec2[i++] = 'B';
			else
				if (x == 12)
					vec2[i++] = 'C';
				else
					if (x == 13)
						vec2[i++] = 'D';
					else
						if (x == 14)
							vec2[i++] = 'E';
						else
							if (x == 15)
								vec2[i++] = 'F';
							else
								vec2[i++] = x + '0';
		nr /= base;
	}
	vec2[i] = '\0';
	_strrev(vec2);
	
	memcpy(this->vector, vec2, strlen(vec2));
	this->vector[i] = '\0';
	this->b = base;
	
	//printf("%s\n", this->vector);
}

int Number::GetDigitsCount()
{
	return strlen(this->vector);
}

int Number::GetBase()
{
	return this->b;
}

Number::Number(const Number& ex) {
	//printf("Copy constructor\n");
	this->vector = ex.vector;
	this->b = ex.b;
	this->negative = ex.negative;
	
}
Number::Number(const Number&& ex) {
	//printf("Move constructor\n");
	this->vector = ex.vector;
	this->b = ex.b;
	this->negative = ex.negative;
}

Number::Number(int&& ex) {
	char vec[100]={};
	int i = 0;
	while (ex)
	{
		vec[i++] = (ex % 10) + '0';
		ex /= 10;
	}
	_strrev(vec);
	this->vector = (char*)(malloc(strlen(vec) * sizeof(char*)));
	this->vector[strlen(vec)] = '\0';
	memcpy(this->vector, vec, strlen(vec));
	this->b = 10;
}

Number& Number::operator=(int&& ex) {
	char v[100] = {};
	int i = 0;
	while (ex)
	{
		v[i++] = (ex % 10)+'0';
		ex /= 10;
	}
	_strrev(v);
	memcpy(this->vector, v, strlen(v));
	this->vector[i] = '\0';
	int aux = this->b;
	this->b = 10;
	this->SwitchBase(aux);
	this->b = aux;
	return *this;
}

Number& Number::operator=(Number&& ex) {

	this->vector = ex.vector;
	this->b = ex.b;
	this->negative = ex.negative;
	return *this;
}


Number& Number::operator=(Number& ex) {
	this->vector = ex.vector;
	this->b = ex.b;
	this->negative = ex.negative;
	return *this;
}


Number::Number(const char*&& ex) {
	this->vector = (char*)(malloc(strlen(ex) * sizeof(char*)));
	this->vector[strlen(ex)] = '\0';
	memcpy(this->vector, ex, strlen(ex));
	this->b = 10;
}

Number operator+(Number ex, Number ex2) {
	int maxx, base1, base2;
	base1 = ex.b;
	base2 = ex2.b;
	if (ex.b > ex2.b)
		maxx = ex.b;
	else
		maxx = ex2.b;
	ex.SwitchBase(10);
	ex2.SwitchBase(10);
	int nr1 = 0, nr2 = 0;
	for (int i = 0; i < strlen(ex.vector); i++)
		nr1 = nr1 * 10 + (ex.vector[i] - '0');
	for (int i = 0; i < strlen(ex2.vector); i++)
		nr2 = nr2 * 10 + (ex2.vector[i] - '0');
	if (ex.negative == true)
		nr1 = -nr1;
	if (ex2.negative == true)
		nr2 = -nr2;
	nr1 += nr2;
	int neg = 0;
	if (nr1 < 0)
	{
		nr1 = -nr1;
		neg = 1;
	}
	char sir[100];
	int k = 0;
	while (nr1)
	{
		sir[k++] = (nr1 % 10) + '0';
		nr1 /= 10;
	}
	sir[k] = '\0';
	_strrev(sir);

	Number x(sir, 10);
	if (neg == 1)
		x.negative = true;
	ex.SwitchBase(base1);
	ex2.SwitchBase(base2);
	x.SwitchBase(maxx);
	return x;
}

Number operator-(Number ex, Number ex2) {
	int maxx,base1,base2;
	base1 = ex.b;
	base2 = ex2.b;
	if (ex.b > ex2.b)
		maxx = ex.b;
	else
		maxx = ex2.b;
	ex.SwitchBase(10);
	ex2.SwitchBase(10);
	int nr1 = 0, nr2 = 0;
	for (int i = 0; i < strlen(ex.vector); i++)
		nr1 = nr1 * 10 + (ex.vector[i] - '0');
	for (int i = 0; i < strlen(ex2.vector); i++)
		nr2 = nr2 * 10 + (ex2.vector[i] - '0');
	if (ex.negative == true)
		nr1 = -nr1;
	if (ex2.negative == true)
		nr2 = -nr2;
	nr1 -= nr2;
	int neg = 0;
	if (nr1 < 0)
	{
		nr1 = -nr1;
		neg = 1;
	}
	char sir[100];
	int k = 0;
	while (nr1)
	{
		sir[k++] = (nr1 % 10) + '0';
		nr1 /= 10;
	}
	sir[k] = '\0';
	_strrev(sir);
	
	Number x(sir, 10);
	if (neg == 1)
		x.negative = true;
	ex.SwitchBase(base1);
	ex2.SwitchBase(base2);
	x.SwitchBase(maxx);
	return x;
}

Number Number::operator+=(Number ex)
{
	Number x("0", 10);
	x.vector = this->vector;
	x.b = this->b;
	x.negative = this->negative;
	x = x + ex;
	this->vector = x.vector;
	this->b = x.b;
	this->negative = x.negative;
	return *this;
}

Number Number::operator-=(Number ex)
{
	Number x("0", 10);
	x.vector = this->vector;
	x.b = this->b;
	x.negative = this->negative;
	x = x - ex;
	this->vector = x.vector;
	this->b = x.b;
	this->negative = x.negative;
	return *this;
}

bool Number::operator>(Number ex) {
	if (this->vector > ex.vector)
		return true;
	else
		return false;
}

bool Number::operator<(Number ex) {
	if (this->vector < ex.vector)
		return true;
	else
		return false;
}

bool Number::operator>=(Number ex) {
	if (this->vector >= ex.vector)
		return true;
	else
		return false;
}

bool Number::operator<=(Number ex) {
	if (this->vector <= ex.vector)
		return true;
	else
		return false;
}

bool Number::operator==(Number ex) {
	if (this->vector == ex.vector)
		return true;
	else
		return false;
}

char Number::operator[](int index) {
	int nr = this->vector[index] - '0';
	nr += index;
	char c = nr + '0';
	return c;
}

void Number::operator--() {
	for (int i = 0; i < strlen(this->vector) - 1; i++)
		this->vector[i] = this->vector[i + 1];
	this->vector[strlen(this->vector) - 1] = '\0';
}
void Number::operator--(int numar) {
	this->vector[strlen(this->vector) - 1] = '\0';
}