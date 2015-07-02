#include "Circle.h"

Circle::Circle(const string& color, double radius)
  : Shape(color)
{
  mRadius = radius;
}


Circle::~Circle(){
}

const double Circle::area(){
  return 3.14159 * (mRadius * mRadius);
}
const string Circle::toString(){
  string str = getColor() + " circle with a radius of " + to_string(mRadius) + " and an area of " + to_string(area());
  return str;
}
