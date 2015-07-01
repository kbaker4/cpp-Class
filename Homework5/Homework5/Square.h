#pragma once
#include "Shape.h"

class Square : public Shape
{
private:
  double mLength;
public:
  Square(const string& color, double length);
  ~Square();

  virtual const double area();
  virtual const string toString();

};

