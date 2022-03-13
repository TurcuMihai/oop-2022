#include "Math.h"
#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
	Math m;
	cout << m.Add(2, 3) << endl;
	cout << m.Add(5, 6, 7) << endl;
	cout << m.Add(2.0, 4.0)<<endl;
	cout << m.Add(5.0, 6.0, 2.0)<<endl;
	cout << m.Mul(3,4) << endl;
	cout << m.Mul(15,20,10) << endl;
	cout << m.Mul(15.0,3.0) << endl;
	cout << m.Mul(2.0, 3.0, 5.0) << endl;
	char* x = m.Add("Lionel ", "Messi");
	cout << m.Mul(true, 'A', 3)<<endl;
	cout << m.Mul(2.0f, 3.0f)<<endl;
	cout << m.Add(10, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10);
	


	return 0;
}