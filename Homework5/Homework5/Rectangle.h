#pragma once
#include "Shape.h"

class Rectangle : public Shape
{
private:
  double mLength, mWidth;
public:
  Rectangle(const string& color, double length, double width);
  ~Rectangle();

  virtual const double area();
  virtual const string toString();

};

