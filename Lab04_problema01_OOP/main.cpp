#include <iostream>
#include <ctime>
#include <cstdlib>
#include <initializer_list>
#include <stdio.h>
#include <stdarg.h>
#include "Sort.h"

using namespace std;

int main()
{
	srand((unsigned)time(nullptr));
	Sort L1(5, 2, 25);
	int vector[10] = { 52,26,17,8,2,5,77,128,111,99 };
	Sort L3(vector, 10);
	Sort L4(5, 11, 100, 96, 26, 14);
	Sort L5("10,40,100,5,70");
	Sort L2{ 63, 52 ,5 ,17 ,27 ,8 ,2,3 };
	
	return 0;
}