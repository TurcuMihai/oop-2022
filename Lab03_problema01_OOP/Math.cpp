#define _CRT_SECURE_NO_WARNINGS
#include "Math.h"
#include <cstring>
#include <stdio.h>
#include <stdarg.h>
int Math::Add(int x, int y)
{
	return x+y;
}

int Math::Add(int x, int y, int z)
{
	return x+y+z;
}

int Math::Add(double x, double y)
{
	return x + y;
}

int Math::Add(double x, double y, double z)
{
	return x+y+z;
}

int Math::Mul(int x, int y)
{
	return x*y;
}

int Math::Mul(int x , int y , int z)
{
	return x*y*z;
}

int Math::Mul(double x, double y)
{
	return x*y;
}

int Math::Mul(double x, double y, double z)
{
	return x*y*z;
}

int Math::Add(int count, ...)
{
	int val;
	int sum=0;
	va_list v1;
	va_start(v1, count);
	for (int i = 0; i < count; i++)
	{
		val = va_arg(v1, int);
		sum += val;
	}
	va_end(v1);
	return sum;
}
char* Math::Add(const char* name1, const char* name2)
{
	char concatenare[100] = {};
	// concatenare[0] = '\0';
	if (name1 == nullptr || name2 == nullptr)
		return nullptr;
	else
	{
		strcpy(concatenare, name1);
		strcat(concatenare, name2);
		return concatenare;
	}
}