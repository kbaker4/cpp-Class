#pragma once
#include "Shape.h"

class Circle : public Shape 
{
private:
  double mRadius;
public:
  Circle(const string& color, double radius);
  ~Circle();

  virtual const double area();
  virtual const string toString();

};

