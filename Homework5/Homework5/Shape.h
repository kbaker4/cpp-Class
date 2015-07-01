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
  Shape();
  Shape(const string& color);
  ~Shape();

  virtual const string getColor(){ return mColor; }
  virtual const double area();
  virtual const string toString();

};

