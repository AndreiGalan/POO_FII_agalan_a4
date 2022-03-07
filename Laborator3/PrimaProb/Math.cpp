#include "Math.h"
#include <stdio.h>     
#include <stdlib.h> 
#include <stdarg.h>
#include <string.h>

int Math::Add(int x, int y)
{
	return x + y;
}

int Math::Add(int x, int y,int z)
{
	return x + y + z;
}

int Math::Add(double x, double y)
{
	return (int)(x + y);
}

int Math::Add(double x, double y,double z)
{
	return (int)(x + y + z);
}

int Math::Mul(int x, int y)
{
	return x * y;
}

int Math::Mul(int x, int y, int z)
{
	return x * y * z;
}

int Math::Mul(double x, double y)
{
	return (int)(x * y);
}

int Math::Mul(double x, double y, double z)
{
	return (int)(x * y * z);
}

int Math::Add(int n, ...)
{
	int i;
	int x;
	int s = 0;
	va_list l1;
	va_start(l1, n);
	for (i = 0; i < n; i++)
	{
		x = va_arg(l1, int);
		s += x;
	}
	va_end(l1);
	return s;
}

char* Math::Add(const char* s1, const char* s2)
{
	if (s1 == nullptr or s2 == nullptr)
		return nullptr;
	char* s3;
	s3 = (char*)malloc(strlen(s1) + strlen(s2)-4);
	memcpy(s3, s1, strlen(s1));
	memcpy(s3 + strlen(s1), s2, strlen(s2));
	return s3;
}
