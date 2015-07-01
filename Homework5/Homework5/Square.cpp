#include "Square.h"

Square::Square(const string& color, double length){
  mLength = length;
}


Square::~Square()
{
}

const double Square::area(){
  return mLength * mLength;
}
const string Square::toString(){
  string str = getColor() + " square with a length of " + to_string(mLength) + " and an area of " + to_string(area());
  return str;
}
