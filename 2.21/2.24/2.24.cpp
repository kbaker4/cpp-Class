// 2.24.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;


int _tmain(int argc, _TCHAR* argv[])
{
	int num, remainder;

	cout << "Enter an integer: ";
	cin >> num;

	remainder = num % 2;

	if (remainder == 0)
		cout << "\nThe number is even.\n";
	else
		cout << "The number is odd.\n";

	return 0;
}

