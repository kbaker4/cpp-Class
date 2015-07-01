// 2.25.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;


int _tmain(int argc, _TCHAR* argv[])
{
	int num1, num2;

	cout << "Enter two integers: " << endl;
	cin >> num1 >> num2;

	if (num1 % num2 == 0)
		cout << num1 << " is a multiple of " << num2 << endl;
	else
		cout << num1 << " is not a multiple of " << num2 << endl;

	return 0;
}

