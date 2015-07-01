// 5.23.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;


int _tmain(int argc, _TCHAR* argv[])
{
	int num1, num2, num3, num4, num5;

	cout << "Enter 5 integers: ";
	cin >> num1 >> num2 >> num3 >> num4 >> num5;

	int smallest = num1;
	int largest = num1;

	if (num2 < smallest)
		smallest = num2;
	if (num3 < smallest)
		smallest = num3;
	if (num4 < smallest)
		smallest = num4;
	if (num5 < smallest)
		smallest = num5;

	if (num2 > largest)
		largest = num2;
	if (num3 > largest)
		largest = num3;
	if (num4 > largest)
		largest = num4;
	if (num5 > largest)
		largest = num5;

	cout << "\nThe smallest is: " << smallest << endl;
	cout << "The largest is: " << largest << endl;

	return 0;
}

