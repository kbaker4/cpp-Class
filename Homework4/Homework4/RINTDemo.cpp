
// RINTDemo.cpp - RINT class test code
//
// Adjust the includes and main declaration for your development environment..
/*
#include "RINT.h"

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

// note - you may need to change the definition of the main function to
// be consistent with what your C++ compiler expects.
int main()
{
  cout << endl << "A test of the RINT class  (2/10/13)" << endl << endl;

  RINT x, y = 4;
  int a = 5, b = 2;

  cout << "\nHere are the RINTs x = " << x << " and y = "
    << y << endl;
  cout << "\nHere are the ints a = " << a << " and b = "
    << b << endl << endl;

  cout << "\nTesting stream input for RINT - enter an int value: ";
  cin >> x;
  cout << endl << "You entered an RINT value of " << x << endl;

  cout << "\nTesting copy ctor" << endl;
  RINT z = y;
  cout << "If z is instantiated as y, z = " << z
    << " (should be 4)" << endl;


  cout << "\nTESTING BINARY +" << endl;
  x = 5;
  y = 6;
  z = x + y;
  cout << "If z = x + y and x = " << x << " and y = " << y
    << "  then z = " << z << " (should be 11)" << endl;
  z = x + 10;
  cout << "If z = x + 10 and x = " << x
    << "  then z = " << z << " (should be 15)" << endl;
  z = 1 + x;
  cout << "If z = 1 + x and x = " << x
    << "  then z = " << z << " (should be 6)" << endl;


  cout << "\nTESTING BINARY -" << endl;
  x = 24;
  y = 30;
  z = x - y;
  cout << "If z = x - y and x = " << x << " and y = " << y
    << "  then z = " << z << " (should be -6)" << endl;
  z = x - 10;
  cout << "If z = x - 10 and x = " << x
    << "  then z = " << z << " (should be 14)" << endl;
  z = 1 - x;
  cout << "If z = 1 - x and x = " << x
    << "  then z = " << z << " (should be -23)" << endl;


  cout << "\nTESTING UNARY + - " << endl;
  x = 1;

  x = -x;
  cout << "x = -x  so x now = " << x << " (should be -1)" << endl;
  x = +x;
  cout << "x = +x  so x now = " << x << " (should be -1)" << endl;

  // TODO - after this test code runs successfully, uncomment the following
  // two lines, compile, and include the compile time errors with your output...

  //x++;      //generates compile error
  //y += 3;   //generates compile error

  return 0;
}

*/