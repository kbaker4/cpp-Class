#pragma once
#include <string>
#include <iostream>
#include <ostream>
using namespace std;

class Shape
{
private:
  string mColor;
public:
  Shape(const string& color);
  Shape();
  virtual ~Shape();

  const string getColor(){ return mColor; }
  virtual const double area() = 0;
  virtual const string toString() = 0;

};

