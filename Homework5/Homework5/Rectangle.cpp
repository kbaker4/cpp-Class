#include "Rectangle.h"


Rectangle::Rectangle(const string& color, double length, double width){
  mLength = length;
  mWidth = width;
}

Rectangle::~Rectangle()
{
}

const double Rectangle::area(){
  return mLength * mWidth;
}
const string Rectangle::toString(){
  string str = getColor() + " rectangle with a length of " + to_string(mLength) + 
    " and a width of " + to_string(mWidth) + " and an area of " + to_string(area());
  return str;
}