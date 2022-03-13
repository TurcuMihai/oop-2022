#include "Canvas.h"
#include <stdio.h>


int main()
{
	Canvas C(50,50);
	C.DrawCircle(20, 20, 8, '*');
	C.DrawRect(30, 30, 45, 48, '*');
	C.DrawLine(5, 5, 10, 15, '*');

	C.Print();
	
	
	return 0;
}